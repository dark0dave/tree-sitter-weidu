#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 39
#define LARGE_STATE_COUNT 13
#define SYMBOL_COUNT 15
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 6

enum ts_symbol_identifiers {
  anon_sym_SLASH_SLASH = 1,
  aux_sym_comment_token1 = 2,
  aux_sym_comment_token2 = 3,
  anon_sym_SLASH_STAR = 4,
  anon_sym_STAR_SLASH = 5,
  sym_block_comment_text = 6,
  sym_string = 7,
  sym_reference_string = 8,
  sym_conditional = 9,
  sym_program = 10,
  sym_comment = 11,
  sym_block_comment = 12,
  sym_statement = 13,
  aux_sym_program_repeat1 = 14,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_comment_token1] = "comment_content",
  [aux_sym_comment_token2] = "comment_token2",
  [anon_sym_SLASH_STAR] = "/*",
  [anon_sym_STAR_SLASH] = "*/",
  [sym_block_comment_text] = "block_comment_text",
  [sym_string] = "string",
  [sym_reference_string] = "reference_string",
  [sym_conditional] = "conditional",
  [sym_program] = "program",
  [sym_comment] = "comment",
  [sym_block_comment] = "block_comment",
  [sym_statement] = "statement",
  [aux_sym_program_repeat1] = "program_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [anon_sym_STAR_SLASH] = anon_sym_STAR_SLASH,
  [sym_block_comment_text] = sym_block_comment_text,
  [sym_string] = sym_string,
  [sym_reference_string] = sym_reference_string,
  [sym_conditional] = sym_conditional,
  [sym_program] = sym_program,
  [sym_comment] = sym_comment,
  [sym_block_comment] = sym_block_comment,
  [sym_statement] = sym_statement,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_block_comment_text] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_reference_string] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_block_content = 1,
  field_content = 2,
  field_end = 3,
  field_start = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_block_content] = "block_content",
  [field_content] = "content",
  [field_end] = "end",
  [field_start] = "start",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 2},
  [4] = {.index = 6, .length = 3},
  [5] = {.index = 9, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_content, 1},
    {field_start, 0},
  [2] =
    {field_end, 1},
    {field_start, 0},
  [4] =
    {field_end, 2},
    {field_start, 0},
  [6] =
    {field_block_content, 1},
    {field_end, 2},
    {field_start, 0},
  [9] =
    {field_block_content, 2},
    {field_end, 3},
    {field_start, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 13,
  [15] = 15,
  [16] = 15,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 20,
  [27] = 17,
  [28] = 22,
  [29] = 24,
  [30] = 25,
  [31] = 19,
  [32] = 18,
  [33] = 21,
  [34] = 9,
  [35] = 10,
  [36] = 11,
  [37] = 8,
  [38] = 6,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(26);
      ADVANCE_MAP(
        '%', 3,
        '*', 6,
        '/', 4,
        '@', 25,
        'E', 16,
        'I', 14,
        'R', 12,
        'T', 15,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '\r') ADVANCE(39);
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(40);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '/') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 3:
      if (lookahead == '%') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(35);
      if (lookahead == '/') ADVANCE(27);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(40);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(37);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(37);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(23);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(23);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == 'D') ADVANCE(45);
      END_STATE();
    case 11:
      if (lookahead == 'E') ADVANCE(45);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(21);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(17);
      END_STATE();
    case 14:
      if (lookahead == 'F') ADVANCE(45);
      END_STATE();
    case 15:
      if (lookahead == 'H') ADVANCE(13);
      END_STATE();
    case 16:
      if (lookahead == 'N') ADVANCE(10);
      END_STATE();
    case 17:
      if (lookahead == 'N') ADVANCE(45);
      END_STATE();
    case 18:
      if (lookahead == 'N') ADVANCE(22);
      END_STATE();
    case 19:
      if (lookahead == 'O') ADVANCE(18);
      END_STATE();
    case 20:
      if (lookahead == 'P') ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == 'S') ADVANCE(20);
      END_STATE();
    case 22:
      if (lookahead == 'S') ADVANCE(11);
      END_STATE();
    case 23:
      if (lookahead == '~') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '~') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(32);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(42);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '*') ADVANCE(36);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(32);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '\r') ADVANCE(39);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(39);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '\r') ADVANCE(2);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(32);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_block_comment_text);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_block_comment_text);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '\r') ADVANCE(39);
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(40);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_block_comment_text);
      if (lookahead == '*') ADVANCE(35);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_block_comment_text);
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(40);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_block_comment_text);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '~') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_reference_string);
      if (lookahead == '%') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_conditional);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 31},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 31},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {(TSStateId)(-1)},
  [35] = {(TSStateId)(-1)},
  [36] = {(TSStateId)(-1)},
  [37] = {(TSStateId)(-1)},
  [38] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [sym_block_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [anon_sym_STAR_SLASH] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_reference_string] = ACTIONS(1),
    [sym_conditional] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(23),
    [sym_comment] = STATE(1),
    [sym_block_comment] = STATE(1),
    [sym_statement] = STATE(12),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_SLASH_SLASH] = ACTIONS(9),
    [anon_sym_SLASH_STAR] = ACTIONS(11),
    [sym_string] = ACTIONS(13),
    [sym_reference_string] = ACTIONS(13),
    [sym_conditional] = ACTIONS(13),
  },
  [2] = {
    [sym_comment] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym_statement] = STATE(12),
    [aux_sym_program_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [sym_string] = ACTIONS(13),
    [sym_reference_string] = ACTIONS(13),
    [sym_conditional] = ACTIONS(13),
  },
  [3] = {
    [sym_comment] = STATE(3),
    [sym_block_comment] = STATE(3),
    [sym_statement] = STATE(12),
    [aux_sym_program_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [sym_string] = ACTIONS(13),
    [sym_reference_string] = ACTIONS(13),
    [sym_conditional] = ACTIONS(13),
  },
  [4] = {
    [sym_comment] = STATE(4),
    [sym_block_comment] = STATE(4),
    [sym_statement] = STATE(12),
    [aux_sym_program_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [sym_string] = ACTIONS(21),
    [sym_reference_string] = ACTIONS(21),
    [sym_conditional] = ACTIONS(21),
  },
  [5] = {
    [sym_comment] = STATE(5),
    [sym_block_comment] = STATE(5),
    [sym_statement] = STATE(12),
    [aux_sym_program_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(24),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [sym_string] = ACTIONS(13),
    [sym_reference_string] = ACTIONS(13),
    [sym_conditional] = ACTIONS(13),
  },
  [6] = {
    [sym_comment] = STATE(6),
    [sym_block_comment] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(26),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [sym_string] = ACTIONS(26),
    [sym_reference_string] = ACTIONS(26),
    [sym_conditional] = ACTIONS(26),
  },
  [7] = {
    [sym_comment] = STATE(7),
    [sym_block_comment] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(28),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [sym_string] = ACTIONS(28),
    [sym_reference_string] = ACTIONS(28),
    [sym_conditional] = ACTIONS(28),
  },
  [8] = {
    [sym_comment] = STATE(8),
    [sym_block_comment] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(30),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [sym_string] = ACTIONS(30),
    [sym_reference_string] = ACTIONS(30),
    [sym_conditional] = ACTIONS(30),
  },
  [9] = {
    [sym_comment] = STATE(9),
    [sym_block_comment] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(32),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(32),
    [sym_string] = ACTIONS(32),
    [sym_reference_string] = ACTIONS(32),
    [sym_conditional] = ACTIONS(32),
  },
  [10] = {
    [sym_comment] = STATE(10),
    [sym_block_comment] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(34),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [sym_string] = ACTIONS(34),
    [sym_reference_string] = ACTIONS(34),
    [sym_conditional] = ACTIONS(34),
  },
  [11] = {
    [sym_comment] = STATE(11),
    [sym_block_comment] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(36),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [sym_string] = ACTIONS(36),
    [sym_reference_string] = ACTIONS(36),
    [sym_conditional] = ACTIONS(36),
  },
  [12] = {
    [sym_comment] = STATE(12),
    [sym_block_comment] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(38),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [sym_string] = ACTIONS(38),
    [sym_reference_string] = ACTIONS(38),
    [sym_conditional] = ACTIONS(38),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(40), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(42), 1,
      aux_sym_comment_token2,
    ACTIONS(44), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(46), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(48), 1,
      sym_block_comment_text,
    STATE(13), 2,
      sym_comment,
      sym_block_comment,
  [20] = 6,
    ACTIONS(40), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(44), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(50), 1,
      aux_sym_comment_token2,
    ACTIONS(52), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(54), 1,
      sym_block_comment_text,
    STATE(14), 2,
      sym_comment,
      sym_block_comment,
  [40] = 5,
    ACTIONS(40), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(44), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(56), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(58), 1,
      sym_block_comment_text,
    STATE(15), 2,
      sym_comment,
      sym_block_comment,
  [57] = 5,
    ACTIONS(40), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(44), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(60), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(62), 1,
      sym_block_comment_text,
    STATE(16), 2,
      sym_comment,
      sym_block_comment,
  [74] = 4,
    ACTIONS(40), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(44), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(64), 1,
      aux_sym_comment_token2,
    STATE(17), 2,
      sym_comment,
      sym_block_comment,
  [88] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(66), 1,
      anon_sym_STAR_SLASH,
    STATE(18), 2,
      sym_comment,
      sym_block_comment,
  [102] = 4,
    ACTIONS(40), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(44), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(68), 1,
      aux_sym_comment_token1,
    STATE(19), 2,
      sym_comment,
      sym_block_comment,
  [116] = 4,
    ACTIONS(40), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(44), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(70), 1,
      aux_sym_comment_token2,
    STATE(20), 2,
      sym_comment,
      sym_block_comment,
  [130] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(72), 1,
      anon_sym_STAR_SLASH,
    STATE(21), 2,
      sym_comment,
      sym_block_comment,
  [144] = 4,
    ACTIONS(40), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(44), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(74), 1,
      aux_sym_comment_token2,
    STATE(22), 2,
      sym_comment,
      sym_block_comment,
  [158] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
    STATE(23), 2,
      sym_comment,
      sym_block_comment,
  [172] = 4,
    ACTIONS(40), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(44), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(78), 1,
      aux_sym_comment_token2,
    STATE(24), 2,
      sym_comment,
      sym_block_comment,
  [186] = 4,
    ACTIONS(40), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(44), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(80), 1,
      aux_sym_comment_token2,
    STATE(25), 2,
      sym_comment,
      sym_block_comment,
  [200] = 4,
    ACTIONS(40), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(44), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(82), 1,
      aux_sym_comment_token2,
    STATE(26), 2,
      sym_comment,
      sym_block_comment,
  [214] = 4,
    ACTIONS(40), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(44), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(84), 1,
      aux_sym_comment_token2,
    STATE(27), 2,
      sym_comment,
      sym_block_comment,
  [228] = 4,
    ACTIONS(40), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(44), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(86), 1,
      aux_sym_comment_token2,
    STATE(28), 2,
      sym_comment,
      sym_block_comment,
  [242] = 4,
    ACTIONS(40), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(44), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(88), 1,
      aux_sym_comment_token2,
    STATE(29), 2,
      sym_comment,
      sym_block_comment,
  [256] = 4,
    ACTIONS(40), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(44), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(90), 1,
      aux_sym_comment_token2,
    STATE(30), 2,
      sym_comment,
      sym_block_comment,
  [270] = 4,
    ACTIONS(40), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(44), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(92), 1,
      aux_sym_comment_token1,
    STATE(31), 2,
      sym_comment,
      sym_block_comment,
  [284] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(94), 1,
      anon_sym_STAR_SLASH,
    STATE(32), 2,
      sym_comment,
      sym_block_comment,
  [298] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(96), 1,
      anon_sym_STAR_SLASH,
    STATE(33), 2,
      sym_comment,
      sym_block_comment,
  [312] = 1,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
  [316] = 1,
    ACTIONS(34), 1,
      ts_builtin_sym_end,
  [320] = 1,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
  [324] = 1,
    ACTIONS(30), 1,
      ts_builtin_sym_end,
  [328] = 1,
    ACTIONS(26), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(13)] = 0,
  [SMALL_STATE(14)] = 20,
  [SMALL_STATE(15)] = 40,
  [SMALL_STATE(16)] = 57,
  [SMALL_STATE(17)] = 74,
  [SMALL_STATE(18)] = 88,
  [SMALL_STATE(19)] = 102,
  [SMALL_STATE(20)] = 116,
  [SMALL_STATE(21)] = 130,
  [SMALL_STATE(22)] = 144,
  [SMALL_STATE(23)] = 158,
  [SMALL_STATE(24)] = 172,
  [SMALL_STATE(25)] = 186,
  [SMALL_STATE(26)] = 200,
  [SMALL_STATE(27)] = 214,
  [SMALL_STATE(28)] = 228,
  [SMALL_STATE(29)] = 242,
  [SMALL_STATE(30)] = 256,
  [SMALL_STATE(31)] = 270,
  [SMALL_STATE(32)] = 284,
  [SMALL_STATE(33)] = 298,
  [SMALL_STATE(34)] = 312,
  [SMALL_STATE(35)] = 316,
  [SMALL_STATE(36)] = 320,
  [SMALL_STATE(37)] = 324,
  [SMALL_STATE(38)] = 328,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3, 0, 0),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 5, 0, 5),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 4, 0, 4),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3, 0, 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3, 0, 2),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 4, 0, 3),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [76] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_weidu(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
