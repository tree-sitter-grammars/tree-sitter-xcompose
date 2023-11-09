#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 67
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 29
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_compose_token1 = 1,
  anon_sym_include = 2,
  anon_sym_DQUOTE = 3,
  anon_sym_PERCENTL = 4,
  anon_sym_PERCENTH = 5,
  anon_sym_PERCENTS = 6,
  anon_sym_COLON = 7,
  anon_sym_BANG = 8,
  anon_sym_TILDE = 9,
  anon_sym_None = 10,
  anon_sym_LT = 11,
  anon_sym_GT = 12,
  sym_modifier = 13,
  sym_keysym = 14,
  sym_text = 15,
  sym_octal = 16,
  sym_hex = 17,
  sym_comment = 18,
  sym__space = 19,
  sym_compose = 20,
  sym_include = 21,
  sym_sequence = 22,
  sym_event = 23,
  sym_result = 24,
  sym_string = 25,
  aux_sym_compose_repeat1 = 26,
  aux_sym_sequence_repeat1 = 27,
  aux_sym_event_repeat1 = 28,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_compose_token1] = "compose_token1",
  [anon_sym_include] = "include",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_PERCENTL] = "%L",
  [anon_sym_PERCENTH] = "%H",
  [anon_sym_PERCENTS] = "%S",
  [anon_sym_COLON] = ":",
  [anon_sym_BANG] = "!",
  [anon_sym_TILDE] = "~",
  [anon_sym_None] = "None",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [sym_modifier] = "modifier",
  [sym_keysym] = "keysym",
  [sym_text] = "text",
  [sym_octal] = "octal",
  [sym_hex] = "hex",
  [sym_comment] = "comment",
  [sym__space] = "_space",
  [sym_compose] = "compose",
  [sym_include] = "include",
  [sym_sequence] = "sequence",
  [sym_event] = "event",
  [sym_result] = "result",
  [sym_string] = "string",
  [aux_sym_compose_repeat1] = "compose_repeat1",
  [aux_sym_sequence_repeat1] = "sequence_repeat1",
  [aux_sym_event_repeat1] = "event_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_compose_token1] = aux_sym_compose_token1,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_PERCENTL] = anon_sym_PERCENTL,
  [anon_sym_PERCENTH] = anon_sym_PERCENTH,
  [anon_sym_PERCENTS] = anon_sym_PERCENTS,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_None] = anon_sym_None,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [sym_modifier] = sym_modifier,
  [sym_keysym] = sym_keysym,
  [sym_text] = sym_text,
  [sym_octal] = sym_octal,
  [sym_hex] = sym_hex,
  [sym_comment] = sym_comment,
  [sym__space] = sym__space,
  [sym_compose] = sym_compose,
  [sym_include] = sym_include,
  [sym_sequence] = sym_sequence,
  [sym_event] = sym_event,
  [sym_result] = sym_result,
  [sym_string] = sym_string,
  [aux_sym_compose_repeat1] = aux_sym_compose_repeat1,
  [aux_sym_sequence_repeat1] = aux_sym_sequence_repeat1,
  [aux_sym_event_repeat1] = aux_sym_event_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_compose_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_None] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_keysym] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_octal] = {
    .visible = true,
    .named = true,
  },
  [sym_hex] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__space] = {
    .visible = false,
    .named = true,
  },
  [sym_compose] = {
    .visible = true,
    .named = true,
  },
  [sym_include] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_event] = {
    .visible = true,
    .named = true,
  },
  [sym_result] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_compose_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sequence_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_event_repeat1] = {
    .visible = false,
    .named = false,
  },
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
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(36);
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '!') ADVANCE(45);
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '#') ADVANCE(93);
      if (lookahead == '%') ADVANCE(3);
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == '<') ADVANCE(49);
      if (lookahead == '>') ADVANCE(50);
      if (lookahead == 'A') ADVANCE(65);
      if (lookahead == 'C') ADVANCE(53);
      if (lookahead == 'L') ADVANCE(70);
      if (lookahead == 'M') ADVANCE(60);
      if (lookahead == 'N') ADVANCE(71);
      if (lookahead == 'S') ADVANCE(62);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == 'i') ADVANCE(69);
      if (lookahead == '~') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 2:
      if (lookahead == '0') ADVANCE(30);
      if (lookahead == 'x') ADVANCE(34);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 3:
      if (lookahead == 'H') ADVANCE(42);
      if (lookahead == 'L') ADVANCE(41);
      if (lookahead == 'S') ADVANCE(43);
      END_STATE();
    case 4:
      if (lookahead == '\\') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(86);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(24);
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 7:
      if (lookahead == 'c') ADVANCE(16);
      END_STATE();
    case 8:
      if (lookahead == 'c') ADVANCE(19);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 13:
      if (lookahead == 'f') ADVANCE(27);
      END_STATE();
    case 14:
      if (lookahead == 'h') ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == 'i') ADVANCE(13);
      END_STATE();
    case 16:
      if (lookahead == 'k') ADVANCE(51);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 22:
      if (lookahead == 'o') ADVANCE(7);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 24:
      if (lookahead == 'p') ADVANCE(26);
      END_STATE();
    case 25:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 26:
      if (lookahead == 's') ADVANCE(51);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 29:
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 30:
      if (lookahead == 'x') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(92);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(33);
      END_STATE();
    case 35:
      if (eof) ADVANCE(36);
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '!') ADVANCE(45);
      if (lookahead == '#') ADVANCE(93);
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == '<') ADVANCE(49);
      if (lookahead == 'A') ADVANCE(17);
      if (lookahead == 'C') ADVANCE(5);
      if (lookahead == 'L') ADVANCE(22);
      if (lookahead == 'M') ADVANCE(12);
      if (lookahead == 'N') ADVANCE(23);
      if (lookahead == 'S') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(21);
      if (lookahead == '~') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(94);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_compose_token1);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_include);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_PERCENTL);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_PERCENTH);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_PERCENTS);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_None);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_None);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_modifier);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_modifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 'a') ADVANCE(72);
      if (lookahead == 't') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 'a') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 'c') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 'c') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 'd') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 'e') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 'e') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 'e') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 'f') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 'h') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 'i') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 'k') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 'l') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 'l') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 'l') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 'n') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 'n') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 'o') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 'o') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 'p') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 'r') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 's') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 't') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 't') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 'u') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_keysym);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\\') ADVANCE(88);
      if (lookahead == 'x') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(86);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\\') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(86);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\\') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(86);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\\') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(86);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\\') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(86);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\\') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(86);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\\') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\\') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          lookahead != '\\' &&
          lookahead != 'x') ADVANCE(86);
      if (lookahead == '0') ADVANCE(79);
      if (lookahead == '\\') ADVANCE(88);
      if (lookahead == 'x') ADVANCE(85);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(86);
      if (lookahead == '\\') ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_octal);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_hex);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(94);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 35},
  [2] = {.lex_state = 35},
  [3] = {.lex_state = 35},
  [4] = {.lex_state = 35},
  [5] = {.lex_state = 35},
  [6] = {.lex_state = 35},
  [7] = {.lex_state = 35},
  [8] = {.lex_state = 35},
  [9] = {.lex_state = 35},
  [10] = {.lex_state = 35},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 35},
  [13] = {.lex_state = 35},
  [14] = {.lex_state = 35},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 35},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 35},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 35},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_compose_token1] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_PERCENTL] = ACTIONS(1),
    [anon_sym_PERCENTH] = ACTIONS(1),
    [anon_sym_PERCENTS] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_None] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym_modifier] = ACTIONS(1),
    [sym_keysym] = ACTIONS(1),
    [sym_octal] = ACTIONS(1),
    [sym_hex] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym__space] = ACTIONS(1),
  },
  [1] = {
    [sym_compose] = STATE(28),
    [sym_include] = STATE(47),
    [sym_sequence] = STATE(47),
    [sym_event] = STATE(45),
    [aux_sym_compose_repeat1] = STATE(3),
    [aux_sym_sequence_repeat1] = STATE(7),
    [aux_sym_event_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_compose_token1] = ACTIONS(5),
    [anon_sym_include] = ACTIONS(7),
    [anon_sym_BANG] = ACTIONS(9),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_None] = ACTIONS(13),
    [anon_sym_LT] = ACTIONS(15),
    [sym_modifier] = ACTIONS(17),
    [sym_comment] = ACTIONS(19),
    [sym__space] = ACTIONS(21),
  },
  [2] = {
    [sym_include] = STATE(47),
    [sym_sequence] = STATE(47),
    [sym_event] = STATE(45),
    [aux_sym_compose_repeat1] = STATE(2),
    [aux_sym_sequence_repeat1] = STATE(7),
    [aux_sym_event_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(23),
    [aux_sym_compose_token1] = ACTIONS(25),
    [anon_sym_include] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(34),
    [anon_sym_None] = ACTIONS(37),
    [anon_sym_LT] = ACTIONS(40),
    [sym_modifier] = ACTIONS(43),
    [sym_comment] = ACTIONS(46),
    [sym__space] = ACTIONS(49),
  },
  [3] = {
    [sym_include] = STATE(47),
    [sym_sequence] = STATE(47),
    [sym_event] = STATE(45),
    [aux_sym_compose_repeat1] = STATE(2),
    [aux_sym_sequence_repeat1] = STATE(7),
    [aux_sym_event_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(52),
    [aux_sym_compose_token1] = ACTIONS(54),
    [anon_sym_include] = ACTIONS(7),
    [anon_sym_BANG] = ACTIONS(9),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_None] = ACTIONS(13),
    [anon_sym_LT] = ACTIONS(15),
    [sym_modifier] = ACTIONS(17),
    [sym_comment] = ACTIONS(19),
    [sym__space] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(7), 1,
      anon_sym_include,
    ACTIONS(9), 1,
      anon_sym_BANG,
    ACTIONS(11), 1,
      anon_sym_TILDE,
    ACTIONS(13), 1,
      anon_sym_None,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      sym_modifier,
    ACTIONS(56), 1,
      aux_sym_compose_token1,
    ACTIONS(58), 1,
      sym_comment,
    STATE(7), 1,
      aux_sym_sequence_repeat1,
    STATE(12), 1,
      aux_sym_event_repeat1,
    STATE(45), 1,
      sym_event,
    STATE(46), 2,
      sym_include,
      sym_sequence,
  [38] = 1,
    ACTIONS(23), 10,
      ts_builtin_sym_end,
      aux_sym_compose_token1,
      anon_sym_include,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_None,
      anon_sym_LT,
      sym_modifier,
      sym_comment,
      sym__space,
  [51] = 1,
    ACTIONS(60), 10,
      ts_builtin_sym_end,
      aux_sym_compose_token1,
      anon_sym_include,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_None,
      anon_sym_LT,
      sym_modifier,
      sym_comment,
      sym__space,
  [64] = 9,
    ACTIONS(9), 1,
      anon_sym_BANG,
    ACTIONS(11), 1,
      anon_sym_TILDE,
    ACTIONS(13), 1,
      anon_sym_None,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      sym_modifier,
    ACTIONS(62), 1,
      anon_sym_COLON,
    STATE(8), 1,
      aux_sym_sequence_repeat1,
    STATE(12), 1,
      aux_sym_event_repeat1,
    STATE(45), 1,
      sym_event,
  [92] = 9,
    ACTIONS(64), 1,
      anon_sym_COLON,
    ACTIONS(66), 1,
      anon_sym_BANG,
    ACTIONS(69), 1,
      anon_sym_TILDE,
    ACTIONS(72), 1,
      anon_sym_None,
    ACTIONS(75), 1,
      anon_sym_LT,
    ACTIONS(78), 1,
      sym_modifier,
    STATE(8), 1,
      aux_sym_sequence_repeat1,
    STATE(12), 1,
      aux_sym_event_repeat1,
    STATE(45), 1,
      sym_event,
  [120] = 1,
    ACTIONS(64), 6,
      anon_sym_COLON,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_None,
      anon_sym_LT,
      sym_modifier,
  [129] = 5,
    ACTIONS(11), 1,
      anon_sym_TILDE,
    ACTIONS(17), 1,
      sym_modifier,
    ACTIONS(81), 1,
      anon_sym_None,
    ACTIONS(83), 1,
      anon_sym_LT,
    STATE(13), 1,
      aux_sym_event_repeat1,
  [145] = 4,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(87), 1,
      sym_keysym,
    STATE(18), 1,
      sym_result,
    STATE(20), 1,
      sym_string,
  [158] = 4,
    ACTIONS(11), 1,
      anon_sym_TILDE,
    ACTIONS(17), 1,
      sym_modifier,
    ACTIONS(89), 1,
      anon_sym_LT,
    STATE(14), 1,
      aux_sym_event_repeat1,
  [171] = 4,
    ACTIONS(11), 1,
      anon_sym_TILDE,
    ACTIONS(17), 1,
      sym_modifier,
    ACTIONS(91), 1,
      anon_sym_LT,
    STATE(14), 1,
      aux_sym_event_repeat1,
  [184] = 4,
    ACTIONS(93), 1,
      anon_sym_TILDE,
    ACTIONS(96), 1,
      anon_sym_LT,
    ACTIONS(98), 1,
      sym_modifier,
    STATE(14), 1,
      aux_sym_event_repeat1,
  [197] = 1,
    ACTIONS(101), 3,
      aux_sym_compose_token1,
      sym_comment,
      sym__space,
  [203] = 2,
    ACTIONS(103), 1,
      sym_text,
    ACTIONS(105), 2,
      sym_octal,
      sym_hex,
  [211] = 1,
    ACTIONS(107), 3,
      aux_sym_compose_token1,
      sym_comment,
      sym__space,
  [217] = 3,
    ACTIONS(109), 1,
      aux_sym_compose_token1,
    ACTIONS(111), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym__space,
  [227] = 1,
    ACTIONS(115), 3,
      anon_sym_TILDE,
      anon_sym_LT,
      sym_modifier,
  [233] = 2,
    ACTIONS(117), 1,
      sym__space,
    ACTIONS(101), 2,
      aux_sym_compose_token1,
      sym_comment,
  [241] = 1,
    ACTIONS(96), 3,
      anon_sym_TILDE,
      anon_sym_LT,
      sym_modifier,
  [247] = 2,
    ACTIONS(120), 1,
      anon_sym_PERCENTL,
    ACTIONS(122), 2,
      anon_sym_PERCENTH,
      anon_sym_PERCENTS,
  [255] = 1,
    ACTIONS(124), 3,
      aux_sym_compose_token1,
      sym_comment,
      sym__space,
  [261] = 2,
    ACTIONS(126), 1,
      aux_sym_compose_token1,
    ACTIONS(128), 1,
      sym__space,
  [268] = 2,
    ACTIONS(130), 1,
      aux_sym_compose_token1,
    ACTIONS(132), 1,
      sym_comment,
  [275] = 2,
    ACTIONS(134), 1,
      aux_sym_compose_token1,
    ACTIONS(136), 1,
      sym__space,
  [282] = 1,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
  [286] = 1,
    ACTIONS(140), 1,
      ts_builtin_sym_end,
  [290] = 1,
    ACTIONS(142), 1,
      sym__space,
  [294] = 1,
    ACTIONS(144), 1,
      sym_keysym,
  [298] = 1,
    ACTIONS(146), 1,
      sym__space,
  [302] = 1,
    ACTIONS(148), 1,
      sym_keysym,
  [306] = 1,
    ACTIONS(150), 1,
      sym__space,
  [310] = 1,
    ACTIONS(152), 1,
      sym__space,
  [314] = 1,
    ACTIONS(154), 1,
      sym__space,
  [318] = 1,
    ACTIONS(156), 1,
      anon_sym_GT,
  [322] = 1,
    ACTIONS(158), 1,
      anon_sym_GT,
  [326] = 1,
    ACTIONS(160), 1,
      anon_sym_DQUOTE,
  [330] = 1,
    ACTIONS(162), 1,
      sym_text,
  [334] = 1,
    ACTIONS(164), 1,
      anon_sym_LT,
  [338] = 1,
    ACTIONS(166), 1,
      anon_sym_GT,
  [342] = 1,
    ACTIONS(168), 1,
      sym_keysym,
  [346] = 1,
    ACTIONS(83), 1,
      anon_sym_LT,
  [350] = 1,
    ACTIONS(170), 1,
      sym_modifier,
  [354] = 1,
    ACTIONS(172), 1,
      sym__space,
  [358] = 1,
    ACTIONS(174), 1,
      aux_sym_compose_token1,
  [362] = 1,
    ACTIONS(56), 1,
      aux_sym_compose_token1,
  [366] = 1,
    ACTIONS(176), 1,
      sym__space,
  [370] = 1,
    ACTIONS(178), 1,
      sym__space,
  [374] = 1,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
  [378] = 1,
    ACTIONS(182), 1,
      sym_keysym,
  [382] = 1,
    ACTIONS(184), 1,
      sym__space,
  [386] = 1,
    ACTIONS(186), 1,
      anon_sym_GT,
  [390] = 1,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
  [394] = 1,
    ACTIONS(130), 1,
      aux_sym_compose_token1,
  [398] = 1,
    ACTIONS(190), 1,
      sym_keysym,
  [402] = 1,
    ACTIONS(192), 1,
      sym_keysym,
  [406] = 1,
    ACTIONS(134), 1,
      aux_sym_compose_token1,
  [410] = 1,
    ACTIONS(194), 1,
      sym__space,
  [414] = 1,
    ACTIONS(196), 1,
      anon_sym_GT,
  [418] = 1,
    ACTIONS(198), 1,
      sym__space,
  [422] = 1,
    ACTIONS(200), 1,
      sym__space,
  [426] = 1,
    ACTIONS(202), 1,
      aux_sym_compose_token1,
  [430] = 1,
    ACTIONS(204), 1,
      sym__space,
  [434] = 1,
    ACTIONS(206), 1,
      aux_sym_compose_token1,
  [438] = 1,
    ACTIONS(208), 1,
      sym__space,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 38,
  [SMALL_STATE(6)] = 51,
  [SMALL_STATE(7)] = 64,
  [SMALL_STATE(8)] = 92,
  [SMALL_STATE(9)] = 120,
  [SMALL_STATE(10)] = 129,
  [SMALL_STATE(11)] = 145,
  [SMALL_STATE(12)] = 158,
  [SMALL_STATE(13)] = 171,
  [SMALL_STATE(14)] = 184,
  [SMALL_STATE(15)] = 197,
  [SMALL_STATE(16)] = 203,
  [SMALL_STATE(17)] = 211,
  [SMALL_STATE(18)] = 217,
  [SMALL_STATE(19)] = 227,
  [SMALL_STATE(20)] = 233,
  [SMALL_STATE(21)] = 241,
  [SMALL_STATE(22)] = 247,
  [SMALL_STATE(23)] = 255,
  [SMALL_STATE(24)] = 261,
  [SMALL_STATE(25)] = 268,
  [SMALL_STATE(26)] = 275,
  [SMALL_STATE(27)] = 282,
  [SMALL_STATE(28)] = 286,
  [SMALL_STATE(29)] = 290,
  [SMALL_STATE(30)] = 294,
  [SMALL_STATE(31)] = 298,
  [SMALL_STATE(32)] = 302,
  [SMALL_STATE(33)] = 306,
  [SMALL_STATE(34)] = 310,
  [SMALL_STATE(35)] = 314,
  [SMALL_STATE(36)] = 318,
  [SMALL_STATE(37)] = 322,
  [SMALL_STATE(38)] = 326,
  [SMALL_STATE(39)] = 330,
  [SMALL_STATE(40)] = 334,
  [SMALL_STATE(41)] = 338,
  [SMALL_STATE(42)] = 342,
  [SMALL_STATE(43)] = 346,
  [SMALL_STATE(44)] = 350,
  [SMALL_STATE(45)] = 354,
  [SMALL_STATE(46)] = 358,
  [SMALL_STATE(47)] = 362,
  [SMALL_STATE(48)] = 366,
  [SMALL_STATE(49)] = 370,
  [SMALL_STATE(50)] = 374,
  [SMALL_STATE(51)] = 378,
  [SMALL_STATE(52)] = 382,
  [SMALL_STATE(53)] = 386,
  [SMALL_STATE(54)] = 390,
  [SMALL_STATE(55)] = 394,
  [SMALL_STATE(56)] = 398,
  [SMALL_STATE(57)] = 402,
  [SMALL_STATE(58)] = 406,
  [SMALL_STATE(59)] = 410,
  [SMALL_STATE(60)] = 414,
  [SMALL_STATE(61)] = 418,
  [SMALL_STATE(62)] = 422,
  [SMALL_STATE(63)] = 426,
  [SMALL_STATE(64)] = 430,
  [SMALL_STATE(65)] = 434,
  [SMALL_STATE(66)] = 438,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compose, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compose_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compose_repeat1, 2), SHIFT_REPEAT(2),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compose_repeat1, 2), SHIFT_REPEAT(35),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compose_repeat1, 2), SHIFT_REPEAT(64),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compose_repeat1, 2), SHIFT_REPEAT(62),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compose_repeat1, 2), SHIFT_REPEAT(59),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compose_repeat1, 2), SHIFT_REPEAT(56),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compose_repeat1, 2), SHIFT_REPEAT(49),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compose_repeat1, 2), SHIFT_REPEAT(47),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compose_repeat1, 2), SHIFT_REPEAT(4),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compose, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compose_repeat1, 3),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_repeat1, 2),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(64),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(62),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(59),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(56),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(49),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_event_repeat1, 2), SHIFT_REPEAT(62),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_event_repeat1, 2),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_event_repeat1, 2), SHIFT_REPEAT(49),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 4),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_event_repeat1, 4),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_result, 1), SHIFT(57),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 5),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 5),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 6),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [140] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event, 3),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event, 4),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event, 5),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event, 6),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 6),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 7),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event, 7),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_xcompose(void) {
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
