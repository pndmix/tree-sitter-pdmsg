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

const chain = rule => seq('.', sep('.', rule))

module.exports = grammar({
  name: 'pdmsg',

  extras: $ => [/[\s\n]/, $.comment],

  inline: $ => [$._expressions],

  word: $ => $.identifier,

  rules: {
    program: $ => repeat($.send_statement),

    send_statement: $ => seq($.send_block, chain($.message_block)),

    send_block: $ =>
      seq(
        alias('send', $.keyword_identifier),
        '(',
        $.port,
        optional(seq($._delimiter, $.host)),
        ')'
      ),

    port: $ => /[0-9]+/,

    host: $ => /[a-zA-Z0-9][a-zA-Z0-9.-]*/,

    message_block: $ =>
      seq(
        alias('msg', $.keyword_identifier),
        '(',
        sep($._delimiter, $.expression),
        ')'
      ),

    expression: $ => $._expressions,

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
        $.dollar_variable,
        $.subpatch_variable
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
      const float = /([1-9][0-9]*\.[0-9]*)|(0?\.[0-9]+)/
      const exponent = seq(
        choice(integer, float),
        choice('e', 'E'),
        optional(choice('-', '+')),
        integer
      )
      return choice(integer, float, exponent)
    },

    function: $ => seq(alias($.identifier, $.name), $.arguments),

    arguments: $ => seq('(', sep($._delimiter, $._expressions), ')'),

    dollar_variable: $ => {
      const number = /\$([0-9]|[1-9][0-9]+)/
      const expr = /\$[ifsv][1-9][0-9]*/
      const fexpr = choice(
        /\$[xy]/,
        seq(
          /\$x[1-9][0-9]*/,
          optional(alias(seq('[', /[0-9]/, ']'), $.list_pattern))
        )
      )
      return alias(choice(number, expr, fexpr), $.identifier)
    },

    subpatch_variable: $ =>
      alias(
        choice(
          /pd-[!-'*-+\--\/0-z|~]/,
          /pd-[!-#%-'*-+\--\/0-z|~][!-'*-+\--\/0-z|~]+/,
          /pd-\$[0-9]*[!-'*-+\--\/:-z|~][!-'*-+\--\/0-z|~]*/
        ),
        $.identifier
      ),

    identifier: $ => /[a-zA-Z_$]\w*/,

    comment: $ => seq('//', /.*/),

    _delimiter: $ => ',',
  },
})
