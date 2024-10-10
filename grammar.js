/**
 * @file Parser for weidu baldur's gate mod langauge
 * @author dark0dave <dark0dave@mykolab.com>
 * @license GPLv3
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const optional_block = ($) => alias(optional($._block), $.block);

module.exports = grammar({
  name: "weidu",

  // As many comments, block comments and blank lines as you like
  extras: ($) => [$.comment, $.block_comment, /\s/],

  rules: {
    program: $ => seq(
      optional($.comment),
      optional($.block_comment),
      optional(repeat($.statement)),
    ),
    // Comments
    comment: $ => seq(
      field('start', "//"),
      field('content', alias(/[^\r\n]*/, $.comment_content)),
      /\n|\r\n/,
    ),
    block_comment: $ => seq(
      field('start', "/\*"),
      optional(/\n|\r\n/),
      optional(field('block_content',
        $.block_comment_text
      )),
      field('end', "\*/"),
      /\n|\r\n/,
    ),
    block_comment_text: $ => /[^*]+|\*[^\/]/,
    // Statements
    statement: $ => choice(
      $.string,
      $.reference_string,
      $.conditional,
    ),
    string: $ => /@[0-9]+\s*=\s*~.*~/,
    reference_string: $ => /%.*%/,
    conditional: $ => $.if_statement,
    // if exp then block {elseif exp then block} [else block] end
    if_statement: $ =>
      seq(
        'IF',
        repeat(field('condition', $.expression)),
        'THEN',
        optional(/\n|\r\n/),
        'RESPONSE',
        optional(/\n|\r\n/),
        field('consequence', optional_block($)),
        repeat(field('alternative', $.elseif_statement)),
        optional(field('alternative', $.else_statement)),
        'END'
      ),
    // elseif exp then block
    elseif_statement: ($) =>
      seq(
        'elseif',
        field('condition', $.expression),
        'THEN',
        field('consequence', optional_block($))
      ),
    // else block
    else_statement: ($) => seq('UNLESS', field('body', optional_block($))),
    // Expressions
  }
});
