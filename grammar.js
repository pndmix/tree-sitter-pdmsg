const PREC = {
  or: 1,
  and: 2,
  bitwise_or: 3,
  xor: 4,
  bitwise_and: 5,
  compare: 6,
  shift: 7,
  plus: 8,
  times: 9,
  unary: 10,
}

const sep = (separator, rule) => seq(rule, repeat(seq(separator, rule)))

module.exports = grammar({
  name: 'pdmsg',

  extras: $ => [/\s|\r?\n/, $.comment],

  inline: $ => [$._expressions],

  word: $ => $.identifier,

  rules: {
    program: $ => repeat($.statement),

    statement: $ => seq($.connect, '<<', sep('+', $.message)),

    connect: $ => seq(alias('Cn', $.keyword_identifier), $.connect_arguments),

    connect_arguments: $ =>
      seq('(', $.port, optional(seq($._delimiter, $.host)), ')'),

    port: $ => /[0-9]+/,

    host: $ => /[a-zA-Z0-9][a-zA-Z0-9.-]*/,

    message: $ => seq('(', sep($._delimiter, $.expression), ')'),

    expression: $ =>
      choice(
        $.subpatch_variable,
        $.operator,
        $.string,
        $.semicolon,
        $.assign_statement,
        seq($._expressions, optional($.semicolon))
      ),

    subpatch_variable: $ => alias(/pd-[^(){},\s]+/, $.identifier),

    operator: $ => {
      const arithmetic = choice('+', '-', '*', '/', 'pow', 'max', 'min')
      const signal = choice('+~', '-~', '*~', '/~', 'max~', 'min~')
      const binary = choice('>', '>=', '<', '<=', '==', '!=', 'div', 'mod')
      const logical = choice('&&', '||')
      const bitwise = choice('&', '|', '<<', '>>')
      return choice(arithmetic, signal, binary, logical, bitwise)
    },

    string: $ =>
      choice(
        seq(
          '"',
          alias(repeat1(token.immediate(/[^"\n]+/)), $.string_content),
          '"'
        ),
        seq(
          "'",
          alias(repeat1(token.immediate(/[^'\n]+/)), $.string_content),
          "'"
        )
      ),

    semicolon: $ => ';',

    assign_statement: $ =>
      seq($.identifier, '=', $._expressions, optional($.semicolon)),

    _expressions: $ =>
      choice(
        $.parenthesized,
        $.boolean_operator,
        $.binary_operator,
        $.comparison_operator,
        $.unary_operator,
        $.number,
        $.function,
        $.identifier,
        $.dollar_variable
      ),

    parenthesized: $ => seq('(', $._expressions, ')'),

    boolean_operator: $ =>
      choice(
        prec.left(PREC.and, seq($._expressions, '&&', $._expressions)),
        prec.left(PREC.or, seq($._expressions, '||', $._expressions))
      ),

    binary_operator: $ =>
      choice(
        prec.left(PREC.times, seq($._expressions, '*', $._expressions)),
        prec.left(PREC.times, seq($._expressions, '/', $._expressions)),
        prec.left(PREC.times, seq($._expressions, '%', $._expressions)),
        prec.left(PREC.plus, seq($._expressions, '+', $._expressions)),
        prec.left(PREC.plus, seq($._expressions, '-', $._expressions)),
        prec.left(PREC.shift, seq($._expressions, '<<', $._expressions)),
        prec.left(PREC.shift, seq($._expressions, '>>', $._expressions)),
        prec.left(PREC.bitwise_and, seq($._expressions, '&', $._expressions)),
        prec.left(PREC.xor, seq($._expressions, '^', $._expressions)),
        prec.left(PREC.bitwise_or, seq($._expressions, '|', $._expressions))
      ),

    comparison_operator: $ =>
      choice(
        prec.left(PREC.compare, seq($._expressions, '<', $._expressions)),
        prec.left(PREC.compare, seq($._expressions, '<=', $._expressions)),
        prec.left(PREC.compare, seq($._expressions, '==', $._expressions)),
        prec.left(PREC.compare, seq($._expressions, '!=', $._expressions)),
        prec.left(PREC.compare, seq($._expressions, '>=', $._expressions)),
        prec.left(PREC.compare, seq($._expressions, '>', $._expressions))
      ),

    unary_operator: $ => {
      const patterns = choice(
        $.parenthesized,
        $.number,
        $.function,
        $.identifier,
        $.dollar_variable
      )
      return choice(
        prec(PREC.unary, seq('~', patterns)),
        prec(PREC.unary, seq('!', patterns)),
        prec(PREC.unary, seq('-', patterns))
      )
    },

    number: $ => {
      const integer = /[0-9]+/
      const hex_literal = seq(choice('0x', '0X'), repeat1(/[a-fA-F0-9]+/))
      const float = /([1-9][0-9]*\.[0-9]*)|(0?\.[0-9]+)/
      const exponent = seq(
        choice(integer, float),
        choice('e', 'E'),
        optional(choice('-', '+')),
        integer
      )
      return choice(integer, hex_literal, float, exponent)
    },

    function: $ => seq(alias($.identifier, $.name), $.arguments),

    arguments: $ => seq('(', sep($._delimiter, $._expressions), ')'),

    dollar_variable: $ => {
      const number = alias(/\$([0-9]|[1-9][0-9]+)/, $.identifier)
      const expr = alias(/\$[ifsv][1-9][0-9]*/, $.identifier)
      const fexpr = seq(
        alias(/\$[xy]([1-9][0-9]*)?/, $.identifier),
        optional($.index_pattern)
      )
      return choice(number, expr, fexpr)
    },

    index_pattern: $ => seq('[', alias(/-?[0-9]+/, $.index), ']'),

    identifier: $ => /[a-zA-Z][a-zA-Z_0-9]*~?/,

    comment: $ => seq('//', /.*/),

    _delimiter: $ => ',',
  },
})
