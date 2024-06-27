/**
 * @file Tree-sitter grammar definition
 * @author ObserverOfTime
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'xcompose',

  extras: _ => [],

  conflicts: $ => [
    [$.result]
  ],

  rules: {
    compose: $ => repeat(
      seq(
        optional($._space),
        optional(choice(
          $.include,
          $.sequence,
          $.comment,
        )),
        /\n/
      )
    ),

    include: $ => seq(
      'include',
      $._space,
      '"',
      choice(
        '%L', seq(
          choice('%H', '%S'),
          $.text
        )
      ),
      '"',
      optional($._space)
    ),

    sequence: $ => seq(
      repeat1(seq($.event, $._space)),
      ':',
      $._space,
      $.result,
      optional($._space),
      optional($.comment)
    ),

    event: $ => seq(
      optional(seq('!', $._space)),
      optional(choice(
        repeat(seq(
          optional(seq('~', $._space)),
          $.modifier,
          $._space
        )),
        seq('None', $._space),
      )),
      '<', $.keysym, '>',

    ),

    result: $ => choice(
      $.string,
      $.keysym,
      seq($.string, $._space, $.keysym)
    ),

    string: $ => seq(
      '"', choice($.text, $.octal, $.hex), '"'
    ),

    modifier: _ => token(choice(
      'Ctrl', 'Lock', 'Caps', 'Shift', 'Alt', 'Meta'
    )),

    keysym: _ => /[A-Za-z0-9_]+/,

    text: _ => repeat1(/[^"]|\\"/),

    octal: _ => /\\[0-9]{1,3}/,

    hex: _ => /\\0?x[0-9a-fA-F]{2,4}/,

    comment: _ => /#.*/,

    _space: _ => /[ \t]+/
  }
});
