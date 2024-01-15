#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 91
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 50
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 9

enum {
  aux_sym_scissors_token1 = 1,
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
  sym_scissors = 22,
  sym_subject = 23,
  sym__body_line = 24,
  sym__trailer = 25,
  sym_message = 26,
  sym__text = 27,
  sym_comment = 28,
  sym__comment_body = 29,
  sym_trailer = 30,
  sym_trailer_key = 31,
  sym_trailer_value = 32,
  sym_meta = 33,
  sym_meta_key = 34,
  sym_meta_value = 35,
  sym_change = 36,
  sym__word = 37,
  sym_path = 38,
  aux_sym__rest = 39,
  aux_sym_source_repeat1 = 40,
  aux_sym_source_repeat2 = 41,
  aux_sym_source_repeat3 = 42,
  aux_sym_scissors_repeat1 = 43,
  aux_sym_subject_repeat1 = 44,
  aux_sym_message_repeat1 = 45,
  aux_sym__comment_body_repeat1 = 46,
  aux_sym__comment_body_repeat2 = 47,
  aux_sym_trailer_value_repeat1 = 48,
  aux_sym_path_repeat1 = 49,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_scissors_token1] = "scissors_token1",
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
  [sym_scissors] = "scissors",
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
  [aux_sym_scissors_repeat1] = "scissors_repeat1",
  [aux_sym_subject_repeat1] = "subject_repeat1",
  [aux_sym_message_repeat1] = "message_repeat1",
  [aux_sym__comment_body_repeat1] = "_comment_body_repeat1",
  [aux_sym__comment_body_repeat2] = "_comment_body_repeat2",
  [aux_sym_trailer_value_repeat1] = "trailer_value_repeat1",
  [aux_sym_path_repeat1] = "path_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_scissors_token1] = aux_sym_scissors_token1,
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
  [sym_scissors] = sym_scissors,
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
  [aux_sym_scissors_repeat1] = aux_sym_scissors_repeat1,
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
  [aux_sym_scissors_token1] = {
    .visible = false,
    .named = false,
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
  [sym_scissors] = {
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
  [aux_sym_scissors_repeat1] = {
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
  [3] = 2,
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
  [18] = 14,
  [19] = 14,
  [20] = 20,
  [21] = 13,
  [22] = 13,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 14,
  [29] = 17,
  [30] = 26,
  [31] = 31,
  [32] = 13,
  [33] = 33,
  [34] = 23,
  [35] = 24,
  [36] = 25,
  [37] = 37,
  [38] = 38,
  [39] = 31,
  [40] = 40,
  [41] = 41,
  [42] = 33,
  [43] = 40,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 45,
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
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 71,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 78,
  [84] = 72,
  [85] = 74,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 88,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(45);
      if (lookahead == '\n') ADVANCE(222);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(169);
      if (lookahead == ':') ADVANCE(152);
      if (lookahead == '=') ADVANCE(152);
      if (lookahead == 'H') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(150);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(222);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(46);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(46);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '-') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '-') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(10);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(63);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(145);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(146);
      if (lookahead == '@') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(141);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(145);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(5);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(3);
      END_STATE();
    case 11:
      if (lookahead == '8') ADVANCE(6);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(66);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(4);
      END_STATE();
    case 14:
      if (lookahead == '>') ADVANCE(11);
      END_STATE();
    case 15:
      if (lookahead == '>') ADVANCE(81);
      END_STATE();
    case 16:
      if (lookahead == 'G') ADVANCE(13);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(72);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(75);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(78);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(24);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 27:
      if (lookahead == 'g') ADVANCE(25);
      END_STATE();
    case 28:
      if (lookahead == 'h') ADVANCE(17);
      END_STATE();
    case 29:
      if (lookahead == 'm') ADVANCE(31);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 31:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == 'v') ADVANCE(26);
      END_STATE();
    case 33:
      if (eof) ADVANCE(45);
      if (lookahead == '\n') ADVANCE(222);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(147);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == 'H') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(63);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 34:
      if (eof) ADVANCE(45);
      if (lookahead == '\n') ADVANCE(222);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(147);
      if (lookahead == '@') ADVANCE(144);
      if (lookahead == 'H') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(141);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 35:
      if (eof) ADVANCE(45);
      if (lookahead == '\n') ADVANCE(222);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(147);
      if (lookahead == 'H') ADVANCE(118);
      if (lookahead == 'a') ADVANCE(124);
      if (lookahead == 'c') ADVANCE(131);
      if (lookahead == 'r') ADVANCE(126);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(63);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 36:
      if (eof) ADVANCE(45);
      if (lookahead == '\n') ADVANCE(222);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(147);
      if (lookahead == 'H') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(63);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 37:
      if (eof) ADVANCE(45);
      if (lookahead == '\n') ADVANCE(222);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(147);
      if (lookahead == 'H') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(63);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 38:
      if (eof) ADVANCE(45);
      if (lookahead == '\n') ADVANCE(222);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(146);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == '=') ADVANCE(71);
      if (lookahead == '@') ADVANCE(144);
      if (lookahead == 'H') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(141);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 39:
      if (eof) ADVANCE(45);
      if (lookahead == '\n') ADVANCE(222);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(146);
      if (lookahead == '@') ADVANCE(144);
      if (lookahead == 'H') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(141);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 40:
      if (eof) ADVANCE(45);
      if (lookahead == '\n') ADVANCE(222);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(154);
      if (lookahead == 'H') ADVANCE(155);
      if (lookahead == 'a') ADVANCE(158);
      if (lookahead == 'c') ADVANCE(163);
      if (lookahead == 'r') ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(168);
      if (lookahead != 0) ADVANCE(170);
      END_STATE();
    case 41:
      if (eof) ADVANCE(45);
      if (lookahead == '\n') ADVANCE(222);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == 'H') ADVANCE(16);
      if (lookahead == 'a') ADVANCE(21);
      if (lookahead == 'c') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(23);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(64);
      END_STATE();
    case 42:
      if (eof) ADVANCE(45);
      if (lookahead == '\n') ADVANCE(222);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'H') ADVANCE(48);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(47);
      END_STATE();
    case 43:
      if (eof) ADVANCE(45);
      if (lookahead == '\n') ADVANCE(222);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'H') ADVANCE(155);
      if (lookahead == 'a') ADVANCE(158);
      if (lookahead == 'c') ADVANCE(163);
      if (lookahead == 'r') ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(168);
      if (lookahead != 0) ADVANCE(170);
      END_STATE();
    case 44:
      if (eof) ADVANCE(45);
      if (lookahead == '\n') ADVANCE(222);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'H') ADVANCE(59);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(60);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_scissors_token1);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_subject_token1);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_subject_token1);
      if (lookahead == 'G') ADVANCE(12);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_subject_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(64);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == '\n') ADVANCE(46);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == ' ') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(61);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == ' ') ADVANCE(58);
      if (lookahead == '-') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(61);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == ' ') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(61);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == '-') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(61);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(61);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == '8') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(61);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == ':') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(61);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == '>') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(61);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == 'G') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(61);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(60);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == '\r') ADVANCE(214);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(193);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(214);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_HG_COLON);
      if (lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_HG_COLON);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(193);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_HG_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(214);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(193);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_added);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_added);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(193);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_added);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(214);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_changed);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_changed);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(193);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_changed);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(214);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_removed);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_removed);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(193);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_removed);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(214);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_commit);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(82);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(92);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(94);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(95);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(96);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(98);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(99);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(100);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(102);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(103);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(104);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(107);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(108);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(110);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(112);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(113);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(114);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == ':') ADVANCE(143);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'G') ADVANCE(117);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'G') ADVANCE(116);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'a') ADVANCE(133);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'd') ADVANCE(72);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'd') ADVANCE(75);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'd') ADVANCE(78);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'd') ADVANCE(125);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'd') ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'e') ADVANCE(132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'e') ADVANCE(121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'e') ADVANCE(122);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'e') ADVANCE(123);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'g') ADVANCE(128);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'h') ADVANCE(120);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'm') ADVANCE(134);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'n') ADVANCE(130);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'o') ADVANCE(135);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'v') ADVANCE(129);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(115);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(136);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(137);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(139);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(140);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__non_comment);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(145);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__non_comment);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(145);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__non_comment);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__any_word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(147);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__any_word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '#') ADVANCE(170);
      if (lookahead == ':') ADVANCE(152);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(152);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '#') ADVANCE(170);
      if (lookahead == 'G') ADVANCE(148);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(152);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '#') ADVANCE(170);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(150);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(152);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '#') ADVANCE(170);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(152);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '#') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(170);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '>') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(170);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'G') ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(170);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'a') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(170);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'd') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(170);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'd') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(170);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'd') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(170);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'e') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(170);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'e') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(170);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'g') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(170);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'h') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(170);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'm') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(170);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'n') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(170);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'o') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(170);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'v') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(170);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(170);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(170);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(170);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_item);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_user);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (lookahead == '\n') ADVANCE(222);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(193);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == 'G') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(193);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == 'a') ADVANCE(189);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(193);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == 'd') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(193);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == 'd') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(193);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == 'd') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(193);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == 'd') ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(193);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == 'd') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(193);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == 'e') ADVANCE(188);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(193);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == 'e') ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(193);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == 'e') ADVANCE(178);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(193);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == 'e') ADVANCE(179);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(193);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == 'g') ADVANCE(184);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(193);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == 'h') ADVANCE(176);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(193);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == 'm') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(193);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == 'n') ADVANCE(186);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(193);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == 'o') ADVANCE(191);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(193);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == 'v') ADVANCE(185);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(193);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(193);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(214);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (lookahead == '>') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(214);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (lookahead == 'G') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(214);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (lookahead == 'a') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(214);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (lookahead == 'd') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(214);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (lookahead == 'd') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(214);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (lookahead == 'd') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(214);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (lookahead == 'd') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(214);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (lookahead == 'd') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(214);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (lookahead == 'e') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(214);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (lookahead == 'e') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(214);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (lookahead == 'e') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(214);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (lookahead == 'e') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(214);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (lookahead == 'g') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(214);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (lookahead == 'h') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(214);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (lookahead == 'm') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(214);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (lookahead == 'n') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(214);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (lookahead == 'o') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(214);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (lookahead == 'v') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(214);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(213);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(214);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (eof) ADVANCE(45);
      if (lookahead == '\n') ADVANCE(222);
      if (lookahead == '\r') ADVANCE(173);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == ':') ADVANCE(70);
      if (lookahead == 'H') ADVANCE(175);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(62);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0) ADVANCE(193);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (eof) ADVANCE(45);
      if (lookahead == '\n') ADVANCE(222);
      if (lookahead == '\r') ADVANCE(173);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == 'H') ADVANCE(175);
      if (lookahead == 'a') ADVANCE(180);
      if (lookahead == 'c') ADVANCE(187);
      if (lookahead == 'r') ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(62);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0) ADVANCE(193);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (eof) ADVANCE(45);
      if (lookahead == '\n') ADVANCE(222);
      if (lookahead == '\r') ADVANCE(173);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == 'H') ADVANCE(175);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(62);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0) ADVANCE(193);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (eof) ADVANCE(45);
      if (lookahead == '\n') ADVANCE(222);
      if (lookahead == '\r') ADVANCE(173);
      if (lookahead == '-') ADVANCE(154);
      if (lookahead == 'H') ADVANCE(155);
      if (lookahead == 'a') ADVANCE(158);
      if (lookahead == 'c') ADVANCE(163);
      if (lookahead == 'r') ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(168);
      if (lookahead != 0) ADVANCE(170);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (eof) ADVANCE(45);
      if (lookahead == '\n') ADVANCE(222);
      if (lookahead == '\r') ADVANCE(173);
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == 'H') ADVANCE(196);
      if (lookahead == 'a') ADVANCE(201);
      if (lookahead == 'c') ADVANCE(208);
      if (lookahead == 'r') ADVANCE(203);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (eof) ADVANCE(45);
      if (lookahead == '\n') ADVANCE(222);
      if (lookahead == '\r') ADVANCE(173);
      if (lookahead == 'H') ADVANCE(155);
      if (lookahead == 'a') ADVANCE(158);
      if (lookahead == 'c') ADVANCE(163);
      if (lookahead == 'r') ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(168);
      if (lookahead != 0) ADVANCE(170);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (eof) ADVANCE(45);
      if (lookahead == '\n') ADVANCE(222);
      if (lookahead == '\r') ADVANCE(173);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 42},
  [2] = {.lex_state = 216},
  [3] = {.lex_state = 35},
  [4] = {.lex_state = 34},
  [5] = {.lex_state = 38},
  [6] = {.lex_state = 39},
  [7] = {.lex_state = 39},
  [8] = {.lex_state = 39},
  [9] = {.lex_state = 37},
  [10] = {.lex_state = 39},
  [11] = {.lex_state = 39},
  [12] = {.lex_state = 34},
  [13] = {.lex_state = 218},
  [14] = {.lex_state = 218},
  [15] = {.lex_state = 35},
  [16] = {.lex_state = 35},
  [17] = {.lex_state = 216},
  [18] = {.lex_state = 40},
  [19] = {.lex_state = 220},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 220},
  [22] = {.lex_state = 40},
  [23] = {.lex_state = 217},
  [24] = {.lex_state = 216},
  [25] = {.lex_state = 217},
  [26] = {.lex_state = 217},
  [27] = {.lex_state = 35},
  [28] = {.lex_state = 43},
  [29] = {.lex_state = 35},
  [30] = {.lex_state = 36},
  [31] = {.lex_state = 215},
  [32] = {.lex_state = 43},
  [33] = {.lex_state = 219},
  [34] = {.lex_state = 36},
  [35] = {.lex_state = 35},
  [36] = {.lex_state = 36},
  [37] = {.lex_state = 35},
  [38] = {.lex_state = 35},
  [39] = {.lex_state = 33},
  [40] = {.lex_state = 216},
  [41] = {.lex_state = 35},
  [42] = {.lex_state = 41},
  [43] = {.lex_state = 35},
  [44] = {.lex_state = 217},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 217},
  [47] = {.lex_state = 217},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 35},
  [51] = {.lex_state = 35},
  [52] = {.lex_state = 44},
  [53] = {.lex_state = 44},
  [54] = {.lex_state = 35},
  [55] = {.lex_state = 35},
  [56] = {.lex_state = 34},
  [57] = {.lex_state = 44},
  [58] = {.lex_state = 35},
  [59] = {.lex_state = 35},
  [60] = {.lex_state = 221},
  [61] = {.lex_state = 221},
  [62] = {.lex_state = 221},
  [63] = {.lex_state = 221},
  [64] = {.lex_state = 221},
  [65] = {.lex_state = 221},
  [66] = {.lex_state = 221},
  [67] = {.lex_state = 221},
  [68] = {.lex_state = 221},
  [69] = {.lex_state = 221},
  [70] = {.lex_state = 221},
  [71] = {.lex_state = 217},
  [72] = {.lex_state = 217},
  [73] = {.lex_state = 35},
  [74] = {.lex_state = 43},
  [75] = {.lex_state = 35},
  [76] = {.lex_state = 35},
  [77] = {.lex_state = 35},
  [78] = {.lex_state = 43},
  [79] = {.lex_state = 35},
  [80] = {.lex_state = 35},
  [81] = {.lex_state = 221},
  [82] = {.lex_state = 35},
  [83] = {.lex_state = 43},
  [84] = {.lex_state = 35},
  [85] = {.lex_state = 43},
  [86] = {.lex_state = 38},
  [87] = {.lex_state = 38},
  [88] = {.lex_state = 38},
  [89] = {.lex_state = 35},
  [90] = {.lex_state = 38},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_scissors_token1] = ACTIONS(1),
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
    [sym_source] = STATE(89),
    [sym_scissors] = STATE(60),
    [sym_subject] = STATE(27),
    [sym__body_line] = STATE(16),
    [sym__trailer] = STATE(37),
    [sym_comment] = STATE(27),
    [aux_sym_source_repeat1] = STATE(16),
    [aux_sym_source_repeat2] = STATE(37),
    [aux_sym_source_repeat3] = STATE(54),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_scissors_token1] = ACTIONS(7),
    [aux_sym_subject_token1] = ACTIONS(9),
    [aux_sym_message_token1] = ACTIONS(3),
    [anon_sym_HG_COLON] = ACTIONS(11),
    [sym__newline] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    STATE(23), 1,
      aux_sym__comment_body_repeat2,
    STATE(31), 1,
      sym__word,
    STATE(90), 1,
      sym_meta_key,
    ACTIONS(15), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(17), 2,
      anon_sym_HG_COLON,
      aux_sym__rest_token1,
    STATE(24), 2,
      sym_change,
      aux_sym__comment_body_repeat1,
    STATE(71), 2,
      sym__comment_body,
      sym_meta,
    ACTIONS(19), 3,
      anon_sym_added,
      anon_sym_changed,
      anon_sym_removed,
    ACTIONS(21), 3,
      sym__non_punctuated_word,
      sym__non_comment,
      sym__any_word,
  [39] = 9,
    ACTIONS(23), 1,
      aux_sym_message_token1,
    STATE(34), 1,
      aux_sym__comment_body_repeat2,
    STATE(39), 1,
      sym__word,
    STATE(88), 1,
      sym_meta_key,
    STATE(35), 2,
      sym_change,
      aux_sym__comment_body_repeat1,
    STATE(77), 2,
      sym__comment_body,
      sym_meta,
    ACTIONS(15), 3,
      ts_builtin_sym_end,
      aux_sym_scissors_token1,
      sym__newline,
    ACTIONS(25), 3,
      anon_sym_added,
      anon_sym_changed,
      anon_sym_removed,
    ACTIONS(27), 3,
      sym__non_punctuated_word,
      sym__non_comment,
      sym__any_word,
  [75] = 10,
    ACTIONS(11), 1,
      anon_sym_HG_COLON,
    ACTIONS(35), 1,
      sym__any_word,
    STATE(75), 1,
      sym_comment,
    STATE(76), 1,
      sym_message,
    STATE(79), 1,
      sym_trailer,
    STATE(86), 1,
      sym__word,
    STATE(87), 1,
      sym_trailer_key,
    ACTIONS(33), 2,
      sym__non_punctuated_word,
      sym__non_comment,
    ACTIONS(29), 3,
      ts_builtin_sym_end,
      aux_sym_scissors_token1,
      sym__newline,
    ACTIONS(31), 3,
      aux_sym_message_token1,
      sym_commit,
      sym_user,
  [111] = 6,
    ACTIONS(23), 1,
      aux_sym_message_token1,
    ACTIONS(39), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(37), 3,
      ts_builtin_sym_end,
      aux_sym_scissors_token1,
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
  [139] = 5,
    ACTIONS(23), 1,
      aux_sym_message_token1,
    ACTIONS(37), 3,
      ts_builtin_sym_end,
      aux_sym_scissors_token1,
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
  [163] = 5,
    ACTIONS(23), 1,
      aux_sym_message_token1,
    ACTIONS(45), 3,
      ts_builtin_sym_end,
      aux_sym_scissors_token1,
      sym__newline,
    ACTIONS(47), 3,
      sym_commit,
      sym_item,
      sym_user,
    ACTIONS(49), 3,
      sym__non_punctuated_word,
      sym__non_comment,
      sym__any_word,
    STATE(8), 3,
      sym__text,
      sym__word,
      aux_sym_message_repeat1,
  [187] = 5,
    ACTIONS(23), 1,
      aux_sym_message_token1,
    ACTIONS(51), 3,
      ts_builtin_sym_end,
      aux_sym_scissors_token1,
      sym__newline,
    ACTIONS(53), 3,
      sym_commit,
      sym_item,
      sym_user,
    ACTIONS(56), 3,
      sym__non_punctuated_word,
      sym__non_comment,
      sym__any_word,
    STATE(8), 3,
      sym__text,
      sym__word,
      aux_sym_message_repeat1,
  [211] = 8,
    ACTIONS(11), 1,
      anon_sym_HG_COLON,
    ACTIONS(23), 1,
      aux_sym_message_token1,
    STATE(79), 1,
      sym_trailer,
    STATE(80), 1,
      sym_comment,
    STATE(86), 1,
      sym__word,
    STATE(87), 1,
      sym_trailer_key,
    ACTIONS(35), 3,
      sym__non_punctuated_word,
      sym__non_comment,
      sym__any_word,
    ACTIONS(59), 3,
      ts_builtin_sym_end,
      aux_sym_scissors_token1,
      sym__newline,
  [240] = 5,
    ACTIONS(23), 1,
      aux_sym_message_token1,
    STATE(11), 2,
      sym__word,
      aux_sym_trailer_value_repeat1,
    ACTIONS(61), 3,
      ts_builtin_sym_end,
      aux_sym_scissors_token1,
      sym__newline,
    ACTIONS(63), 3,
      sym_commit,
      sym_item,
      sym_user,
    ACTIONS(65), 3,
      sym__non_punctuated_word,
      sym__non_comment,
      sym__any_word,
  [263] = 5,
    ACTIONS(23), 1,
      aux_sym_message_token1,
    STATE(11), 2,
      sym__word,
      aux_sym_trailer_value_repeat1,
    ACTIONS(67), 3,
      ts_builtin_sym_end,
      aux_sym_scissors_token1,
      sym__newline,
    ACTIONS(69), 3,
      sym_commit,
      sym_item,
      sym_user,
    ACTIONS(72), 3,
      sym__non_punctuated_word,
      sym__non_comment,
      sym__any_word,
  [286] = 5,
    ACTIONS(11), 1,
      anon_sym_HG_COLON,
    ACTIONS(75), 2,
      sym__non_punctuated_word,
      sym__non_comment,
    STATE(76), 2,
      sym_message,
      sym_comment,
    ACTIONS(29), 3,
      ts_builtin_sym_end,
      aux_sym_scissors_token1,
      sym__newline,
    ACTIONS(31), 3,
      aux_sym_message_token1,
      sym_commit,
      sym_user,
  [308] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(81), 1,
      aux_sym_path_token1,
    STATE(13), 1,
      aux_sym_path_repeat1,
    ACTIONS(77), 3,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      sym__newline,
    ACTIONS(79), 5,
      anon_sym_HG_COLON,
      anon_sym_added,
      anon_sym_changed,
      anon_sym_removed,
      aux_sym__rest_token1,
  [330] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(88), 1,
      aux_sym_path_token1,
    STATE(13), 1,
      aux_sym_path_repeat1,
    ACTIONS(84), 3,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      sym__newline,
    ACTIONS(86), 5,
      anon_sym_HG_COLON,
      anon_sym_added,
      anon_sym_changed,
      anon_sym_removed,
      aux_sym__rest_token1,
  [352] = 8,
    ACTIONS(7), 1,
      aux_sym_scissors_token1,
    ACTIONS(13), 1,
      sym__newline,
    ACTIONS(23), 1,
      aux_sym_message_token1,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    STATE(58), 1,
      aux_sym_source_repeat3,
    STATE(70), 1,
      sym_scissors,
    STATE(41), 2,
      sym__trailer,
      aux_sym_source_repeat2,
    STATE(59), 2,
      sym__body_line,
      aux_sym_source_repeat1,
  [379] = 8,
    ACTIONS(7), 1,
      aux_sym_scissors_token1,
    ACTIONS(13), 1,
      sym__newline,
    ACTIONS(23), 1,
      aux_sym_message_token1,
    ACTIONS(92), 1,
      ts_builtin_sym_end,
    STATE(51), 1,
      aux_sym_source_repeat3,
    STATE(65), 1,
      sym_scissors,
    STATE(38), 2,
      sym__trailer,
      aux_sym_source_repeat2,
    STATE(59), 2,
      sym__body_line,
      aux_sym_source_repeat1,
  [406] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(94), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(96), 2,
      anon_sym_HG_COLON,
      aux_sym__rest_token1,
    STATE(17), 2,
      sym_change,
      aux_sym__comment_body_repeat1,
    ACTIONS(98), 3,
      anon_sym_added,
      anon_sym_changed,
      anon_sym_removed,
  [427] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(101), 1,
      aux_sym_path_token1,
    STATE(22), 1,
      aux_sym_path_repeat1,
    ACTIONS(84), 3,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      sym__newline,
    ACTIONS(86), 4,
      aux_sym_scissors_token1,
      anon_sym_added,
      anon_sym_changed,
      anon_sym_removed,
  [448] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(103), 1,
      aux_sym_path_token1,
    STATE(21), 1,
      aux_sym_path_repeat1,
    ACTIONS(84), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(86), 5,
      anon_sym_HG_COLON,
      anon_sym_added,
      anon_sym_changed,
      anon_sym_removed,
      aux_sym__rest_token1,
  [469] = 5,
    ACTIONS(23), 1,
      aux_sym_message_token1,
    STATE(82), 1,
      sym_trailer_value,
    STATE(10), 2,
      sym__word,
      aux_sym_trailer_value_repeat1,
    ACTIONS(105), 3,
      sym_commit,
      sym_item,
      sym_user,
    ACTIONS(107), 3,
      sym__non_punctuated_word,
      sym__non_comment,
      sym__any_word,
  [490] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(109), 1,
      aux_sym_path_token1,
    STATE(21), 1,
      aux_sym_path_repeat1,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(79), 5,
      anon_sym_HG_COLON,
      anon_sym_added,
      anon_sym_changed,
      anon_sym_removed,
      aux_sym__rest_token1,
  [511] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(112), 1,
      aux_sym_path_token1,
    STATE(22), 1,
      aux_sym_path_repeat1,
    ACTIONS(77), 3,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      sym__newline,
    ACTIONS(79), 4,
      aux_sym_scissors_token1,
      anon_sym_added,
      anon_sym_changed,
      anon_sym_removed,
  [532] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(115), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(117), 2,
      anon_sym_HG_COLON,
      aux_sym__rest_token1,
    STATE(25), 2,
      sym__word,
      aux_sym__comment_body_repeat2,
    ACTIONS(119), 3,
      sym__non_punctuated_word,
      sym__non_comment,
      sym__any_word,
  [553] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(115), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(117), 2,
      anon_sym_HG_COLON,
      aux_sym__rest_token1,
    STATE(17), 2,
      sym_change,
      aux_sym__comment_body_repeat1,
    ACTIONS(19), 3,
      anon_sym_added,
      anon_sym_changed,
      anon_sym_removed,
  [574] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(121), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(123), 2,
      anon_sym_HG_COLON,
      aux_sym__rest_token1,
    STATE(25), 2,
      sym__word,
      aux_sym__comment_body_repeat2,
    ACTIONS(125), 3,
      sym__non_punctuated_word,
      sym__non_comment,
      sym__any_word,
  [595] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(128), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(130), 2,
      anon_sym_HG_COLON,
      aux_sym__rest_token1,
    STATE(25), 2,
      sym__word,
      aux_sym__comment_body_repeat2,
    ACTIONS(119), 3,
      sym__non_punctuated_word,
      sym__non_comment,
      sym__any_word,
  [616] = 8,
    ACTIONS(7), 1,
      aux_sym_scissors_token1,
    ACTIONS(13), 1,
      sym__newline,
    ACTIONS(23), 1,
      aux_sym_message_token1,
    ACTIONS(92), 1,
      ts_builtin_sym_end,
    STATE(51), 1,
      aux_sym_source_repeat3,
    STATE(65), 1,
      sym_scissors,
    STATE(15), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(38), 2,
      sym__trailer,
      aux_sym_source_repeat2,
  [643] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(132), 1,
      aux_sym_path_token1,
    STATE(32), 1,
      aux_sym_path_repeat1,
    ACTIONS(84), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(86), 4,
      aux_sym_scissors_token1,
      anon_sym_added,
      anon_sym_changed,
      anon_sym_removed,
  [663] = 4,
    ACTIONS(23), 1,
      aux_sym_message_token1,
    STATE(29), 2,
      sym_change,
      aux_sym__comment_body_repeat1,
    ACTIONS(94), 3,
      ts_builtin_sym_end,
      aux_sym_scissors_token1,
      sym__newline,
    ACTIONS(134), 3,
      anon_sym_added,
      anon_sym_changed,
      anon_sym_removed,
  [681] = 4,
    ACTIONS(23), 1,
      aux_sym_message_token1,
    STATE(36), 2,
      sym__word,
      aux_sym__comment_body_repeat2,
    ACTIONS(128), 3,
      ts_builtin_sym_end,
      aux_sym_scissors_token1,
      sym__newline,
    ACTIONS(137), 3,
      sym__non_punctuated_word,
      sym__non_comment,
      sym__any_word,
  [699] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(143), 1,
      anon_sym_COLON,
    ACTIONS(139), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(141), 5,
      anon_sym_HG_COLON,
      sym__non_punctuated_word,
      sym__non_comment,
      sym__any_word,
      aux_sym__rest_token1,
  [717] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(145), 1,
      aux_sym_path_token1,
    STATE(32), 1,
      aux_sym_path_repeat1,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(79), 4,
      aux_sym_scissors_token1,
      anon_sym_added,
      anon_sym_changed,
      anon_sym_removed,
  [737] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(152), 1,
      anon_sym_DASH_GT,
    ACTIONS(148), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(150), 5,
      anon_sym_HG_COLON,
      anon_sym_added,
      anon_sym_changed,
      anon_sym_removed,
      aux_sym__rest_token1,
  [755] = 4,
    ACTIONS(23), 1,
      aux_sym_message_token1,
    STATE(36), 2,
      sym__word,
      aux_sym__comment_body_repeat2,
    ACTIONS(115), 3,
      ts_builtin_sym_end,
      aux_sym_scissors_token1,
      sym__newline,
    ACTIONS(137), 3,
      sym__non_punctuated_word,
      sym__non_comment,
      sym__any_word,
  [773] = 4,
    ACTIONS(23), 1,
      aux_sym_message_token1,
    STATE(29), 2,
      sym_change,
      aux_sym__comment_body_repeat1,
    ACTIONS(25), 3,
      anon_sym_added,
      anon_sym_changed,
      anon_sym_removed,
    ACTIONS(115), 3,
      ts_builtin_sym_end,
      aux_sym_scissors_token1,
      sym__newline,
  [791] = 4,
    ACTIONS(23), 1,
      aux_sym_message_token1,
    STATE(36), 2,
      sym__word,
      aux_sym__comment_body_repeat2,
    ACTIONS(121), 3,
      ts_builtin_sym_end,
      aux_sym_scissors_token1,
      sym__newline,
    ACTIONS(154), 3,
      sym__non_punctuated_word,
      sym__non_comment,
      sym__any_word,
  [809] = 7,
    ACTIONS(7), 1,
      aux_sym_scissors_token1,
    ACTIONS(23), 1,
      aux_sym_message_token1,
    ACTIONS(92), 1,
      ts_builtin_sym_end,
    ACTIONS(157), 1,
      sym__newline,
    STATE(51), 1,
      aux_sym_source_repeat3,
    STATE(65), 1,
      sym_scissors,
    STATE(50), 2,
      sym__trailer,
      aux_sym_source_repeat2,
  [832] = 7,
    ACTIONS(7), 1,
      aux_sym_scissors_token1,
    ACTIONS(23), 1,
      aux_sym_message_token1,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    ACTIONS(157), 1,
      sym__newline,
    STATE(58), 1,
      aux_sym_source_repeat3,
    STATE(70), 1,
      sym_scissors,
    STATE(50), 2,
      sym__trailer,
      aux_sym_source_repeat2,
  [855] = 4,
    ACTIONS(23), 1,
      aux_sym_message_token1,
    ACTIONS(159), 1,
      anon_sym_COLON,
    ACTIONS(139), 3,
      ts_builtin_sym_end,
      aux_sym_scissors_token1,
      sym__newline,
    ACTIONS(141), 3,
      sym__non_punctuated_word,
      sym__non_comment,
      sym__any_word,
  [872] = 3,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(161), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(163), 5,
      anon_sym_HG_COLON,
      anon_sym_added,
      anon_sym_changed,
      anon_sym_removed,
      aux_sym__rest_token1,
  [887] = 7,
    ACTIONS(7), 1,
      aux_sym_scissors_token1,
    ACTIONS(23), 1,
      aux_sym_message_token1,
    ACTIONS(157), 1,
      sym__newline,
    ACTIONS(165), 1,
      ts_builtin_sym_end,
    STATE(55), 1,
      aux_sym_source_repeat3,
    STATE(63), 1,
      sym_scissors,
    STATE(50), 2,
      sym__trailer,
      aux_sym_source_repeat2,
  [910] = 3,
    ACTIONS(23), 1,
      aux_sym_message_token1,
    ACTIONS(167), 1,
      anon_sym_DASH_GT,
    ACTIONS(148), 6,
      ts_builtin_sym_end,
      aux_sym_scissors_token1,
      anon_sym_added,
      anon_sym_changed,
      anon_sym_removed,
      sym__newline,
  [925] = 2,
    ACTIONS(23), 1,
      aux_sym_message_token1,
    ACTIONS(161), 6,
      ts_builtin_sym_end,
      aux_sym_scissors_token1,
      anon_sym_added,
      anon_sym_changed,
      anon_sym_removed,
      sym__newline,
  [937] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(171), 1,
      anon_sym_HG_COLON,
    ACTIONS(174), 1,
      aux_sym__rest_token1,
    ACTIONS(169), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(44), 2,
      sym_comment,
      aux_sym_scissors_repeat1,
  [955] = 5,
    ACTIONS(23), 1,
      aux_sym_message_token1,
    ACTIONS(176), 1,
      sym__non_punctuated_word,
    STATE(84), 1,
      sym_meta_value,
    ACTIONS(178), 2,
      sym__non_comment,
      sym__any_word,
    STATE(30), 2,
      sym__word,
      aux_sym__comment_body_repeat2,
  [973] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(182), 1,
      anon_sym_HG_COLON,
    ACTIONS(184), 1,
      aux_sym__rest_token1,
    ACTIONS(180), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(44), 2,
      sym_comment,
      aux_sym_scissors_repeat1,
  [991] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(182), 1,
      anon_sym_HG_COLON,
    ACTIONS(188), 1,
      aux_sym__rest_token1,
    ACTIONS(186), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(46), 2,
      sym_comment,
      aux_sym_scissors_repeat1,
  [1009] = 6,
    ACTIONS(23), 1,
      aux_sym_message_token1,
    ACTIONS(190), 1,
      sym__non_punctuated_word,
    STATE(79), 1,
      sym_trailer,
    STATE(86), 1,
      sym__word,
    STATE(87), 1,
      sym_trailer_key,
    ACTIONS(35), 2,
      sym__non_comment,
      sym__any_word,
  [1029] = 5,
    ACTIONS(23), 1,
      aux_sym_message_token1,
    ACTIONS(192), 1,
      sym__non_punctuated_word,
    STATE(72), 1,
      sym_meta_value,
    ACTIONS(194), 2,
      sym__non_comment,
      sym__any_word,
    STATE(26), 2,
      sym__word,
      aux_sym__comment_body_repeat2,
  [1047] = 4,
    ACTIONS(23), 1,
      aux_sym_message_token1,
    ACTIONS(198), 1,
      sym__newline,
    ACTIONS(196), 2,
      ts_builtin_sym_end,
      aux_sym_scissors_token1,
    STATE(50), 2,
      sym__trailer,
      aux_sym_source_repeat2,
  [1062] = 6,
    ACTIONS(7), 1,
      aux_sym_scissors_token1,
    ACTIONS(23), 1,
      aux_sym_message_token1,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    ACTIONS(201), 1,
      sym__newline,
    STATE(70), 1,
      sym_scissors,
    STATE(73), 1,
      aux_sym_source_repeat3,
  [1081] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(205), 1,
      aux_sym_subject_token2,
    STATE(53), 1,
      aux_sym_subject_repeat1,
    ACTIONS(203), 3,
      ts_builtin_sym_end,
      aux_sym_scissors_token1,
      sym__newline,
  [1096] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(209), 1,
      aux_sym_subject_token2,
    STATE(53), 1,
      aux_sym_subject_repeat1,
    ACTIONS(207), 3,
      ts_builtin_sym_end,
      aux_sym_scissors_token1,
      sym__newline,
  [1111] = 6,
    ACTIONS(7), 1,
      aux_sym_scissors_token1,
    ACTIONS(23), 1,
      aux_sym_message_token1,
    ACTIONS(92), 1,
      ts_builtin_sym_end,
    ACTIONS(201), 1,
      sym__newline,
    STATE(65), 1,
      sym_scissors,
    STATE(73), 1,
      aux_sym_source_repeat3,
  [1130] = 6,
    ACTIONS(7), 1,
      aux_sym_scissors_token1,
    ACTIONS(23), 1,
      aux_sym_message_token1,
    ACTIONS(201), 1,
      sym__newline,
    ACTIONS(212), 1,
      ts_builtin_sym_end,
    STATE(68), 1,
      sym_scissors,
    STATE(73), 1,
      aux_sym_source_repeat3,
  [1149] = 4,
    ACTIONS(11), 1,
      anon_sym_HG_COLON,
    ACTIONS(23), 1,
      aux_sym_message_token1,
    STATE(80), 1,
      sym_comment,
    ACTIONS(59), 3,
      ts_builtin_sym_end,
      aux_sym_scissors_token1,
      sym__newline,
  [1164] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(216), 1,
      aux_sym_subject_token2,
    STATE(52), 1,
      aux_sym_subject_repeat1,
    ACTIONS(214), 3,
      ts_builtin_sym_end,
      aux_sym_scissors_token1,
      sym__newline,
  [1179] = 6,
    ACTIONS(7), 1,
      aux_sym_scissors_token1,
    ACTIONS(23), 1,
      aux_sym_message_token1,
    ACTIONS(165), 1,
      ts_builtin_sym_end,
    ACTIONS(201), 1,
      sym__newline,
    STATE(63), 1,
      sym_scissors,
    STATE(73), 1,
      aux_sym_source_repeat3,
  [1198] = 4,
    ACTIONS(23), 1,
      aux_sym_message_token1,
    ACTIONS(220), 1,
      sym__newline,
    ACTIONS(218), 2,
      ts_builtin_sym_end,
      aux_sym_scissors_token1,
    STATE(59), 2,
      sym__body_line,
      aux_sym_source_repeat1,
  [1213] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(92), 1,
      ts_builtin_sym_end,
    ACTIONS(223), 1,
      aux_sym__rest_token1,
    ACTIONS(225), 1,
      sym__newline,
    STATE(66), 1,
      aux_sym__rest,
  [1229] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(227), 1,
      ts_builtin_sym_end,
    ACTIONS(229), 1,
      aux_sym__rest_token1,
    ACTIONS(232), 1,
      sym__newline,
    STATE(61), 1,
      aux_sym__rest,
  [1245] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(223), 1,
      aux_sym__rest_token1,
    ACTIONS(225), 1,
      sym__newline,
    ACTIONS(235), 1,
      ts_builtin_sym_end,
    STATE(61), 1,
      aux_sym__rest,
  [1261] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(212), 1,
      ts_builtin_sym_end,
    ACTIONS(223), 1,
      aux_sym__rest_token1,
    ACTIONS(225), 1,
      sym__newline,
    STATE(67), 1,
      aux_sym__rest,
  [1277] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(223), 1,
      aux_sym__rest_token1,
    ACTIONS(225), 1,
      sym__newline,
    ACTIONS(237), 1,
      ts_builtin_sym_end,
    STATE(61), 1,
      aux_sym__rest,
  [1293] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    ACTIONS(223), 1,
      aux_sym__rest_token1,
    ACTIONS(225), 1,
      sym__newline,
    STATE(64), 1,
      aux_sym__rest,
  [1309] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(223), 1,
      aux_sym__rest_token1,
    ACTIONS(225), 1,
      sym__newline,
    ACTIONS(239), 1,
      ts_builtin_sym_end,
    STATE(61), 1,
      aux_sym__rest,
  [1325] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(223), 1,
      aux_sym__rest_token1,
    ACTIONS(225), 1,
      sym__newline,
    ACTIONS(241), 1,
      ts_builtin_sym_end,
    STATE(61), 1,
      aux_sym__rest,
  [1341] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(223), 1,
      aux_sym__rest_token1,
    ACTIONS(225), 1,
      sym__newline,
    ACTIONS(243), 1,
      ts_builtin_sym_end,
    STATE(69), 1,
      aux_sym__rest,
  [1357] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(223), 1,
      aux_sym__rest_token1,
    ACTIONS(225), 1,
      sym__newline,
    ACTIONS(245), 1,
      ts_builtin_sym_end,
    STATE(61), 1,
      aux_sym__rest,
  [1373] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(165), 1,
      ts_builtin_sym_end,
    ACTIONS(223), 1,
      aux_sym__rest_token1,
    ACTIONS(225), 1,
      sym__newline,
    STATE(62), 1,
      aux_sym__rest,
  [1389] = 3,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(247), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(249), 2,
      anon_sym_HG_COLON,
      aux_sym__rest_token1,
  [1401] = 3,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(251), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(253), 2,
      anon_sym_HG_COLON,
      aux_sym__rest_token1,
  [1413] = 4,
    ACTIONS(23), 1,
      aux_sym_message_token1,
    ACTIONS(257), 1,
      sym__newline,
    STATE(73), 1,
      aux_sym_source_repeat3,
    ACTIONS(255), 2,
      ts_builtin_sym_end,
      aux_sym_scissors_token1,
  [1427] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(260), 1,
      aux_sym_path_token1,
    STATE(28), 1,
      aux_sym_path_repeat1,
    STATE(43), 1,
      sym_path,
  [1440] = 2,
    ACTIONS(23), 1,
      aux_sym_message_token1,
    ACTIONS(262), 3,
      ts_builtin_sym_end,
      aux_sym_scissors_token1,
      sym__newline,
  [1449] = 2,
    ACTIONS(23), 1,
      aux_sym_message_token1,
    ACTIONS(262), 3,
      ts_builtin_sym_end,
      aux_sym_scissors_token1,
      sym__newline,
  [1458] = 2,
    ACTIONS(23), 1,
      aux_sym_message_token1,
    ACTIONS(247), 3,
      ts_builtin_sym_end,
      aux_sym_scissors_token1,
      sym__newline,
  [1467] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(264), 1,
      aux_sym_path_token1,
    STATE(18), 1,
      aux_sym_path_repeat1,
    STATE(42), 1,
      sym_path,
  [1480] = 2,
    ACTIONS(23), 1,
      aux_sym_message_token1,
    ACTIONS(266), 3,
      ts_builtin_sym_end,
      aux_sym_scissors_token1,
      sym__newline,
  [1489] = 2,
    ACTIONS(23), 1,
      aux_sym_message_token1,
    ACTIONS(255), 3,
      ts_builtin_sym_end,
      aux_sym_scissors_token1,
      sym__newline,
  [1498] = 3,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(270), 1,
      aux_sym__rest_token1,
    ACTIONS(268), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1509] = 2,
    ACTIONS(23), 1,
      aux_sym_message_token1,
    ACTIONS(272), 3,
      ts_builtin_sym_end,
      aux_sym_scissors_token1,
      sym__newline,
  [1518] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(274), 1,
      aux_sym_path_token1,
    STATE(14), 1,
      aux_sym_path_repeat1,
    STATE(33), 1,
      sym_path,
  [1531] = 2,
    ACTIONS(23), 1,
      aux_sym_message_token1,
    ACTIONS(251), 3,
      ts_builtin_sym_end,
      aux_sym_scissors_token1,
      sym__newline,
  [1540] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(276), 1,
      aux_sym_path_token1,
    STATE(19), 1,
      aux_sym_path_repeat1,
    STATE(40), 1,
      sym_path,
  [1553] = 2,
    ACTIONS(23), 1,
      aux_sym_message_token1,
    ACTIONS(278), 2,
      anon_sym_COLON,
      anon_sym_EQ,
  [1561] = 2,
    ACTIONS(23), 1,
      aux_sym_message_token1,
    ACTIONS(280), 2,
      anon_sym_COLON,
      anon_sym_EQ,
  [1569] = 2,
    ACTIONS(23), 1,
      aux_sym_message_token1,
    ACTIONS(282), 1,
      anon_sym_COLON,
  [1576] = 2,
    ACTIONS(23), 1,
      aux_sym_message_token1,
    ACTIONS(284), 1,
      ts_builtin_sym_end,
  [1583] = 2,
    ACTIONS(23), 1,
      aux_sym_message_token1,
    ACTIONS(286), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 39,
  [SMALL_STATE(4)] = 75,
  [SMALL_STATE(5)] = 111,
  [SMALL_STATE(6)] = 139,
  [SMALL_STATE(7)] = 163,
  [SMALL_STATE(8)] = 187,
  [SMALL_STATE(9)] = 211,
  [SMALL_STATE(10)] = 240,
  [SMALL_STATE(11)] = 263,
  [SMALL_STATE(12)] = 286,
  [SMALL_STATE(13)] = 308,
  [SMALL_STATE(14)] = 330,
  [SMALL_STATE(15)] = 352,
  [SMALL_STATE(16)] = 379,
  [SMALL_STATE(17)] = 406,
  [SMALL_STATE(18)] = 427,
  [SMALL_STATE(19)] = 448,
  [SMALL_STATE(20)] = 469,
  [SMALL_STATE(21)] = 490,
  [SMALL_STATE(22)] = 511,
  [SMALL_STATE(23)] = 532,
  [SMALL_STATE(24)] = 553,
  [SMALL_STATE(25)] = 574,
  [SMALL_STATE(26)] = 595,
  [SMALL_STATE(27)] = 616,
  [SMALL_STATE(28)] = 643,
  [SMALL_STATE(29)] = 663,
  [SMALL_STATE(30)] = 681,
  [SMALL_STATE(31)] = 699,
  [SMALL_STATE(32)] = 717,
  [SMALL_STATE(33)] = 737,
  [SMALL_STATE(34)] = 755,
  [SMALL_STATE(35)] = 773,
  [SMALL_STATE(36)] = 791,
  [SMALL_STATE(37)] = 809,
  [SMALL_STATE(38)] = 832,
  [SMALL_STATE(39)] = 855,
  [SMALL_STATE(40)] = 872,
  [SMALL_STATE(41)] = 887,
  [SMALL_STATE(42)] = 910,
  [SMALL_STATE(43)] = 925,
  [SMALL_STATE(44)] = 937,
  [SMALL_STATE(45)] = 955,
  [SMALL_STATE(46)] = 973,
  [SMALL_STATE(47)] = 991,
  [SMALL_STATE(48)] = 1009,
  [SMALL_STATE(49)] = 1029,
  [SMALL_STATE(50)] = 1047,
  [SMALL_STATE(51)] = 1062,
  [SMALL_STATE(52)] = 1081,
  [SMALL_STATE(53)] = 1096,
  [SMALL_STATE(54)] = 1111,
  [SMALL_STATE(55)] = 1130,
  [SMALL_STATE(56)] = 1149,
  [SMALL_STATE(57)] = 1164,
  [SMALL_STATE(58)] = 1179,
  [SMALL_STATE(59)] = 1198,
  [SMALL_STATE(60)] = 1213,
  [SMALL_STATE(61)] = 1229,
  [SMALL_STATE(62)] = 1245,
  [SMALL_STATE(63)] = 1261,
  [SMALL_STATE(64)] = 1277,
  [SMALL_STATE(65)] = 1293,
  [SMALL_STATE(66)] = 1309,
  [SMALL_STATE(67)] = 1325,
  [SMALL_STATE(68)] = 1341,
  [SMALL_STATE(69)] = 1357,
  [SMALL_STATE(70)] = 1373,
  [SMALL_STATE(71)] = 1389,
  [SMALL_STATE(72)] = 1401,
  [SMALL_STATE(73)] = 1413,
  [SMALL_STATE(74)] = 1427,
  [SMALL_STATE(75)] = 1440,
  [SMALL_STATE(76)] = 1449,
  [SMALL_STATE(77)] = 1458,
  [SMALL_STATE(78)] = 1467,
  [SMALL_STATE(79)] = 1480,
  [SMALL_STATE(80)] = 1489,
  [SMALL_STATE(81)] = 1498,
  [SMALL_STATE(82)] = 1509,
  [SMALL_STATE(83)] = 1518,
  [SMALL_STATE(84)] = 1531,
  [SMALL_STATE(85)] = 1540,
  [SMALL_STATE(86)] = 1553,
  [SMALL_STATE(87)] = 1561,
  [SMALL_STATE(88)] = 1569,
  [SMALL_STATE(89)] = 1576,
  [SMALL_STATE(90)] = 1583,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__body_line, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__word, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_repeat1, 2),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_repeat1, 2), SHIFT_REPEAT(8),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_repeat1, 2), SHIFT_REPEAT(8),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat3, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trailer_value, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_trailer_value_repeat1, 2),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trailer_value_repeat1, 2), SHIFT_REPEAT(11),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trailer_value_repeat1, 2), SHIFT_REPEAT(11),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(13),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__comment_body_repeat1, 2),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__comment_body_repeat1, 2),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_body_repeat1, 2), SHIFT_REPEAT(83),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(21),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(22),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_body, 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_body, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__comment_body_repeat2, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__comment_body_repeat2, 2),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_body_repeat2, 2), SHIFT_REPEAT(25),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_value, 1),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta_value, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_body_repeat1, 2), SHIFT_REPEAT(78),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__comment_body_repeat2, 1),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__comment_body_repeat2, 1),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta_key, 1),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(32),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change, 2, .production_id = 2),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_change, 2, .production_id = 2),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_body_repeat2, 2), SHIFT_REPEAT(36),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_key, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change, 4, .production_id = 2),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_change, 4, .production_id = 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scissors_repeat1, 2),
  [171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scissors_repeat1, 2), SHIFT_REPEAT(2),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_scissors_repeat1, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scissors, 2),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scissors, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scissors, 1),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scissors, 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat2, 2),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(48),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 2),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_subject_repeat1, 2),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_subject_repeat1, 2), SHIFT_REPEAT(53),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 4),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 1),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(12),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__rest, 2),
  [229] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__rest, 2), SHIFT_REPEAT(81),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__rest, 2), SHIFT_REPEAT(81),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 4, .production_id = 6),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 3, .production_id = 3),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2, .production_id = 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 5, .production_id = 7),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 5),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 6, .production_id = 8),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 3, .production_id = 4),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta, 3, .production_id = 4),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat3, 2),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat3, 2), SHIFT_REPEAT(56),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__body_line, 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trailer, 2),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__rest, 1),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__rest, 1),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trailer, 3, .production_id = 5),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trailer_key, 1),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [284] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
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
