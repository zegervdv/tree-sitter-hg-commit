#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 69
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 48
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 9

enum {
  aux_sym_source_token1 = 1,
  aux_sym_subject_token1 = 2,
  aux_sym_subject_token2 = 3,
  aux_sym_message_token1 = 4,
  anon_sym_HG_COLON = 5,
  anon_sym_COLON = 6,
  anon_sym_EQ = 7,
  anon_sym_added = 8,
  anon_sym_changed = 9,
  anon_sym_removed = 10,
  anon_sym_DASH_GT = 11,
  sym_commit = 12,
  sym__non_punctuated_word = 13,
  sym__non_comment = 14,
  sym__any_word = 15,
  aux_sym_path_token1 = 16,
  sym_item = 17,
  sym_user = 18,
  aux_sym__rest_token1 = 19,
  sym__newline = 20,
  sym_source = 21,
  sym_subject = 22,
  sym__body_line = 23,
  sym__trailer = 24,
  sym_message = 25,
  sym__text = 26,
  sym_comment = 27,
  sym__comment_body = 28,
  sym_trailer = 29,
  sym_trailer_key = 30,
  sym_trailer_value = 31,
  sym_meta = 32,
  sym_meta_key = 33,
  sym_meta_value = 34,
  sym_change = 35,
  sym__word = 36,
  sym_path = 37,
  aux_sym__rest = 38,
  aux_sym_source_repeat1 = 39,
  aux_sym_source_repeat2 = 40,
  aux_sym_source_repeat3 = 41,
  aux_sym_subject_repeat1 = 42,
  aux_sym_message_repeat1 = 43,
  aux_sym__comment_body_repeat1 = 44,
  aux_sym__comment_body_repeat2 = 45,
  aux_sym_trailer_value_repeat1 = 46,
  aux_sym_path_repeat1 = 47,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_source_token1] = "scissors",
  [aux_sym_subject_token1] = "subject_token1",
  [aux_sym_subject_token2] = "subject_token2",
  [aux_sym_message_token1] = "message_token1",
  [anon_sym_HG_COLON] = "HG:",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
  [anon_sym_added] = "added",
  [anon_sym_changed] = "changed",
  [anon_sym_removed] = "removed",
  [anon_sym_DASH_GT] = "->",
  [sym_commit] = "commit",
  [sym__non_punctuated_word] = "_non_punctuated_word",
  [sym__non_comment] = "_non_comment",
  [sym__any_word] = "_any_word",
  [aux_sym_path_token1] = "path_token1",
  [sym_item] = "item",
  [sym_user] = "user",
  [aux_sym__rest_token1] = "_rest_token1",
  [sym__newline] = "_newline",
  [sym_source] = "source",
  [sym_subject] = "subject",
  [sym__body_line] = "_body_line",
  [sym__trailer] = "_trailer",
  [sym_message] = "message",
  [sym__text] = "_text",
  [sym_comment] = "comment",
  [sym__comment_body] = "_comment_body",
  [sym_trailer] = "trailer",
  [sym_trailer_key] = "trailer_key",
  [sym_trailer_value] = "trailer_value",
  [sym_meta] = "meta",
  [sym_meta_key] = "meta_key",
  [sym_meta_value] = "meta_value",
  [sym_change] = "change",
  [sym__word] = "_word",
  [sym_path] = "path",
  [aux_sym__rest] = "_rest",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_source_repeat2] = "source_repeat2",
  [aux_sym_source_repeat3] = "source_repeat3",
  [aux_sym_subject_repeat1] = "subject_repeat1",
  [aux_sym_message_repeat1] = "message_repeat1",
  [aux_sym__comment_body_repeat1] = "_comment_body_repeat1",
  [aux_sym__comment_body_repeat2] = "_comment_body_repeat2",
  [aux_sym_trailer_value_repeat1] = "trailer_value_repeat1",
  [aux_sym_path_repeat1] = "path_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_source_token1] = aux_sym_source_token1,
  [aux_sym_subject_token1] = aux_sym_subject_token1,
  [aux_sym_subject_token2] = aux_sym_subject_token2,
  [aux_sym_message_token1] = aux_sym_message_token1,
  [anon_sym_HG_COLON] = anon_sym_HG_COLON,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_added] = anon_sym_added,
  [anon_sym_changed] = anon_sym_changed,
  [anon_sym_removed] = anon_sym_removed,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [sym_commit] = sym_commit,
  [sym__non_punctuated_word] = sym__non_punctuated_word,
  [sym__non_comment] = sym__non_comment,
  [sym__any_word] = sym__any_word,
  [aux_sym_path_token1] = aux_sym_path_token1,
  [sym_item] = sym_item,
  [sym_user] = sym_user,
  [aux_sym__rest_token1] = aux_sym__rest_token1,
  [sym__newline] = sym__newline,
  [sym_source] = sym_source,
  [sym_subject] = sym_subject,
  [sym__body_line] = sym__body_line,
  [sym__trailer] = sym__trailer,
  [sym_message] = sym_message,
  [sym__text] = sym__text,
  [sym_comment] = sym_comment,
  [sym__comment_body] = sym__comment_body,
  [sym_trailer] = sym_trailer,
  [sym_trailer_key] = sym_trailer_key,
  [sym_trailer_value] = sym_trailer_value,
  [sym_meta] = sym_meta,
  [sym_meta_key] = sym_meta_key,
  [sym_meta_value] = sym_meta_value,
  [sym_change] = sym_change,
  [sym__word] = sym__word,
  [sym_path] = sym_path,
  [aux_sym__rest] = aux_sym__rest,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_source_repeat2] = aux_sym_source_repeat2,
  [aux_sym_source_repeat3] = aux_sym_source_repeat3,
  [aux_sym_subject_repeat1] = aux_sym_subject_repeat1,
  [aux_sym_message_repeat1] = aux_sym_message_repeat1,
  [aux_sym__comment_body_repeat1] = aux_sym__comment_body_repeat1,
  [aux_sym__comment_body_repeat2] = aux_sym__comment_body_repeat2,
  [aux_sym_trailer_value_repeat1] = aux_sym_trailer_value_repeat1,
  [aux_sym_path_repeat1] = aux_sym_path_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_subject_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_subject_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_message_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_HG_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_added] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_changed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_removed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_commit] = {
    .visible = true,
    .named = true,
  },
  [sym__non_punctuated_word] = {
    .visible = false,
    .named = true,
  },
  [sym__non_comment] = {
    .visible = false,
    .named = true,
  },
  [sym__any_word] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_path_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_item] = {
    .visible = true,
    .named = true,
  },
  [sym_user] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__rest_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym_subject] = {
    .visible = true,
    .named = true,
  },
  [sym__body_line] = {
    .visible = false,
    .named = true,
  },
  [sym__trailer] = {
    .visible = false,
    .named = true,
  },
  [sym_message] = {
    .visible = true,
    .named = true,
  },
  [sym__text] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__comment_body] = {
    .visible = false,
    .named = true,
  },
  [sym_trailer] = {
    .visible = true,
    .named = true,
  },
  [sym_trailer_key] = {
    .visible = true,
    .named = true,
  },
  [sym_trailer_value] = {
    .visible = true,
    .named = true,
  },
  [sym_meta] = {
    .visible = true,
    .named = true,
  },
  [sym_meta_key] = {
    .visible = true,
    .named = true,
  },
  [sym_meta_value] = {
    .visible = true,
    .named = true,
  },
  [sym_change] = {
    .visible = true,
    .named = true,
  },
  [sym__word] = {
    .visible = false,
    .named = true,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__rest] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_subject_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_message_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__comment_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__comment_body_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_trailer_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_key = 1,
  field_kind = 2,
  field_separator = 3,
  field_value = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_kind] = "kind",
  [field_separator] = "separator",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [4] = {.index = 1, .length = 2},
  [5] = {.index = 3, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_kind, 0},
  [1] =
    {field_key, 0},
    {field_value, 2},
  [3] =
    {field_key, 0},
    {field_separator, 1},
    {field_value, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = sym_message,
  },
  [3] = {
    [2] = sym_message,
  },
  [6] = {
    [3] = sym_message,
  },
  [7] = {
    [4] = sym_message,
  },
  [8] = {
    [5] = sym_message,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym__rest, 2,
    aux_sym__rest,
    sym_message,
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
  [16] = 13,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 12,
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
  [67] = 67,
  [68] = 68,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(116);
      if (lookahead == '\n') ADVANCE(239);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == ':') ADVANCE(215);
      if (lookahead == '=') ADVANCE(215);
      if (lookahead == 'H') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(122);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(213);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      if (lookahead != 0) ADVANCE(215);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(239);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(36);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '-') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(37);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '\r') ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(22);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(29);
      if (lookahead == '-') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(31);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(78);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(71);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(38);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(32);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(23);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(91);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(41);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(89);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(99);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(90);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(42);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(135);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(208);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(209);
      if (lookahead == '@') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(204);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(208);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(7);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(3);
      END_STATE();
    case 24:
      if (lookahead == '8') ADVANCE(13);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(138);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(8);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(12);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(6);
      END_STATE();
    case 29:
      if (lookahead == '>') ADVANCE(24);
      END_STATE();
    case 30:
      if (lookahead == '>') ADVANCE(144);
      END_STATE();
    case 31:
      if (lookahead == 'D') ADVANCE(85);
      END_STATE();
    case 32:
      if (lookahead == 'E') ADVANCE(96);
      END_STATE();
    case 33:
      if (lookahead == 'G') ADVANCE(26);
      END_STATE();
    case 34:
      if (lookahead == 'G') ADVANCE(27);
      END_STATE();
    case 35:
      if (lookahead == 'G') ADVANCE(28);
      END_STATE();
    case 36:
      if (lookahead == 'H') ADVANCE(33);
      END_STATE();
    case 37:
      if (lookahead == 'H') ADVANCE(34);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 40:
      if (lookahead == 'b') ADVANCE(83);
      END_STATE();
    case 41:
      if (lookahead == 'b') ADVANCE(54);
      END_STATE();
    case 42:
      if (lookahead == 'b') ADVANCE(60);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(66);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(141);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(142);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(143);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(103);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(49);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(55);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 62:
      if (lookahead == 'g') ADVANCE(56);
      END_STATE();
    case 63:
      if (lookahead == 'g') ADVANCE(15);
      END_STATE();
    case 64:
      if (lookahead == 'h') ADVANCE(57);
      END_STATE();
    case 65:
      if (lookahead == 'h') ADVANCE(39);
      END_STATE();
    case 66:
      if (lookahead == 'h') ADVANCE(18);
      END_STATE();
    case 67:
      if (lookahead == 'h') ADVANCE(69);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 75:
      if (lookahead == 'm') ADVANCE(86);
      END_STATE();
    case 76:
      if (lookahead == 'm') ADVANCE(87);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 81:
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 82:
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 83:
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 84:
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 85:
      if (lookahead == 'o') ADVANCE(9);
      END_STATE();
    case 86:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 87:
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 88:
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 89:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 94:
      if (lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 95:
      if (lookahead == 'v') ADVANCE(50);
      END_STATE();
    case 96:
      if (lookahead == 'v') ADVANCE(51);
      END_STATE();
    case 97:
      if (lookahead == 'v') ADVANCE(53);
      END_STATE();
    case 98:
      if (lookahead == 'v') ADVANCE(58);
      END_STATE();
    case 99:
      if (lookahead == 'w') ADVANCE(70);
      END_STATE();
    case 100:
      if (lookahead == 'w') ADVANCE(17);
      END_STATE();
    case 101:
      if (lookahead == 'y') ADVANCE(92);
      END_STATE();
    case 102:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 103:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(119);
      END_STATE();
    case 104:
      if (eof) ADVANCE(116);
      if (lookahead == '\n') ADVANCE(239);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == ':') ADVANCE(139);
      if (lookahead == 'H') ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(135);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (lookahead != 0) ADVANCE(208);
      END_STATE();
    case 105:
      if (eof) ADVANCE(116);
      if (lookahead == '\n') ADVANCE(239);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == '@') ADVANCE(207);
      if (lookahead == 'H') ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(204);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (lookahead != 0) ADVANCE(208);
      END_STATE();
    case 106:
      if (eof) ADVANCE(116);
      if (lookahead == '\n') ADVANCE(239);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == 'H') ADVANCE(181);
      if (lookahead == 'a') ADVANCE(187);
      if (lookahead == 'c') ADVANCE(194);
      if (lookahead == 'r') ADVANCE(189);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(135);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (lookahead != 0) ADVANCE(208);
      END_STATE();
    case 107:
      if (eof) ADVANCE(116);
      if (lookahead == '\n') ADVANCE(239);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == 'H') ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(135);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (lookahead != 0) ADVANCE(208);
      END_STATE();
    case 108:
      if (eof) ADVANCE(116);
      if (lookahead == '\n') ADVANCE(239);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == 'H') ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(135);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (lookahead != 0) ADVANCE(208);
      END_STATE();
    case 109:
      if (eof) ADVANCE(116);
      if (lookahead == '\n') ADVANCE(239);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(209);
      if (lookahead == ':') ADVANCE(139);
      if (lookahead == '=') ADVANCE(140);
      if (lookahead == '@') ADVANCE(207);
      if (lookahead == 'H') ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(204);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (lookahead != 0) ADVANCE(208);
      END_STATE();
    case 110:
      if (eof) ADVANCE(116);
      if (lookahead == '\n') ADVANCE(239);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(209);
      if (lookahead == '@') ADVANCE(207);
      if (lookahead == 'H') ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(204);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (lookahead != 0) ADVANCE(208);
      END_STATE();
    case 111:
      if (eof) ADVANCE(116);
      if (lookahead == '\n') ADVANCE(239);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(217);
      if (lookahead == 'H') ADVANCE(218);
      if (lookahead == 'a') ADVANCE(221);
      if (lookahead == 'c') ADVANCE(226);
      if (lookahead == 'r') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(231);
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 112:
      if (eof) ADVANCE(116);
      if (lookahead == '\n') ADVANCE(239);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == 'H') ADVANCE(35);
      if (lookahead == 'a') ADVANCE(48);
      if (lookahead == 'c') ADVANCE(65);
      if (lookahead == 'r') ADVANCE(61);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(136);
      END_STATE();
    case 113:
      if (eof) ADVANCE(116);
      if (lookahead == '\n') ADVANCE(239);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'H') ADVANCE(121);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(120);
      END_STATE();
    case 114:
      if (eof) ADVANCE(116);
      if (lookahead == '\n') ADVANCE(239);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'H') ADVANCE(218);
      if (lookahead == 'a') ADVANCE(221);
      if (lookahead == 'c') ADVANCE(226);
      if (lookahead == 'r') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(231);
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 115:
      if (eof) ADVANCE(116);
      if (lookahead == '\n') ADVANCE(239);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'H') ADVANCE(132);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(133);
      if (lookahead != 0) ADVANCE(134);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_source_token1);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_source_token1);
      if (lookahead == '\n') ADVANCE(117);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_source_token1);
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == '\r') ADVANCE(118);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_subject_token1);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_subject_token1);
      if (lookahead == 'G') ADVANCE(25);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_subject_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(136);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '-') ADVANCE(123);
      if (lookahead != 0) ADVANCE(134);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(134);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == ' ') ADVANCE(131);
      if (lookahead == '-') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(134);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == ' ') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(134);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == '-') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(134);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == '-') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(134);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == '8') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(134);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == ':') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(134);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == '>') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(134);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == 'G') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(134);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(133);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(134);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(237);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_HG_COLON);
      if (lookahead == ' ') ADVANCE(22);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_added);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_changed);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_removed);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_commit);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(145);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(146);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(148);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(149);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(150);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(153);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(154);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(155);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(156);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(157);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(158);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(159);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(160);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(162);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(163);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(165);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(166);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(167);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(168);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(169);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(170);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(171);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(173);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(174);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(175);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(176);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(177);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == ':') ADVANCE(138);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == ':') ADVANCE(206);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'G') ADVANCE(180);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'G') ADVANCE(179);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'a') ADVANCE(196);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'd') ADVANCE(141);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'd') ADVANCE(142);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'd') ADVANCE(143);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'd') ADVANCE(188);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'd') ADVANCE(190);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'e') ADVANCE(195);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'e') ADVANCE(184);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'e') ADVANCE(185);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'e') ADVANCE(186);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'g') ADVANCE(191);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'h') ADVANCE(183);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'm') ADVANCE(197);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'n') ADVANCE(193);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'o') ADVANCE(198);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'v') ADVANCE(192);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(178);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(199);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(200);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(201);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(202);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(203);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__non_comment);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(208);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__non_comment);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(208);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__non_comment);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__any_word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(210);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__any_word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == ':') ADVANCE(215);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(215);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == 'G') ADVANCE(211);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(215);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(213);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(215);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(215);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(215);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == ':') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(233);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '>') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(233);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'G') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(233);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'a') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(233);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'd') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(233);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'd') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(233);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'd') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(233);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'e') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(233);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'e') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(233);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'g') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(233);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'h') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(233);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'm') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(233);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'n') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(233);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'o') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(233);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'v') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(233);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(231);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(233);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(233);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_item);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_user);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (lookahead == '\n') ADVANCE(239);
      if (lookahead != 0) ADVANCE(237);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (eof) ADVANCE(116);
      if (lookahead == '\n') ADVANCE(239);
      if (lookahead == '\r') ADVANCE(236);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(137);
      if (lookahead != 0) ADVANCE(237);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 113},
  [2] = {.lex_state = 106},
  [3] = {.lex_state = 105},
  [4] = {.lex_state = 109},
  [5] = {.lex_state = 110},
  [6] = {.lex_state = 110},
  [7] = {.lex_state = 110},
  [8] = {.lex_state = 110},
  [9] = {.lex_state = 108},
  [10] = {.lex_state = 110},
  [11] = {.lex_state = 105},
  [12] = {.lex_state = 111},
  [13] = {.lex_state = 111},
  [14] = {.lex_state = 21},
  [15] = {.lex_state = 106},
  [16] = {.lex_state = 114},
  [17] = {.lex_state = 107},
  [18] = {.lex_state = 106},
  [19] = {.lex_state = 107},
  [20] = {.lex_state = 114},
  [21] = {.lex_state = 106},
  [22] = {.lex_state = 106},
  [23] = {.lex_state = 107},
  [24] = {.lex_state = 106},
  [25] = {.lex_state = 112},
  [26] = {.lex_state = 104},
  [27] = {.lex_state = 106},
  [28] = {.lex_state = 20},
  [29] = {.lex_state = 106},
  [30] = {.lex_state = 106},
  [31] = {.lex_state = 106},
  [32] = {.lex_state = 20},
  [33] = {.lex_state = 105},
  [34] = {.lex_state = 106},
  [35] = {.lex_state = 106},
  [36] = {.lex_state = 115},
  [37] = {.lex_state = 115},
  [38] = {.lex_state = 115},
  [39] = {.lex_state = 238},
  [40] = {.lex_state = 238},
  [41] = {.lex_state = 106},
  [42] = {.lex_state = 238},
  [43] = {.lex_state = 238},
  [44] = {.lex_state = 106},
  [45] = {.lex_state = 238},
  [46] = {.lex_state = 238},
  [47] = {.lex_state = 238},
  [48] = {.lex_state = 106},
  [49] = {.lex_state = 106},
  [50] = {.lex_state = 238},
  [51] = {.lex_state = 106},
  [52] = {.lex_state = 238},
  [53] = {.lex_state = 238},
  [54] = {.lex_state = 238},
  [55] = {.lex_state = 106},
  [56] = {.lex_state = 114},
  [57] = {.lex_state = 106},
  [58] = {.lex_state = 106},
  [59] = {.lex_state = 106},
  [60] = {.lex_state = 114},
  [61] = {.lex_state = 238},
  [62] = {.lex_state = 106},
  [63] = {.lex_state = 106},
  [64] = {.lex_state = 106},
  [65] = {.lex_state = 109},
  [66] = {.lex_state = 109},
  [67] = {.lex_state = 109},
  [68] = {.lex_state = 106},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_source_token1] = ACTIONS(1),
    [aux_sym_subject_token1] = ACTIONS(1),
    [aux_sym_message_token1] = ACTIONS(3),
    [anon_sym_HG_COLON] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym__non_punctuated_word] = ACTIONS(1),
    [sym__non_comment] = ACTIONS(1),
    [sym__any_word] = ACTIONS(1),
    [aux_sym_path_token1] = ACTIONS(1),
    [sym_item] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(68),
    [sym_subject] = STATE(22),
    [sym__body_line] = STATE(21),
    [sym__trailer] = STATE(31),
    [sym_comment] = STATE(22),
    [aux_sym_source_repeat1] = STATE(21),
    [aux_sym_source_repeat2] = STATE(31),
    [aux_sym_source_repeat3] = STATE(49),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_source_token1] = ACTIONS(7),
    [aux_sym_subject_token1] = ACTIONS(9),
    [aux_sym_message_token1] = ACTIONS(3),
    [anon_sym_HG_COLON] = ACTIONS(11),
    [sym__newline] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    STATE(19), 1,
      aux_sym__comment_body_repeat2,
    STATE(26), 1,
      sym__word,
    STATE(67), 1,
      sym_meta_key,
    STATE(18), 2,
      sym_change,
      aux_sym__comment_body_repeat1,
    STATE(59), 2,
      sym__comment_body,
      sym_meta,
    ACTIONS(15), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
    ACTIONS(19), 3,
      anon_sym_added,
      anon_sym_changed,
      anon_sym_removed,
    ACTIONS(21), 3,
      sym__non_punctuated_word,
      sym__non_comment,
      sym__any_word,
  [36] = 10,
    ACTIONS(11), 1,
      anon_sym_HG_COLON,
    ACTIONS(29), 1,
      sym__any_word,
    STATE(62), 1,
      sym_message,
    STATE(63), 1,
      sym_comment,
    STATE(64), 1,
      sym_trailer,
    STATE(65), 1,
      sym__word,
    STATE(66), 1,
      sym_trailer_key,
    ACTIONS(27), 2,
      sym__non_punctuated_word,
      sym__non_comment,
    ACTIONS(23), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
    ACTIONS(25), 3,
      aux_sym_message_token1,
      sym_commit,
      sym_user,
  [72] = 6,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(33), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(31), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
    ACTIONS(35), 3,
      sym_commit,
      sym_item,
      sym_user,
    ACTIONS(37), 3,
      sym__non_punctuated_word,
      sym__non_comment,
      sym__any_word,
    STATE(5), 3,
      sym__text,
      sym__word,
      aux_sym_message_repeat1,
  [100] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(39), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
    ACTIONS(41), 3,
      sym_commit,
      sym_item,
      sym_user,
    ACTIONS(43), 3,
      sym__non_punctuated_word,
      sym__non_comment,
      sym__any_word,
    STATE(7), 3,
      sym__text,
      sym__word,
      aux_sym_message_repeat1,
  [124] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(31), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
    ACTIONS(35), 3,
      sym_commit,
      sym_item,
      sym_user,
    ACTIONS(37), 3,
      sym__non_punctuated_word,
      sym__non_comment,
      sym__any_word,
    STATE(5), 3,
      sym__text,
      sym__word,
      aux_sym_message_repeat1,
  [148] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(45), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
    ACTIONS(47), 3,
      sym_commit,
      sym_item,
      sym_user,
    ACTIONS(50), 3,
      sym__non_punctuated_word,
      sym__non_comment,
      sym__any_word,
    STATE(7), 3,
      sym__text,
      sym__word,
      aux_sym_message_repeat1,
  [172] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    STATE(10), 2,
      sym__word,
      aux_sym_trailer_value_repeat1,
    ACTIONS(53), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
    ACTIONS(55), 3,
      sym_commit,
      sym_item,
      sym_user,
    ACTIONS(57), 3,
      sym__non_punctuated_word,
      sym__non_comment,
      sym__any_word,
  [195] = 8,
    ACTIONS(11), 1,
      anon_sym_HG_COLON,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    STATE(55), 1,
      sym_comment,
    STATE(64), 1,
      sym_trailer,
    STATE(65), 1,
      sym__word,
    STATE(66), 1,
      sym_trailer_key,
    ACTIONS(29), 3,
      sym__non_punctuated_word,
      sym__non_comment,
      sym__any_word,
    ACTIONS(59), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [224] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    STATE(10), 2,
      sym__word,
      aux_sym_trailer_value_repeat1,
    ACTIONS(61), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
    ACTIONS(63), 3,
      sym_commit,
      sym_item,
      sym_user,
    ACTIONS(66), 3,
      sym__non_punctuated_word,
      sym__non_comment,
      sym__any_word,
  [247] = 5,
    ACTIONS(11), 1,
      anon_sym_HG_COLON,
    ACTIONS(69), 2,
      sym__non_punctuated_word,
      sym__non_comment,
    STATE(62), 2,
      sym_message,
      sym_comment,
    ACTIONS(23), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
    ACTIONS(25), 3,
      aux_sym_message_token1,
      sym_commit,
      sym_user,
  [269] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(75), 1,
      aux_sym_path_token1,
    STATE(12), 1,
      aux_sym_path_repeat1,
    ACTIONS(71), 3,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      sym__newline,
    ACTIONS(73), 4,
      aux_sym_source_token1,
      anon_sym_added,
      anon_sym_changed,
      anon_sym_removed,
  [290] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(82), 1,
      aux_sym_path_token1,
    STATE(12), 1,
      aux_sym_path_repeat1,
    ACTIONS(78), 3,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      sym__newline,
    ACTIONS(80), 4,
      aux_sym_source_token1,
      anon_sym_added,
      anon_sym_changed,
      anon_sym_removed,
  [311] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    STATE(57), 1,
      sym_trailer_value,
    STATE(8), 2,
      sym__word,
      aux_sym_trailer_value_repeat1,
    ACTIONS(84), 3,
      sym_commit,
      sym_item,
      sym_user,
    ACTIONS(86), 3,
      sym__non_punctuated_word,
      sym__non_comment,
      sym__any_word,
  [332] = 7,
    ACTIONS(13), 1,
      sym__newline,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
    ACTIONS(90), 1,
      aux_sym_source_token1,
    STATE(48), 1,
      aux_sym_source_repeat3,
    STATE(27), 2,
      sym__trailer,
      aux_sym_source_repeat2,
    STATE(34), 2,
      sym__body_line,
      aux_sym_source_repeat1,
  [356] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(92), 1,
      aux_sym_path_token1,
    STATE(20), 1,
      aux_sym_path_repeat1,
    ACTIONS(78), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(80), 4,
      aux_sym_source_token1,
      anon_sym_added,
      anon_sym_changed,
      anon_sym_removed,
  [376] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    STATE(23), 2,
      sym__word,
      aux_sym__comment_body_repeat2,
    ACTIONS(94), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
    ACTIONS(96), 3,
      sym__non_punctuated_word,
      sym__non_comment,
      sym__any_word,
  [394] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    STATE(24), 2,
      sym_change,
      aux_sym__comment_body_repeat1,
    ACTIONS(19), 3,
      anon_sym_added,
      anon_sym_changed,
      anon_sym_removed,
    ACTIONS(98), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [412] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    STATE(23), 2,
      sym__word,
      aux_sym__comment_body_repeat2,
    ACTIONS(96), 3,
      sym__non_punctuated_word,
      sym__non_comment,
      sym__any_word,
    ACTIONS(98), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [430] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(100), 1,
      aux_sym_path_token1,
    STATE(20), 1,
      aux_sym_path_repeat1,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(73), 4,
      aux_sym_source_token1,
      anon_sym_added,
      anon_sym_changed,
      anon_sym_removed,
  [450] = 7,
    ACTIONS(13), 1,
      sym__newline,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    ACTIONS(105), 1,
      aux_sym_source_token1,
    STATE(41), 1,
      aux_sym_source_repeat3,
    STATE(29), 2,
      sym__trailer,
      aux_sym_source_repeat2,
    STATE(34), 2,
      sym__body_line,
      aux_sym_source_repeat1,
  [474] = 7,
    ACTIONS(13), 1,
      sym__newline,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    ACTIONS(105), 1,
      aux_sym_source_token1,
    STATE(41), 1,
      aux_sym_source_repeat3,
    STATE(15), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(29), 2,
      sym__trailer,
      aux_sym_source_repeat2,
  [498] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    STATE(23), 2,
      sym__word,
      aux_sym__comment_body_repeat2,
    ACTIONS(107), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
    ACTIONS(109), 3,
      sym__non_punctuated_word,
      sym__non_comment,
      sym__any_word,
  [516] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    STATE(24), 2,
      sym_change,
      aux_sym__comment_body_repeat1,
    ACTIONS(112), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
    ACTIONS(114), 3,
      anon_sym_added,
      anon_sym_changed,
      anon_sym_removed,
  [534] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(119), 1,
      anon_sym_DASH_GT,
    ACTIONS(117), 6,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      anon_sym_added,
      anon_sym_changed,
      anon_sym_removed,
      sym__newline,
  [549] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(123), 1,
      anon_sym_COLON,
    ACTIONS(121), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
    ACTIONS(125), 3,
      sym__non_punctuated_word,
      sym__non_comment,
      sym__any_word,
  [566] = 6,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
    ACTIONS(129), 1,
      aux_sym_source_token1,
    ACTIONS(131), 1,
      sym__newline,
    STATE(51), 1,
      aux_sym_source_repeat3,
    STATE(35), 2,
      sym__trailer,
      aux_sym_source_repeat2,
  [586] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(133), 1,
      sym__non_punctuated_word,
    STATE(58), 1,
      sym_meta_value,
    ACTIONS(135), 2,
      sym__non_comment,
      sym__any_word,
    STATE(17), 2,
      sym__word,
      aux_sym__comment_body_repeat2,
  [604] = 6,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
    ACTIONS(90), 1,
      aux_sym_source_token1,
    ACTIONS(131), 1,
      sym__newline,
    STATE(48), 1,
      aux_sym_source_repeat3,
    STATE(35), 2,
      sym__trailer,
      aux_sym_source_repeat2,
  [624] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(137), 6,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      anon_sym_added,
      anon_sym_changed,
      anon_sym_removed,
      sym__newline,
  [636] = 6,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    ACTIONS(105), 1,
      aux_sym_source_token1,
    ACTIONS(131), 1,
      sym__newline,
    STATE(41), 1,
      aux_sym_source_repeat3,
    STATE(35), 2,
      sym__trailer,
      aux_sym_source_repeat2,
  [656] = 6,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(139), 1,
      sym__non_punctuated_word,
    STATE(64), 1,
      sym_trailer,
    STATE(65), 1,
      sym__word,
    STATE(66), 1,
      sym_trailer_key,
    ACTIONS(29), 2,
      sym__non_comment,
      sym__any_word,
  [676] = 4,
    ACTIONS(11), 1,
      anon_sym_HG_COLON,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    STATE(55), 1,
      sym_comment,
    ACTIONS(59), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [691] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(143), 1,
      sym__newline,
    ACTIONS(141), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
    STATE(34), 2,
      sym__body_line,
      aux_sym_source_repeat1,
  [706] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(148), 1,
      sym__newline,
    ACTIONS(146), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
    STATE(35), 2,
      sym__trailer,
      aux_sym_source_repeat2,
  [721] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(153), 1,
      aux_sym_subject_token2,
    STATE(37), 1,
      aux_sym_subject_repeat1,
    ACTIONS(151), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [736] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(157), 1,
      aux_sym_subject_token2,
    STATE(37), 1,
      aux_sym_subject_repeat1,
    ACTIONS(155), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [751] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(162), 1,
      aux_sym_subject_token2,
    STATE(36), 1,
      aux_sym_subject_repeat1,
    ACTIONS(160), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [766] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(164), 1,
      ts_builtin_sym_end,
    ACTIONS(166), 1,
      aux_sym__rest_token1,
    ACTIONS(168), 1,
      sym__newline,
    STATE(43), 1,
      aux_sym__rest,
  [782] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    ACTIONS(166), 1,
      aux_sym__rest_token1,
    ACTIONS(168), 1,
      sym__newline,
    STATE(54), 1,
      aux_sym__rest,
  [798] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
    ACTIONS(90), 1,
      aux_sym_source_token1,
    ACTIONS(170), 1,
      sym__newline,
    STATE(44), 1,
      aux_sym_source_repeat3,
  [814] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
    ACTIONS(166), 1,
      aux_sym__rest_token1,
    ACTIONS(168), 1,
      sym__newline,
    STATE(45), 1,
      aux_sym__rest,
  [830] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(166), 1,
      aux_sym__rest_token1,
    ACTIONS(168), 1,
      sym__newline,
    ACTIONS(172), 1,
      ts_builtin_sym_end,
    STATE(50), 1,
      aux_sym__rest,
  [846] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(176), 1,
      sym__newline,
    STATE(44), 1,
      aux_sym_source_repeat3,
    ACTIONS(174), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [860] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(166), 1,
      aux_sym__rest_token1,
    ACTIONS(168), 1,
      sym__newline,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
    STATE(50), 1,
      aux_sym__rest,
  [876] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
    ACTIONS(166), 1,
      aux_sym__rest_token1,
    ACTIONS(168), 1,
      sym__newline,
    STATE(53), 1,
      aux_sym__rest,
  [892] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(166), 1,
      aux_sym__rest_token1,
    ACTIONS(168), 1,
      sym__newline,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
    STATE(50), 1,
      aux_sym__rest,
  [908] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
    ACTIONS(129), 1,
      aux_sym_source_token1,
    ACTIONS(170), 1,
      sym__newline,
    STATE(44), 1,
      aux_sym_source_repeat3,
  [924] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    ACTIONS(105), 1,
      aux_sym_source_token1,
    ACTIONS(170), 1,
      sym__newline,
    STATE(44), 1,
      aux_sym_source_repeat3,
  [940] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(183), 1,
      ts_builtin_sym_end,
    ACTIONS(185), 1,
      aux_sym__rest_token1,
    ACTIONS(188), 1,
      sym__newline,
    STATE(50), 1,
      aux_sym__rest,
  [956] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(170), 1,
      sym__newline,
    ACTIONS(191), 1,
      ts_builtin_sym_end,
    ACTIONS(193), 1,
      aux_sym_source_token1,
    STATE(44), 1,
      aux_sym_source_repeat3,
  [972] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(166), 1,
      aux_sym__rest_token1,
    ACTIONS(168), 1,
      sym__newline,
    ACTIONS(191), 1,
      ts_builtin_sym_end,
    STATE(47), 1,
      aux_sym__rest,
  [988] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(166), 1,
      aux_sym__rest_token1,
    ACTIONS(168), 1,
      sym__newline,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
    STATE(50), 1,
      aux_sym__rest,
  [1004] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(166), 1,
      aux_sym__rest_token1,
    ACTIONS(168), 1,
      sym__newline,
    ACTIONS(197), 1,
      ts_builtin_sym_end,
    STATE(50), 1,
      aux_sym__rest,
  [1020] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(174), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [1029] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(199), 1,
      aux_sym_path_token1,
    STATE(13), 1,
      aux_sym_path_repeat1,
    STATE(25), 1,
      sym_path,
  [1042] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(201), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [1051] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(203), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [1060] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(205), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [1069] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(207), 1,
      aux_sym_path_token1,
    STATE(16), 1,
      aux_sym_path_repeat1,
    STATE(30), 1,
      sym_path,
  [1082] = 3,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(211), 1,
      aux_sym__rest_token1,
    ACTIONS(209), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1093] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(213), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [1102] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(213), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [1111] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(215), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [1120] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(217), 2,
      anon_sym_COLON,
      anon_sym_EQ,
  [1128] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(219), 2,
      anon_sym_COLON,
      anon_sym_EQ,
  [1136] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(221), 1,
      anon_sym_COLON,
  [1143] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(223), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 36,
  [SMALL_STATE(4)] = 72,
  [SMALL_STATE(5)] = 100,
  [SMALL_STATE(6)] = 124,
  [SMALL_STATE(7)] = 148,
  [SMALL_STATE(8)] = 172,
  [SMALL_STATE(9)] = 195,
  [SMALL_STATE(10)] = 224,
  [SMALL_STATE(11)] = 247,
  [SMALL_STATE(12)] = 269,
  [SMALL_STATE(13)] = 290,
  [SMALL_STATE(14)] = 311,
  [SMALL_STATE(15)] = 332,
  [SMALL_STATE(16)] = 356,
  [SMALL_STATE(17)] = 376,
  [SMALL_STATE(18)] = 394,
  [SMALL_STATE(19)] = 412,
  [SMALL_STATE(20)] = 430,
  [SMALL_STATE(21)] = 450,
  [SMALL_STATE(22)] = 474,
  [SMALL_STATE(23)] = 498,
  [SMALL_STATE(24)] = 516,
  [SMALL_STATE(25)] = 534,
  [SMALL_STATE(26)] = 549,
  [SMALL_STATE(27)] = 566,
  [SMALL_STATE(28)] = 586,
  [SMALL_STATE(29)] = 604,
  [SMALL_STATE(30)] = 624,
  [SMALL_STATE(31)] = 636,
  [SMALL_STATE(32)] = 656,
  [SMALL_STATE(33)] = 676,
  [SMALL_STATE(34)] = 691,
  [SMALL_STATE(35)] = 706,
  [SMALL_STATE(36)] = 721,
  [SMALL_STATE(37)] = 736,
  [SMALL_STATE(38)] = 751,
  [SMALL_STATE(39)] = 766,
  [SMALL_STATE(40)] = 782,
  [SMALL_STATE(41)] = 798,
  [SMALL_STATE(42)] = 814,
  [SMALL_STATE(43)] = 830,
  [SMALL_STATE(44)] = 846,
  [SMALL_STATE(45)] = 860,
  [SMALL_STATE(46)] = 876,
  [SMALL_STATE(47)] = 892,
  [SMALL_STATE(48)] = 908,
  [SMALL_STATE(49)] = 924,
  [SMALL_STATE(50)] = 940,
  [SMALL_STATE(51)] = 956,
  [SMALL_STATE(52)] = 972,
  [SMALL_STATE(53)] = 988,
  [SMALL_STATE(54)] = 1004,
  [SMALL_STATE(55)] = 1020,
  [SMALL_STATE(56)] = 1029,
  [SMALL_STATE(57)] = 1042,
  [SMALL_STATE(58)] = 1051,
  [SMALL_STATE(59)] = 1060,
  [SMALL_STATE(60)] = 1069,
  [SMALL_STATE(61)] = 1082,
  [SMALL_STATE(62)] = 1093,
  [SMALL_STATE(63)] = 1102,
  [SMALL_STATE(64)] = 1111,
  [SMALL_STATE(65)] = 1120,
  [SMALL_STATE(66)] = 1128,
  [SMALL_STATE(67)] = 1136,
  [SMALL_STATE(68)] = 1143,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__body_line, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__word, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_repeat1, 2), SHIFT_REPEAT(7),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_repeat1, 2), SHIFT_REPEAT(7),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trailer_value, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat3, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_trailer_value_repeat1, 2),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trailer_value_repeat1, 2), SHIFT_REPEAT(10),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trailer_value_repeat1, 2), SHIFT_REPEAT(10),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(12),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_value, 1),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_body, 1),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(20),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__comment_body_repeat2, 2),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_body_repeat2, 2), SHIFT_REPEAT(23),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__comment_body_repeat1, 2),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_body_repeat1, 2), SHIFT_REPEAT(56),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change, 2, .production_id = 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__comment_body_repeat2, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_key, 1),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__comment_body_repeat2, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change, 4, .production_id = 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(11),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat2, 2),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(32),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 2),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_subject_repeat1, 2),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_subject_repeat1, 2), SHIFT_REPEAT(37),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 1),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 5),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 6, .production_id = 8),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat3, 2),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat3, 2), SHIFT_REPEAT(33),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 3, .production_id = 3),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 5, .production_id = 7),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__rest, 2),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__rest, 2), SHIFT_REPEAT(61),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__rest, 2), SHIFT_REPEAT(61),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 4),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 4, .production_id = 6),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2, .production_id = 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trailer, 3, .production_id = 5),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 3, .production_id = 4),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__rest, 1),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__rest, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__body_line, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trailer, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trailer_key, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [223] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_hg_commit(void) {
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
