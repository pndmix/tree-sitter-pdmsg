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

    expression: $ => choice($._expressions, $.keyword_identifier),

    _expressions: $ =>
      choice(
        $.parenthesized,
        $.boolean_operator,
        $.binary_operator,
        $.comparison_operator,
        $.unary_operator,
        $.number,
        $.function,
        $.identifier
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
        $.identifier
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

    function: $ => {
      const base = /if|int|rint|float|min|max|abs/
      const power = /pow|sqrt|exp|ln|log|log10|fact|cbrt|expm1|log1p|ldexp/
      const trigonometric = /sin|cos|tan|asin|acos|atan|atan2|sinh|cosh|tanh|asinh|acosh|atanh|floor|ceil|fmod/
      return seq(alias(choice(base, power, trigonometric), $.name), $.arguments)
    },

    arguments: $ => seq('(', sep($._delimiter, $._expressions), ')'),

    _delimiter: $ => ',',

    identifier: $ => /[a-zA-Z_$]\w*/,

    keyword_identifier: $ => choice('bang', 'connect'),

    comment: $ => seq('//', /.*/),
  },
})
