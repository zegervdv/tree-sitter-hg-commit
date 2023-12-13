#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 249
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 124
#define ALIAS_COUNT 0
#define TOKEN_COUNT 90
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 33
#define PRODUCTION_ID_COUNT 8

enum {
  aux_sym_source_token1 = 1,
  aux_sym_subject_token1 = 2,
  aux_sym_subject_token2 = 3,
  aux_sym_message_token1 = 4,
  anon_sym_HG_COLON = 5,
  anon_sym_COLON = 6,
  anon_sym_EQ = 7,
  anon_sym_interactive = 8,
  anon_sym_rebase = 9,
  anon_sym_in = 10,
  anon_sym_progress = 11,
  anon_sym_SEMI = 12,
  anon_sym_onto = 13,
  anon_sym_POUND = 14,
  anon_sym_You = 15,
  anon_sym_are = 16,
  anon_sym_currently = 17,
  aux_sym__rebase_summary_token1 = 18,
  anon_sym_rebasing = 19,
  anon_sym_branch = 20,
  anon_sym_SQUOTE = 21,
  anon_sym_on = 22,
  anon_sym_DOT = 23,
  anon_sym_Last = 24,
  aux_sym__rebase_header_token1 = 25,
  anon_sym_done = 26,
  anon_sym_LPAREN = 27,
  aux_sym__rebase_header_token2 = 28,
  anon_sym_RPAREN = 29,
  anon_sym_Next = 30,
  anon_sym_to = 31,
  anon_sym_do = 32,
  anon_sym_remaining = 33,
  anon_sym_No = 34,
  anon_sym_commands = 35,
  anon_sym_Changes = 36,
  anon_sym_be = 37,
  anon_sym_committed = 38,
  anon_sym_not = 39,
  anon_sym_staged = 40,
  anon_sym_for = 41,
  anon_sym_commit = 42,
  anon_sym_On = 43,
  anon_sym_Your = 44,
  anon_sym_is = 45,
  anon_sym_up = 46,
  anon_sym_date = 47,
  anon_sym_with = 48,
  anon_sym_SQUOTE_DOT = 49,
  anon_sym_ahead = 50,
  anon_sym_of = 51,
  anon_sym_behind = 52,
  anon_sym_by = 53,
  aux_sym__branch_declaration_token1 = 54,
  anon_sym_and = 55,
  anon_sym_have = 56,
  anon_sym_diverged = 57,
  anon_sym_COMMA = 58,
  anon_sym_HEAD = 59,
  anon_sym_detached = 60,
  anon_sym_at = 61,
  anon_sym_Conflicts = 62,
  anon_sym_Untracked = 63,
  anon_sym_files = 64,
  anon_sym_newfile = 65,
  anon_sym_modified = 66,
  anon_sym_renamed = 67,
  anon_sym_deleted = 68,
  anon_sym_DASH_GT = 69,
  sym_commit = 70,
  sym__non_punctuated_word = 71,
  sym__non_comment = 72,
  sym__any_word = 73,
  sym_branch = 74,
  anon_sym_pick = 75,
  anon_sym_edit = 76,
  anon_sym_squash = 77,
  anon_sym_merge = 78,
  anon_sym_fixup = 79,
  anon_sym_drop = 80,
  anon_sym_reword = 81,
  anon_sym_exec = 82,
  anon_sym_label = 83,
  anon_sym_reset = 84,
  aux_sym_path_token1 = 85,
  sym_item = 86,
  sym_user = 87,
  aux_sym__rest_token1 = 88,
  sym__newline = 89,
  sym_source = 90,
  sym_subject = 91,
  sym__body_line = 92,
  sym__trailer = 93,
  sym_message = 94,
  sym__text = 95,
  sym_comment = 96,
  sym__comment_body = 97,
  sym_trailer = 98,
  sym_trailer_key = 99,
  sym_trailer_value = 100,
  sym__rebase_summary = 101,
  sym__rebase_header = 102,
  sym_summary = 103,
  sym__change_header = 104,
  sym__branch_declaration = 105,
  sym_header = 106,
  sym_change = 107,
  sym__word = 108,
  sym_rebase_command = 109,
  sym_path = 110,
  aux_sym__rest = 111,
  aux_sym_source_repeat1 = 112,
  aux_sym_source_repeat2 = 113,
  aux_sym_source_repeat3 = 114,
  aux_sym_subject_repeat1 = 115,
  aux_sym_message_repeat1 = 116,
  aux_sym__comment_body_repeat1 = 117,
  aux_sym_trailer_value_repeat1 = 118,
  aux_sym__rebase_summary_repeat1 = 119,
  aux_sym__rebase_summary_repeat2 = 120,
  aux_sym_summary_repeat1 = 121,
  aux_sym_summary_repeat2 = 122,
  aux_sym_path_repeat1 = 123,
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
  [anon_sym_interactive] = "interactive",
  [anon_sym_rebase] = "rebase",
  [anon_sym_in] = "in",
  [anon_sym_progress] = "progress",
  [anon_sym_SEMI] = ";",
  [anon_sym_onto] = "onto",
  [anon_sym_POUND] = "#",
  [anon_sym_You] = "You",
  [anon_sym_are] = "are",
  [anon_sym_currently] = "currently",
  [aux_sym__rebase_summary_token1] = "_rebase_summary_token1",
  [anon_sym_rebasing] = "rebasing",
  [anon_sym_branch] = "branch",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_on] = "on",
  [anon_sym_DOT] = ".",
  [anon_sym_Last] = "Last",
  [aux_sym__rebase_header_token1] = "_rebase_header_token1",
  [anon_sym_done] = "done",
  [anon_sym_LPAREN] = "(",
  [aux_sym__rebase_header_token2] = "_rebase_header_token2",
  [anon_sym_RPAREN] = ")",
  [anon_sym_Next] = "Next",
  [anon_sym_to] = "to",
  [anon_sym_do] = "do",
  [anon_sym_remaining] = "remaining",
  [anon_sym_No] = "No",
  [anon_sym_commands] = "commands",
  [anon_sym_Changes] = "Changes",
  [anon_sym_be] = "be",
  [anon_sym_committed] = "committed",
  [anon_sym_not] = "not",
  [anon_sym_staged] = "staged",
  [anon_sym_for] = "for",
  [anon_sym_commit] = "commit",
  [anon_sym_On] = "On",
  [anon_sym_Your] = "Your",
  [anon_sym_is] = "is",
  [anon_sym_up] = "up",
  [anon_sym_date] = "date",
  [anon_sym_with] = "with",
  [anon_sym_SQUOTE_DOT] = "'.",
  [anon_sym_ahead] = "ahead",
  [anon_sym_of] = "of",
  [anon_sym_behind] = "behind",
  [anon_sym_by] = "by",
  [aux_sym__branch_declaration_token1] = "_branch_declaration_token1",
  [anon_sym_and] = "and",
  [anon_sym_have] = "have",
  [anon_sym_diverged] = "diverged",
  [anon_sym_COMMA] = ",",
  [anon_sym_HEAD] = "HEAD",
  [anon_sym_detached] = "detached",
  [anon_sym_at] = "at",
  [anon_sym_Conflicts] = "Conflicts",
  [anon_sym_Untracked] = "Untracked",
  [anon_sym_files] = "files",
  [anon_sym_newfile] = "new file",
  [anon_sym_modified] = "modified",
  [anon_sym_renamed] = "renamed",
  [anon_sym_deleted] = "deleted",
  [anon_sym_DASH_GT] = "->",
  [sym_commit] = "commit",
  [sym__non_punctuated_word] = "_non_punctuated_word",
  [sym__non_comment] = "_non_comment",
  [sym__any_word] = "_any_word",
  [sym_branch] = "branch",
  [anon_sym_pick] = "pick",
  [anon_sym_edit] = "edit",
  [anon_sym_squash] = "squash",
  [anon_sym_merge] = "merge",
  [anon_sym_fixup] = "fixup",
  [anon_sym_drop] = "drop",
  [anon_sym_reword] = "reword",
  [anon_sym_exec] = "exec",
  [anon_sym_label] = "label",
  [anon_sym_reset] = "reset",
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
  [sym__rebase_summary] = "summary",
  [sym__rebase_header] = "header",
  [sym_summary] = "summary",
  [sym__change_header] = "header",
  [sym__branch_declaration] = "_branch_declaration",
  [sym_header] = "header",
  [sym_change] = "change",
  [sym__word] = "_word",
  [sym_rebase_command] = "rebase_command",
  [sym_path] = "path",
  [aux_sym__rest] = "_rest",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_source_repeat2] = "source_repeat2",
  [aux_sym_source_repeat3] = "source_repeat3",
  [aux_sym_subject_repeat1] = "subject_repeat1",
  [aux_sym_message_repeat1] = "message_repeat1",
  [aux_sym__comment_body_repeat1] = "_comment_body_repeat1",
  [aux_sym_trailer_value_repeat1] = "trailer_value_repeat1",
  [aux_sym__rebase_summary_repeat1] = "_rebase_summary_repeat1",
  [aux_sym__rebase_summary_repeat2] = "_rebase_summary_repeat2",
  [aux_sym_summary_repeat1] = "summary_repeat1",
  [aux_sym_summary_repeat2] = "summary_repeat2",
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
  [anon_sym_interactive] = anon_sym_interactive,
  [anon_sym_rebase] = anon_sym_rebase,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_progress] = anon_sym_progress,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_onto] = anon_sym_onto,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_You] = anon_sym_You,
  [anon_sym_are] = anon_sym_are,
  [anon_sym_currently] = anon_sym_currently,
  [aux_sym__rebase_summary_token1] = aux_sym__rebase_summary_token1,
  [anon_sym_rebasing] = anon_sym_rebasing,
  [anon_sym_branch] = anon_sym_branch,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_on] = anon_sym_on,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_Last] = anon_sym_Last,
  [aux_sym__rebase_header_token1] = aux_sym__rebase_header_token1,
  [anon_sym_done] = anon_sym_done,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [aux_sym__rebase_header_token2] = aux_sym__rebase_header_token2,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_Next] = anon_sym_Next,
  [anon_sym_to] = anon_sym_to,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_remaining] = anon_sym_remaining,
  [anon_sym_No] = anon_sym_No,
  [anon_sym_commands] = anon_sym_commands,
  [anon_sym_Changes] = anon_sym_Changes,
  [anon_sym_be] = anon_sym_be,
  [anon_sym_committed] = anon_sym_committed,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_staged] = anon_sym_staged,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_commit] = anon_sym_commit,
  [anon_sym_On] = anon_sym_On,
  [anon_sym_Your] = anon_sym_Your,
  [anon_sym_is] = anon_sym_is,
  [anon_sym_up] = anon_sym_up,
  [anon_sym_date] = anon_sym_date,
  [anon_sym_with] = anon_sym_with,
  [anon_sym_SQUOTE_DOT] = anon_sym_SQUOTE_DOT,
  [anon_sym_ahead] = anon_sym_ahead,
  [anon_sym_of] = anon_sym_of,
  [anon_sym_behind] = anon_sym_behind,
  [anon_sym_by] = anon_sym_by,
  [aux_sym__branch_declaration_token1] = aux_sym__branch_declaration_token1,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_have] = anon_sym_have,
  [anon_sym_diverged] = anon_sym_diverged,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_HEAD] = anon_sym_HEAD,
  [anon_sym_detached] = anon_sym_detached,
  [anon_sym_at] = anon_sym_at,
  [anon_sym_Conflicts] = anon_sym_Conflicts,
  [anon_sym_Untracked] = anon_sym_Untracked,
  [anon_sym_files] = anon_sym_files,
  [anon_sym_newfile] = anon_sym_newfile,
  [anon_sym_modified] = anon_sym_modified,
  [anon_sym_renamed] = anon_sym_renamed,
  [anon_sym_deleted] = anon_sym_deleted,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [sym_commit] = sym_commit,
  [sym__non_punctuated_word] = sym__non_punctuated_word,
  [sym__non_comment] = sym__non_comment,
  [sym__any_word] = sym__any_word,
  [sym_branch] = sym_branch,
  [anon_sym_pick] = anon_sym_pick,
  [anon_sym_edit] = anon_sym_edit,
  [anon_sym_squash] = anon_sym_squash,
  [anon_sym_merge] = anon_sym_merge,
  [anon_sym_fixup] = anon_sym_fixup,
  [anon_sym_drop] = anon_sym_drop,
  [anon_sym_reword] = anon_sym_reword,
  [anon_sym_exec] = anon_sym_exec,
  [anon_sym_label] = anon_sym_label,
  [anon_sym_reset] = anon_sym_reset,
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
  [sym__rebase_summary] = sym_summary,
  [sym__rebase_header] = sym_header,
  [sym_summary] = sym_summary,
  [sym__change_header] = sym_header,
  [sym__branch_declaration] = sym__branch_declaration,
  [sym_header] = sym_header,
  [sym_change] = sym_change,
  [sym__word] = sym__word,
  [sym_rebase_command] = sym_rebase_command,
  [sym_path] = sym_path,
  [aux_sym__rest] = aux_sym__rest,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_source_repeat2] = aux_sym_source_repeat2,
  [aux_sym_source_repeat3] = aux_sym_source_repeat3,
  [aux_sym_subject_repeat1] = aux_sym_subject_repeat1,
  [aux_sym_message_repeat1] = aux_sym_message_repeat1,
  [aux_sym__comment_body_repeat1] = aux_sym__comment_body_repeat1,
  [aux_sym_trailer_value_repeat1] = aux_sym_trailer_value_repeat1,
  [aux_sym__rebase_summary_repeat1] = aux_sym__rebase_summary_repeat1,
  [aux_sym__rebase_summary_repeat2] = aux_sym__rebase_summary_repeat2,
  [aux_sym_summary_repeat1] = aux_sym_summary_repeat1,
  [aux_sym_summary_repeat2] = aux_sym_summary_repeat2,
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
  [anon_sym_interactive] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rebase] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_progress] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_onto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_You] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_are] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_currently] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__rebase_summary_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_rebasing] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_branch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Last] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__rebase_header_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_done] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__rebase_header_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Next] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_to] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_remaining] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_No] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_commands] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Changes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_be] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_committed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_staged] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_commit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_On] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Your] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_up] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_date] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ahead] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_of] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_behind] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_by] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__branch_declaration_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_have] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_diverged] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HEAD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_detached] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_at] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Conflicts] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Untracked] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_files] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_newfile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_modified] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_renamed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_deleted] = {
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
  [sym_branch] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_pick] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_edit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_squash] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_merge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fixup] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_drop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reword] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exec] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_label] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reset] = {
    .visible = true,
    .named = false,
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
  [sym__rebase_summary] = {
    .visible = true,
    .named = true,
  },
  [sym__rebase_header] = {
    .visible = true,
    .named = true,
  },
  [sym_summary] = {
    .visible = true,
    .named = true,
  },
  [sym__change_header] = {
    .visible = true,
    .named = true,
  },
  [sym__branch_declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_header] = {
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
  [sym_rebase_command] = {
    .visible = true,
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
  [aux_sym_trailer_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__rebase_summary_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__rebase_summary_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_summary_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_summary_repeat2] = {
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
  [3] = {.index = 0, .length = 3},
  [7] = {.index = 3, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_key, 0},
    {field_separator, 1},
    {field_value, 2},
  [3] =
    {field_kind, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = sym_message,
  },
  [2] = {
    [2] = sym_message,
  },
  [4] = {
    [3] = sym_message,
  },
  [5] = {
    [4] = sym_message,
  },
  [6] = {
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
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 62,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 75,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 41,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(267);
      if (lookahead == '\n') ADVANCE(519);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(513);
      if (lookahead == '\'') ADVANCE(508);
      if (lookahead == '(') ADVANCE(508);
      if (lookahead == ')') ADVANCE(508);
      if (lookahead == ',') ADVANCE(508);
      if (lookahead == '.') ADVANCE(508);
      if (lookahead == ':') ADVANCE(508);
      if (lookahead == ';') ADVANCE(508);
      if (lookahead == '=') ADVANCE(508);
      if (lookahead == 'H') ADVANCE(505);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(273);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(506);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (lookahead != 0) ADVANCE(508);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(519);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(519);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(510);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(289);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(512);
      if (lookahead != 0) ADVANCE(513);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(519);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(289);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(287);
      if (lookahead != 0) ADVANCE(311);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(39);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(39);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '-') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(40);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(40);
      if (lookahead == '\r') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(32);
      if (lookahead == '-') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(34);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(173);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(153);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(41);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(26);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(228);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(57);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(207);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(247);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(227);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(60);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(122);
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(486);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(289);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(286);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(484);
      END_STATE();
    case 23:
      if (lookahead == '#') ADVANCE(485);
      if (lookahead == '@') ADVANCE(483);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(289);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(480);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(484);
      END_STATE();
    case 24:
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == 'b') ADVANCE(96);
      if (lookahead == 'c') ADVANCE(198);
      if (lookahead == 'd') ADVANCE(189);
      if (lookahead == 'o') ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(289);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(8);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(5);
      END_STATE();
    case 27:
      if (lookahead == '.') ADVANCE(343);
      END_STATE();
    case 28:
      if (lookahead == '8') ADVANCE(14);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(291);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(9);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(13);
      END_STATE();
    case 32:
      if (lookahead == '>') ADVANCE(28);
      END_STATE();
    case 33:
      if (lookahead == '>') ADVANCE(364);
      END_STATE();
    case 34:
      if (lookahead == 'D') ADVANCE(193);
      END_STATE();
    case 35:
      if (lookahead == 'E') ADVANCE(243);
      END_STATE();
    case 36:
      if (lookahead == 'G') ADVANCE(29);
      END_STATE();
    case 37:
      if (lookahead == 'G') ADVANCE(30);
      END_STATE();
    case 38:
      if (lookahead == 'G') ADVANCE(31);
      END_STATE();
    case 39:
      if (lookahead == 'H') ADVANCE(37);
      END_STATE();
    case 40:
      if (lookahead == 'H') ADVANCE(38);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(218);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(219);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(165);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(217);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(180);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(234);
      if (lookahead == 'e') ADVANCE(159);
      if (lookahead == 'i') ADVANCE(245);
      if (lookahead == 'o') ADVANCE(178);
      if (lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(176);
      if (lookahead == 'i') ADVANCE(225);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(126);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(179);
      if (lookahead == 'i') ADVANCE(226);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(147);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(246);
      END_STATE();
    case 56:
      if (lookahead == 'b') ADVANCE(185);
      END_STATE();
    case 57:
      if (lookahead == 'b') ADVANCE(97);
      END_STATE();
    case 58:
      if (lookahead == 'b') ADVANCE(43);
      if (lookahead == 'm') ADVANCE(54);
      if (lookahead == 'n') ADVANCE(44);
      if (lookahead == 's') ADVANCE(110);
      if (lookahead == 'w') ADVANCE(195);
      END_STATE();
    case 59:
      if (lookahead == 'b') ADVANCE(100);
      END_STATE();
    case 60:
      if (lookahead == 'b') ADVANCE(112);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(133);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(152);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(501);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(131);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(135);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(289);
      END_STATE();
    case 67:
      if (lookahead == 'd') ADVANCE(350);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(344);
      END_STATE();
    case 69:
      if (lookahead == 'd') ADVANCE(346);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(500);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(334);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(319);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(363);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(362);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(355);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(352);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(361);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(332);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(256);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(139);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(215);
      END_STATE();
    case 82:
      if (lookahead == 'd') ADVANCE(149);
      if (lookahead == 'x') ADVANCE(99);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(250);
      if (lookahead == 'o') ADVANCE(328);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(302);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(341);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(320);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(351);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(497);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(295);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(360);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(331);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(249);
      if (lookahead == 'o') ADVANCE(220);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(137);
      if (lookahead == 'r') ADVANCE(47);
      if (lookahead == 'y') ADVANCE(347);
      END_STATE();
    case 120:
      if (lookahead == 'f') ADVANCE(345);
      if (lookahead == 'n') ADVANCE(233);
      END_STATE();
    case 121:
      if (lookahead == 'f') ADVANCE(151);
      END_STATE();
    case 122:
      if (lookahead == 'f') ADVANCE(145);
      END_STATE();
    case 123:
      if (lookahead == 'g') ADVANCE(327);
      END_STATE();
    case 124:
      if (lookahead == 'g') ADVANCE(16);
      END_STATE();
    case 125:
      if (lookahead == 'g') ADVANCE(93);
      END_STATE();
    case 126:
      if (lookahead == 'g') ADVANCE(106);
      END_STATE();
    case 127:
      if (lookahead == 'g') ADVANCE(113);
      END_STATE();
    case 128:
      if (lookahead == 'g') ADVANCE(210);
      END_STATE();
    case 129:
      if (lookahead == 'h') ADVANCE(103);
      END_STATE();
    case 130:
      if (lookahead == 'h') ADVANCE(342);
      END_STATE();
    case 131:
      if (lookahead == 'h') ADVANCE(313);
      END_STATE();
    case 132:
      if (lookahead == 'h') ADVANCE(496);
      END_STATE();
    case 133:
      if (lookahead == 'h') ADVANCE(19);
      END_STATE();
    case 134:
      if (lookahead == 'h') ADVANCE(104);
      if (lookahead == 'n') ADVANCE(67);
      if (lookahead == 'r') ADVANCE(89);
      if (lookahead == 't') ADVANCE(356);
      END_STATE();
    case 135:
      if (lookahead == 'h') ADVANCE(111);
      END_STATE();
    case 136:
      if (lookahead == 'h') ADVANCE(142);
      END_STATE();
    case 137:
      if (lookahead == 'h') ADVANCE(144);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(160);
      if (lookahead == 'o') ADVANCE(204);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 141:
      if (lookahead == 'i') ADVANCE(62);
      if (lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 142:
      if (lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 143:
      if (lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(175);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(161);
      END_STATE();
    case 146:
      if (lookahead == 'i') ADVANCE(231);
      END_STATE();
    case 147:
      if (lookahead == 'i') ADVANCE(182);
      END_STATE();
    case 148:
      if (lookahead == 'i') ADVANCE(174);
      END_STATE();
    case 149:
      if (lookahead == 'i') ADVANCE(223);
      END_STATE();
    case 150:
      if (lookahead == 'i') ADVANCE(237);
      END_STATE();
    case 151:
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 152:
      if (lookahead == 'k') ADVANCE(494);
      END_STATE();
    case 153:
      if (lookahead == 'l') ADVANCE(140);
      END_STATE();
    case 154:
      if (lookahead == 'l') ADVANCE(502);
      END_STATE();
    case 155:
      if (lookahead == 'l') ADVANCE(251);
      END_STATE();
    case 156:
      if (lookahead == 'l') ADVANCE(158);
      END_STATE();
    case 157:
      if (lookahead == 'l') ADVANCE(186);
      END_STATE();
    case 158:
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 159:
      if (lookahead == 'l') ADVANCE(117);
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 160:
      if (lookahead == 'l') ADVANCE(98);
      if (lookahead == 'x') ADVANCE(240);
      END_STATE();
    case 161:
      if (lookahead == 'l') ADVANCE(95);
      END_STATE();
    case 162:
      if (lookahead == 'm') ADVANCE(49);
      END_STATE();
    case 163:
      if (lookahead == 'm') ADVANCE(162);
      END_STATE();
    case 164:
      if (lookahead == 'm') ADVANCE(169);
      END_STATE();
    case 165:
      if (lookahead == 'm') ADVANCE(109);
      END_STATE();
    case 166:
      if (lookahead == 'm') ADVANCE(52);
      END_STATE();
    case 167:
      if (lookahead == 'm') ADVANCE(166);
      END_STATE();
    case 168:
      if (lookahead == 'm') ADVANCE(197);
      END_STATE();
    case 169:
      if (lookahead == 'm') ADVANCE(150);
      END_STATE();
    case 170:
      if (lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 171:
      if (lookahead == 'n') ADVANCE(296);
      if (lookahead == 's') ADVANCE(339);
      END_STATE();
    case 172:
      if (lookahead == 'n') ADVANCE(315);
      END_STATE();
    case 173:
      if (lookahead == 'n') ADVANCE(183);
      END_STATE();
    case 174:
      if (lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 175:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 176:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 177:
      if (lookahead == 'n') ADVANCE(232);
      END_STATE();
    case 178:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 179:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 180:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 181:
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 182:
      if (lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 183:
      if (lookahead == 'o') ADVANCE(230);
      END_STATE();
    case 184:
      if (lookahead == 'o') ADVANCE(238);
      END_STATE();
    case 185:
      if (lookahead == 'o') ADVANCE(242);
      END_STATE();
    case 186:
      if (lookahead == 'o') ADVANCE(248);
      END_STATE();
    case 187:
      if (lookahead == 'o') ADVANCE(325);
      END_STATE();
    case 188:
      if (lookahead == 'o') ADVANCE(299);
      END_STATE();
    case 189:
      if (lookahead == 'o') ADVANCE(326);
      END_STATE();
    case 190:
      if (lookahead == 'o') ADVANCE(239);
      END_STATE();
    case 191:
      if (lookahead == 'o') ADVANCE(163);
      if (lookahead == 'u') ADVANCE(211);
      END_STATE();
    case 192:
      if (lookahead == 'o') ADVANCE(200);
      END_STATE();
    case 193:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 194:
      if (lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 195:
      if (lookahead == 'o') ADVANCE(208);
      END_STATE();
    case 196:
      if (lookahead == 'o') ADVANCE(164);
      END_STATE();
    case 197:
      if (lookahead == 'o') ADVANCE(244);
      END_STATE();
    case 198:
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 199:
      if (lookahead == 'p') ADVANCE(340);
      END_STATE();
    case 200:
      if (lookahead == 'p') ADVANCE(499);
      END_STATE();
    case 201:
      if (lookahead == 'p') ADVANCE(498);
      END_STATE();
    case 202:
      if (lookahead == 'q') ADVANCE(241);
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 203:
      if (lookahead == 'r') ADVANCE(252);
      END_STATE();
    case 204:
      if (lookahead == 'r') ADVANCE(335);
      END_STATE();
    case 205:
      if (lookahead == 'r') ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(289);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(287);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(311);
      END_STATE();
    case 206:
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 207:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 208:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 209:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 210:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 211:
      if (lookahead == 'r') ADVANCE(209);
      END_STATE();
    case 212:
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 213:
      if (lookahead == 's') ADVANCE(359);
      END_STATE();
    case 214:
      if (lookahead == 's') ADVANCE(297);
      END_STATE();
    case 215:
      if (lookahead == 's') ADVANCE(329);
      END_STATE();
    case 216:
      if (lookahead == 's') ADVANCE(214);
      END_STATE();
    case 217:
      if (lookahead == 's') ADVANCE(132);
      END_STATE();
    case 218:
      if (lookahead == 's') ADVANCE(221);
      END_STATE();
    case 219:
      if (lookahead == 's') ADVANCE(94);
      END_STATE();
    case 220:
      if (lookahead == 't') ADVANCE(333);
      END_STATE();
    case 221:
      if (lookahead == 't') ADVANCE(317);
      END_STATE();
    case 222:
      if (lookahead == 't') ADVANCE(324);
      END_STATE();
    case 223:
      if (lookahead == 't') ADVANCE(495);
      END_STATE();
    case 224:
      if (lookahead == 't') ADVANCE(503);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(349);
      END_STATE();
    case 226:
      if (lookahead == 't') ADVANCE(336);
      END_STATE();
    case 227:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 228:
      if (lookahead == 't') ADVANCE(184);
      END_STATE();
    case 229:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 230:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 231:
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 232:
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 233:
      if (lookahead == 't') ADVANCE(188);
      END_STATE();
    case 234:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 235:
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 236:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 237:
      if (lookahead == 't') ADVANCE(236);
      END_STATE();
    case 238:
      if (lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 239:
      if (lookahead == 'u') ADVANCE(301);
      END_STATE();
    case 240:
      if (lookahead == 'u') ADVANCE(201);
      END_STATE();
    case 241:
      if (lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 242:
      if (lookahead == 'v') ADVANCE(83);
      END_STATE();
    case 243:
      if (lookahead == 'v') ADVANCE(84);
      END_STATE();
    case 244:
      if (lookahead == 'v') ADVANCE(86);
      END_STATE();
    case 245:
      if (lookahead == 'v') ADVANCE(118);
      END_STATE();
    case 246:
      if (lookahead == 'v') ADVANCE(92);
      END_STATE();
    case 247:
      if (lookahead == 'w') ADVANCE(143);
      END_STATE();
    case 248:
      if (lookahead == 'w') ADVANCE(18);
      END_STATE();
    case 249:
      if (lookahead == 'w') ADVANCE(21);
      END_STATE();
    case 250:
      if (lookahead == 'x') ADVANCE(222);
      END_STATE();
    case 251:
      if (lookahead == 'y') ADVANCE(303);
      END_STATE();
    case 252:
      if (lookahead == 'y') ADVANCE(229);
      END_STATE();
    case 253:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(289);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(492);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(493);
      END_STATE();
    case 254:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(289);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(288);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(493);
      END_STATE();
    case 255:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 256:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 257:
      if (eof) ADVANCE(267);
      if (lookahead == '\n') ADVANCE(519);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(486);
      if (lookahead == '@') ADVANCE(483);
      if (lookahead == 'H') ADVANCE(439);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(289);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(480);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (lookahead != 0) ADVANCE(484);
      END_STATE();
    case 258:
      if (eof) ADVANCE(267);
      if (lookahead == '\n') ADVANCE(519);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(486);
      if (lookahead == 'C') ADVANCE(453);
      if (lookahead == 'H') ADVANCE(437);
      if (lookahead == 'O') ADVANCE(458);
      if (lookahead == 'U') ADVANCE(459);
      if (lookahead == 'Y') ADVANCE(463);
      if (lookahead == 'i') ADVANCE(462);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(289);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(286);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (lookahead != 0) ADVANCE(484);
      END_STATE();
    case 259:
      if (eof) ADVANCE(267);
      if (lookahead == '\n') ADVANCE(519);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(486);
      if (lookahead == 'H') ADVANCE(438);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(289);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(286);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (lookahead != 0) ADVANCE(484);
      END_STATE();
    case 260:
      if (eof) ADVANCE(267);
      if (lookahead == '\n') ADVANCE(519);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(486);
      if (lookahead == 'H') ADVANCE(439);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(289);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(286);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (lookahead != 0) ADVANCE(484);
      END_STATE();
    case 261:
      if (eof) ADVANCE(267);
      if (lookahead == '\n') ADVANCE(519);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '\'') ADVANCE(314);
      if (lookahead == '(') ADVANCE(321);
      if (lookahead == ')') ADVANCE(323);
      if (lookahead == ',') ADVANCE(353);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(316);
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == ';') ADVANCE(298);
      if (lookahead == '=') ADVANCE(293);
      if (lookahead == 'H') ADVANCE(36);
      if (lookahead == 'L') ADVANCE(42);
      if (lookahead == 'N') ADVANCE(87);
      if (lookahead == 'Y') ADVANCE(190);
      if (lookahead == 'a') ADVANCE(134);
      if (lookahead == 'b') ADVANCE(119);
      if (lookahead == 'c') ADVANCE(191);
      if (lookahead == 'd') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == 'f') ADVANCE(138);
      if (lookahead == 'h') ADVANCE(55);
      if (lookahead == 'i') ADVANCE(171);
      if (lookahead == 'l') ADVANCE(50);
      if (lookahead == 'm') ADVANCE(101);
      if (lookahead == 'n') ADVANCE(116);
      if (lookahead == 'o') ADVANCE(120);
      if (lookahead == 'p') ADVANCE(141);
      if (lookahead == 'r') ADVANCE(88);
      if (lookahead == 's') ADVANCE(202);
      if (lookahead == 't') ADVANCE(187);
      if (lookahead == 'u') ADVANCE(199);
      if (lookahead == 'w') ADVANCE(146);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      END_STATE();
    case 262:
      if (eof) ADVANCE(267);
      if (lookahead == '\n') ADVANCE(519);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(485);
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == '=') ADVANCE(293);
      if (lookahead == '@') ADVANCE(483);
      if (lookahead == 'H') ADVANCE(438);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(289);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(480);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (lookahead != 0) ADVANCE(484);
      END_STATE();
    case 263:
      if (eof) ADVANCE(267);
      if (lookahead == '\n') ADVANCE(519);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(485);
      if (lookahead == '@') ADVANCE(483);
      if (lookahead == 'H') ADVANCE(438);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(289);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(480);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      if (lookahead != 0) ADVANCE(484);
      END_STATE();
    case 264:
      if (eof) ADVANCE(267);
      if (lookahead == '\n') ADVANCE(519);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'H') ADVANCE(272);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(271);
      END_STATE();
    case 265:
      if (eof) ADVANCE(267);
      if (lookahead == '\n') ADVANCE(519);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'H') ADVANCE(511);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(289);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(512);
      if (lookahead != 0) ADVANCE(513);
      END_STATE();
    case 266:
      if (eof) ADVANCE(267);
      if (lookahead == '\n') ADVANCE(519);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'H') ADVANCE(283);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(284);
      if (lookahead != 0) ADVANCE(285);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_source_token1);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_source_token1);
      if (lookahead == '\n') ADVANCE(268);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_source_token1);
      if (lookahead == '\n') ADVANCE(268);
      if (lookahead == '\r') ADVANCE(269);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_subject_token1);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_subject_token1);
      if (lookahead == 'G') ADVANCE(29);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_subject_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(289);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == '\n') ADVANCE(39);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '-') ADVANCE(274);
      if (lookahead != 0) ADVANCE(285);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == ' ') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(285);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == ' ') ADVANCE(282);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(285);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == ' ') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(285);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(285);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == '-') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(285);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == '8') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(285);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == ':') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(285);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == '>') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(285);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == 'G') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(285);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(284);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(285);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(285);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(289);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(286);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(289);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(287);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(311);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(289);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(288);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(493);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(289);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_HG_COLON);
      if (lookahead == ' ') ADVANCE(25);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_interactive);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_rebase);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_progress);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_onto);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_You);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_are);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_currently);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym__rebase_summary_token1);
      if (lookahead == 'a') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(311);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym__rebase_summary_token1);
      if (lookahead == 'b') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(311);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym__rebase_summary_token1);
      if (lookahead == 'e') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(311);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym__rebase_summary_token1);
      if (lookahead == 'g') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(311);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym__rebase_summary_token1);
      if (lookahead == 'i') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(311);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym__rebase_summary_token1);
      if (lookahead == 'n') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(311);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym__rebase_summary_token1);
      if (lookahead == 's') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(311);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym__rebase_summary_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(311);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_rebasing);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(311);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_branch);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_Last);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym__rebase_header_token1);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym__rebase_header_token1);
      if (lookahead == 's') ADVANCE(318);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_done);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym__rebase_header_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_Next);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_remaining);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_No);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_commands);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_Changes);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_be);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_committed);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_staged);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_commit);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_On);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_Your);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_up);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_date);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_SQUOTE_DOT);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_ahead);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_behind);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_by);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym__branch_declaration_token1);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym__branch_declaration_token1);
      if (lookahead == 's') ADVANCE(348);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_have);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_diverged);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_HEAD);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_detached);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_at);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_Conflicts);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_Untracked);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_files);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_newfile);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_modified);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_renamed);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_deleted);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_commit);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(365);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(493);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(493);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(368);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(493);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(370);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(493);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(372);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(493);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(374);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(493);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(376);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(493);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(378);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(493);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(380);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(493);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(382);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(493);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(384);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(493);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(386);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(493);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(388);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(493);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(390);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(493);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(392);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(493);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(394);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(493);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(396);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(493);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(398);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(493);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(400);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(493);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(402);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(493);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(404);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(493);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(406);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(493);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(408);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(493);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(410);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(493);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(412);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(493);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(414);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(493);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(416);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(493);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(418);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(493);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(420);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(493);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(422);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(493);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(424);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(493);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(426);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(493);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(428);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(493);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_commit);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(493);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == ':') ADVANCE(291);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == ':') ADVANCE(482);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'A') ADVANCE(436);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'D') ADVANCE(354);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'E') ADVANCE(435);
      if (lookahead == 'G') ADVANCE(434);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'G') ADVANCE(434);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'G') ADVANCE(433);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'a') ADVANCE(443);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'a') ADVANCE(461);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'a') ADVANCE(445);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'c') ADVANCE(456);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'c') ADVANCE(472);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'c') ADVANCE(471);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'd') ADVANCE(358);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'e') ADVANCE(467);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'e') ADVANCE(446);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'e') ADVANCE(294);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'e') ADVANCE(466);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'f') ADVANCE(457);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'g') ADVANCE(447);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'h') ADVANCE(441);
      if (lookahead == 'o') ADVANCE(460);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'i') ADVANCE(474);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'i') ADVANCE(444);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'k') ADVANCE(448);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'l') ADVANCE(455);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'n') ADVANCE(337);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'n') ADVANCE(469);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'n') ADVANCE(451);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'n') ADVANCE(452);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'n') ADVANCE(470);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'o') ADVANCE(473);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'r') ADVANCE(338);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'r') ADVANCE(440);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'r') ADVANCE(442);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 's') ADVANCE(330);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 's') ADVANCE(357);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 't') ADVANCE(465);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 't') ADVANCE(450);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 't') ADVANCE(454);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 't') ADVANCE(468);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'u') ADVANCE(464);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'v') ADVANCE(449);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(430);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(475);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(476);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(477);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(478);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(479);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(481);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym__non_comment);
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(484);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym__non_comment);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(484);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym__non_comment);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(484);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym__any_word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(486);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym__any_word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(486);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_branch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(493);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_branch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(493);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_branch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(493);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_branch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(493);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_branch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(493);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_branch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(493);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_branch);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(493);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_pick);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_edit);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_squash);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_merge);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_fixup);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_drop);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_reword);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_exec);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_reset);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '#') ADVANCE(513);
      if (lookahead == ':') ADVANCE(508);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(508);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '#') ADVANCE(513);
      if (lookahead == 'G') ADVANCE(504);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(508);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '#') ADVANCE(513);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(506);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(508);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '#') ADVANCE(513);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(508);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '#') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(508);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == ':') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(513);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '>') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(513);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'G') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(513);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(512);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(513);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(513);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_item);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(514);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_user);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(515);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (lookahead == '\n') ADVANCE(519);
      if (lookahead != 0) ADVANCE(517);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (eof) ADVANCE(267);
      if (lookahead == '\n') ADVANCE(519);
      if (lookahead == '\r') ADVANCE(516);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(290);
      if (lookahead != 0) ADVANCE(517);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 264},
  [2] = {.lex_state = 258},
  [3] = {.lex_state = 261},
  [4] = {.lex_state = 261},
  [5] = {.lex_state = 262},
  [6] = {.lex_state = 257},
  [7] = {.lex_state = 261},
  [8] = {.lex_state = 261},
  [9] = {.lex_state = 263},
  [10] = {.lex_state = 261},
  [11] = {.lex_state = 263},
  [12] = {.lex_state = 263},
  [13] = {.lex_state = 261},
  [14] = {.lex_state = 263},
  [15] = {.lex_state = 260},
  [16] = {.lex_state = 263},
  [17] = {.lex_state = 257},
  [18] = {.lex_state = 23},
  [19] = {.lex_state = 258},
  [20] = {.lex_state = 258},
  [21] = {.lex_state = 261},
  [22] = {.lex_state = 258},
  [23] = {.lex_state = 259},
  [24] = {.lex_state = 259},
  [25] = {.lex_state = 265},
  [26] = {.lex_state = 258},
  [27] = {.lex_state = 22},
  [28] = {.lex_state = 258},
  [29] = {.lex_state = 258},
  [30] = {.lex_state = 261},
  [31] = {.lex_state = 261},
  [32] = {.lex_state = 261},
  [33] = {.lex_state = 261},
  [34] = {.lex_state = 266},
  [35] = {.lex_state = 261},
  [36] = {.lex_state = 258},
  [37] = {.lex_state = 258},
  [38] = {.lex_state = 261},
  [39] = {.lex_state = 266},
  [40] = {.lex_state = 266},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 258},
  [43] = {.lex_state = 258},
  [44] = {.lex_state = 261},
  [45] = {.lex_state = 518},
  [46] = {.lex_state = 518},
  [47] = {.lex_state = 518},
  [48] = {.lex_state = 258},
  [49] = {.lex_state = 518},
  [50] = {.lex_state = 518},
  [51] = {.lex_state = 518},
  [52] = {.lex_state = 261},
  [53] = {.lex_state = 518},
  [54] = {.lex_state = 261},
  [55] = {.lex_state = 261},
  [56] = {.lex_state = 518},
  [57] = {.lex_state = 518},
  [58] = {.lex_state = 261},
  [59] = {.lex_state = 258},
  [60] = {.lex_state = 261},
  [61] = {.lex_state = 261},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 518},
  [64] = {.lex_state = 518},
  [65] = {.lex_state = 258},
  [66] = {.lex_state = 258},
  [67] = {.lex_state = 265},
  [68] = {.lex_state = 205},
  [69] = {.lex_state = 518},
  [70] = {.lex_state = 265},
  [71] = {.lex_state = 258},
  [72] = {.lex_state = 258},
  [73] = {.lex_state = 265},
  [74] = {.lex_state = 258},
  [75] = {.lex_state = 205},
  [76] = {.lex_state = 258},
  [77] = {.lex_state = 258},
  [78] = {.lex_state = 261},
  [79] = {.lex_state = 205},
  [80] = {.lex_state = 205},
  [81] = {.lex_state = 258},
  [82] = {.lex_state = 205},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 258},
  [85] = {.lex_state = 258},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 258},
  [88] = {.lex_state = 258},
  [89] = {.lex_state = 205},
  [90] = {.lex_state = 258},
  [91] = {.lex_state = 205},
  [92] = {.lex_state = 258},
  [93] = {.lex_state = 258},
  [94] = {.lex_state = 265},
  [95] = {.lex_state = 258},
  [96] = {.lex_state = 265},
  [97] = {.lex_state = 258},
  [98] = {.lex_state = 261},
  [99] = {.lex_state = 261},
  [100] = {.lex_state = 261},
  [101] = {.lex_state = 261},
  [102] = {.lex_state = 253},
  [103] = {.lex_state = 261},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 261},
  [106] = {.lex_state = 261},
  [107] = {.lex_state = 261},
  [108] = {.lex_state = 261},
  [109] = {.lex_state = 261},
  [110] = {.lex_state = 261},
  [111] = {.lex_state = 261},
  [112] = {.lex_state = 261},
  [113] = {.lex_state = 261},
  [114] = {.lex_state = 261},
  [115] = {.lex_state = 261},
  [116] = {.lex_state = 258},
  [117] = {.lex_state = 261},
  [118] = {.lex_state = 254},
  [119] = {.lex_state = 261},
  [120] = {.lex_state = 261},
  [121] = {.lex_state = 258},
  [122] = {.lex_state = 261},
  [123] = {.lex_state = 261},
  [124] = {.lex_state = 261},
  [125] = {.lex_state = 261},
  [126] = {.lex_state = 254},
  [127] = {.lex_state = 261},
  [128] = {.lex_state = 261},
  [129] = {.lex_state = 261},
  [130] = {.lex_state = 258},
  [131] = {.lex_state = 258},
  [132] = {.lex_state = 24},
  [133] = {.lex_state = 261},
  [134] = {.lex_state = 261},
  [135] = {.lex_state = 261},
  [136] = {.lex_state = 261},
  [137] = {.lex_state = 261},
  [138] = {.lex_state = 24},
  [139] = {.lex_state = 258},
  [140] = {.lex_state = 254},
  [141] = {.lex_state = 261},
  [142] = {.lex_state = 261},
  [143] = {.lex_state = 261},
  [144] = {.lex_state = 261},
  [145] = {.lex_state = 261},
  [146] = {.lex_state = 261},
  [147] = {.lex_state = 261},
  [148] = {.lex_state = 261},
  [149] = {.lex_state = 261},
  [150] = {.lex_state = 24},
  [151] = {.lex_state = 261},
  [152] = {.lex_state = 261},
  [153] = {.lex_state = 258},
  [154] = {.lex_state = 261},
  [155] = {.lex_state = 261},
  [156] = {.lex_state = 261},
  [157] = {.lex_state = 258},
  [158] = {.lex_state = 258},
  [159] = {.lex_state = 258},
  [160] = {.lex_state = 258},
  [161] = {.lex_state = 258},
  [162] = {.lex_state = 261},
  [163] = {.lex_state = 261},
  [164] = {.lex_state = 261},
  [165] = {.lex_state = 254},
  [166] = {.lex_state = 261},
  [167] = {.lex_state = 261},
  [168] = {.lex_state = 258},
  [169] = {.lex_state = 261},
  [170] = {.lex_state = 261},
  [171] = {.lex_state = 261},
  [172] = {.lex_state = 261},
  [173] = {.lex_state = 24},
  [174] = {.lex_state = 261},
  [175] = {.lex_state = 261},
  [176] = {.lex_state = 261},
  [177] = {.lex_state = 261},
  [178] = {.lex_state = 261},
  [179] = {.lex_state = 258},
  [180] = {.lex_state = 261},
  [181] = {.lex_state = 262},
  [182] = {.lex_state = 261},
  [183] = {.lex_state = 261},
  [184] = {.lex_state = 261},
  [185] = {.lex_state = 261},
  [186] = {.lex_state = 258},
  [187] = {.lex_state = 261},
  [188] = {.lex_state = 66},
  [189] = {.lex_state = 261},
  [190] = {.lex_state = 261},
  [191] = {.lex_state = 258},
  [192] = {.lex_state = 261},
  [193] = {.lex_state = 261},
  [194] = {.lex_state = 261},
  [195] = {.lex_state = 261},
  [196] = {.lex_state = 261},
  [197] = {.lex_state = 261},
  [198] = {.lex_state = 258},
  [199] = {.lex_state = 261},
  [200] = {.lex_state = 254},
  [201] = {.lex_state = 261},
  [202] = {.lex_state = 261},
  [203] = {.lex_state = 254},
  [204] = {.lex_state = 261},
  [205] = {.lex_state = 254},
  [206] = {.lex_state = 261},
  [207] = {.lex_state = 261},
  [208] = {.lex_state = 24},
  [209] = {.lex_state = 261},
  [210] = {.lex_state = 254},
  [211] = {.lex_state = 261},
  [212] = {.lex_state = 261},
  [213] = {.lex_state = 24},
  [214] = {.lex_state = 261},
  [215] = {.lex_state = 254},
  [216] = {.lex_state = 262},
  [217] = {.lex_state = 261},
  [218] = {.lex_state = 24},
  [219] = {.lex_state = 261},
  [220] = {.lex_state = 261},
  [221] = {.lex_state = 262},
  [222] = {.lex_state = 261},
  [223] = {.lex_state = 24},
  [224] = {.lex_state = 261},
  [225] = {.lex_state = 261},
  [226] = {.lex_state = 262},
  [227] = {.lex_state = 261},
  [228] = {.lex_state = 258},
  [229] = {.lex_state = 261},
  [230] = {.lex_state = 261},
  [231] = {.lex_state = 262},
  [232] = {.lex_state = 261},
  [233] = {.lex_state = 258},
  [234] = {.lex_state = 261},
  [235] = {.lex_state = 261},
  [236] = {.lex_state = 24},
  [237] = {.lex_state = 261},
  [238] = {.lex_state = 258},
  [239] = {.lex_state = 261},
  [240] = {.lex_state = 258},
  [241] = {.lex_state = 258},
  [242] = {.lex_state = 258},
  [243] = {.lex_state = 261},
  [244] = {.lex_state = 261},
  [245] = {.lex_state = 261},
  [246] = {.lex_state = 261},
  [247] = {.lex_state = 261},
  [248] = {.lex_state = 261},
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
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym__non_punctuated_word] = ACTIONS(1),
    [sym__non_comment] = ACTIONS(1),
    [sym__any_word] = ACTIONS(1),
    [aux_sym_path_token1] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(131),
    [sym_subject] = STATE(22),
    [sym__body_line] = STATE(19),
    [sym__trailer] = STATE(29),
    [sym_comment] = STATE(22),
    [aux_sym_source_repeat1] = STATE(19),
    [aux_sym_source_repeat2] = STATE(29),
    [aux_sym_source_repeat3] = STATE(65),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_source_token1] = ACTIONS(7),
    [aux_sym_subject_token1] = ACTIONS(9),
    [aux_sym_message_token1] = ACTIONS(3),
    [anon_sym_HG_COLON] = ACTIONS(11),
    [sym__newline] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(19), 1,
      anon_sym_interactive,
    ACTIONS(21), 1,
      anon_sym_Changes,
    ACTIONS(23), 1,
      anon_sym_On,
    ACTIONS(25), 1,
      anon_sym_Your,
    ACTIONS(27), 1,
      anon_sym_HEAD,
    ACTIONS(29), 1,
      anon_sym_Conflicts,
    ACTIONS(31), 1,
      anon_sym_Untracked,
    STATE(240), 1,
      sym_header,
    STATE(241), 1,
      sym__change_header,
    STATE(24), 2,
      sym__word,
      aux_sym__comment_body_repeat1,
    ACTIONS(15), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
    ACTIONS(33), 3,
      sym__non_punctuated_word,
      sym__non_comment,
      sym__any_word,
    STATE(84), 4,
      sym__comment_body,
      sym__rebase_summary,
      sym_summary,
      sym__branch_declaration,
  [51] = 7,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(35), 1,
      anon_sym_Last,
    ACTIONS(37), 1,
      anon_sym_Next,
    ACTIONS(39), 1,
      anon_sym_No,
    STATE(160), 1,
      sym_rebase_command,
    STATE(168), 1,
      sym__rebase_header,
    ACTIONS(41), 10,
      anon_sym_pick,
      anon_sym_edit,
      anon_sym_squash,
      anon_sym_merge,
      anon_sym_fixup,
      anon_sym_drop,
      anon_sym_reword,
      anon_sym_exec,
      anon_sym_label,
      anon_sym_reset,
  [82] = 7,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(35), 1,
      anon_sym_Last,
    ACTIONS(37), 1,
      anon_sym_Next,
    ACTIONS(39), 1,
      anon_sym_No,
    STATE(159), 1,
      sym__rebase_header,
    STATE(160), 1,
      sym_rebase_command,
    ACTIONS(41), 10,
      anon_sym_pick,
      anon_sym_edit,
      anon_sym_squash,
      anon_sym_merge,
      anon_sym_fixup,
      anon_sym_drop,
      anon_sym_reword,
      anon_sym_exec,
      anon_sym_label,
      anon_sym_reset,
  [113] = 6,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(45), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(43), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
    ACTIONS(47), 3,
      sym_commit,
      sym_item,
      sym_user,
    ACTIONS(49), 3,
      sym__non_punctuated_word,
      sym__non_comment,
      sym__any_word,
    STATE(11), 3,
      sym__text,
      sym__word,
      aux_sym_message_repeat1,
  [141] = 10,
    ACTIONS(11), 1,
      anon_sym_HG_COLON,
    ACTIONS(57), 1,
      sym__any_word,
    STATE(66), 1,
      sym_comment,
    STATE(95), 1,
      sym_trailer,
    STATE(97), 1,
      sym_message,
    STATE(99), 1,
      sym__word,
    STATE(101), 1,
      sym_trailer_key,
    ACTIONS(55), 2,
      sym__non_punctuated_word,
      sym__non_comment,
    ACTIONS(51), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
    ACTIONS(53), 3,
      aux_sym_message_token1,
      sym_commit,
      sym_user,
  [177] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(59), 1,
      anon_sym_You,
    STATE(160), 1,
      sym_rebase_command,
    ACTIONS(41), 10,
      anon_sym_pick,
      anon_sym_edit,
      anon_sym_squash,
      anon_sym_merge,
      anon_sym_fixup,
      anon_sym_drop,
      anon_sym_reword,
      anon_sym_exec,
      anon_sym_label,
      anon_sym_reset,
  [199] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(61), 1,
      anon_sym_You,
    STATE(160), 1,
      sym_rebase_command,
    ACTIONS(41), 10,
      anon_sym_pick,
      anon_sym_edit,
      anon_sym_squash,
      anon_sym_merge,
      anon_sym_fixup,
      anon_sym_drop,
      anon_sym_reword,
      anon_sym_exec,
      anon_sym_label,
      anon_sym_reset,
  [221] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(43), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
    ACTIONS(47), 3,
      sym_commit,
      sym_item,
      sym_user,
    ACTIONS(49), 3,
      sym__non_punctuated_word,
      sym__non_comment,
      sym__any_word,
    STATE(11), 3,
      sym__text,
      sym__word,
      aux_sym_message_repeat1,
  [245] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(63), 1,
      anon_sym_You,
    STATE(160), 1,
      sym_rebase_command,
    ACTIONS(41), 10,
      anon_sym_pick,
      anon_sym_edit,
      anon_sym_squash,
      anon_sym_merge,
      anon_sym_fixup,
      anon_sym_drop,
      anon_sym_reword,
      anon_sym_exec,
      anon_sym_label,
      anon_sym_reset,
  [267] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(65), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
    ACTIONS(67), 3,
      sym_commit,
      sym_item,
      sym_user,
    ACTIONS(69), 3,
      sym__non_punctuated_word,
      sym__non_comment,
      sym__any_word,
    STATE(12), 3,
      sym__text,
      sym__word,
      aux_sym_message_repeat1,
  [291] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(71), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
    ACTIONS(73), 3,
      sym_commit,
      sym_item,
      sym_user,
    ACTIONS(76), 3,
      sym__non_punctuated_word,
      sym__non_comment,
      sym__any_word,
    STATE(12), 3,
      sym__text,
      sym__word,
      aux_sym_message_repeat1,
  [315] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    STATE(160), 1,
      sym_rebase_command,
    ACTIONS(41), 10,
      anon_sym_pick,
      anon_sym_edit,
      anon_sym_squash,
      anon_sym_merge,
      anon_sym_fixup,
      anon_sym_drop,
      anon_sym_reword,
      anon_sym_exec,
      anon_sym_label,
      anon_sym_reset,
  [334] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    STATE(14), 2,
      sym__word,
      aux_sym_trailer_value_repeat1,
    ACTIONS(79), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
    ACTIONS(81), 3,
      sym_commit,
      sym_item,
      sym_user,
    ACTIONS(84), 3,
      sym__non_punctuated_word,
      sym__non_comment,
      sym__any_word,
  [357] = 8,
    ACTIONS(11), 1,
      anon_sym_HG_COLON,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    STATE(71), 1,
      sym_comment,
    STATE(95), 1,
      sym_trailer,
    STATE(99), 1,
      sym__word,
    STATE(101), 1,
      sym_trailer_key,
    ACTIONS(57), 3,
      sym__non_punctuated_word,
      sym__non_comment,
      sym__any_word,
    ACTIONS(87), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [386] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    STATE(14), 2,
      sym__word,
      aux_sym_trailer_value_repeat1,
    ACTIONS(89), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
    ACTIONS(91), 3,
      sym_commit,
      sym_item,
      sym_user,
    ACTIONS(93), 3,
      sym__non_punctuated_word,
      sym__non_comment,
      sym__any_word,
  [409] = 5,
    ACTIONS(11), 1,
      anon_sym_HG_COLON,
    ACTIONS(95), 2,
      sym__non_punctuated_word,
      sym__non_comment,
    STATE(97), 2,
      sym_message,
      sym_comment,
    ACTIONS(51), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
    ACTIONS(53), 3,
      aux_sym_message_token1,
      sym_commit,
      sym_user,
  [431] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    STATE(76), 1,
      sym_trailer_value,
    STATE(16), 2,
      sym__word,
      aux_sym_trailer_value_repeat1,
    ACTIONS(97), 3,
      sym_commit,
      sym_item,
      sym_user,
    ACTIONS(99), 3,
      sym__non_punctuated_word,
      sym__non_comment,
      sym__any_word,
  [452] = 7,
    ACTIONS(13), 1,
      sym__newline,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 1,
      aux_sym_source_token1,
    STATE(42), 1,
      aux_sym_source_repeat3,
    STATE(28), 2,
      sym__trailer,
      aux_sym_source_repeat2,
    STATE(36), 2,
      sym__body_line,
      aux_sym_source_repeat1,
  [476] = 7,
    ACTIONS(13), 1,
      sym__newline,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    ACTIONS(107), 1,
      aux_sym_source_token1,
    STATE(59), 1,
      aux_sym_source_repeat3,
    STATE(26), 2,
      sym__trailer,
      aux_sym_source_repeat2,
    STATE(36), 2,
      sym__body_line,
      aux_sym_source_repeat1,
  [500] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    STATE(161), 1,
      sym_change,
    ACTIONS(109), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
    ACTIONS(111), 4,
      anon_sym_newfile,
      anon_sym_modified,
      anon_sym_renamed,
      anon_sym_deleted,
  [518] = 7,
    ACTIONS(13), 1,
      sym__newline,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 1,
      aux_sym_source_token1,
    STATE(42), 1,
      aux_sym_source_repeat3,
    STATE(20), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(28), 2,
      sym__trailer,
      aux_sym_source_repeat2,
  [542] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    STATE(23), 2,
      sym__word,
      aux_sym__comment_body_repeat1,
    ACTIONS(113), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
    ACTIONS(115), 3,
      sym__non_punctuated_word,
      sym__non_comment,
      sym__any_word,
  [560] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    STATE(23), 2,
      sym__word,
      aux_sym__comment_body_repeat1,
    ACTIONS(118), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
    ACTIONS(120), 3,
      sym__non_punctuated_word,
      sym__non_comment,
      sym__any_word,
  [578] = 6,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(122), 1,
      aux_sym_source_token1,
    ACTIONS(124), 1,
      aux_sym_path_token1,
    STATE(94), 1,
      aux_sym_path_repeat1,
    STATE(158), 1,
      sym_path,
    ACTIONS(109), 2,
      ts_builtin_sym_end,
      sym__newline,
  [598] = 6,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    ACTIONS(128), 1,
      aux_sym_source_token1,
    ACTIONS(130), 1,
      sym__newline,
    STATE(48), 1,
      aux_sym_source_repeat3,
    STATE(37), 2,
      sym__trailer,
      aux_sym_source_repeat2,
  [618] = 6,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(132), 1,
      sym__non_punctuated_word,
    STATE(95), 1,
      sym_trailer,
    STATE(99), 1,
      sym__word,
    STATE(101), 1,
      sym_trailer_key,
    ACTIONS(57), 2,
      sym__non_comment,
      sym__any_word,
  [638] = 6,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    ACTIONS(107), 1,
      aux_sym_source_token1,
    ACTIONS(130), 1,
      sym__newline,
    STATE(59), 1,
      aux_sym_source_repeat3,
    STATE(37), 2,
      sym__trailer,
      aux_sym_source_repeat2,
  [658] = 6,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 1,
      aux_sym_source_token1,
    ACTIONS(130), 1,
      sym__newline,
    STATE(42), 1,
      aux_sym_source_repeat3,
    STATE(37), 2,
      sym__trailer,
      aux_sym_source_repeat2,
  [678] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(136), 1,
      anon_sym_POUND,
    STATE(33), 1,
      aux_sym_summary_repeat1,
    ACTIONS(134), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [693] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(138), 1,
      anon_sym_POUND,
    STATE(32), 1,
      aux_sym_summary_repeat2,
    ACTIONS(134), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [708] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(142), 1,
      anon_sym_POUND,
    STATE(32), 1,
      aux_sym_summary_repeat2,
    ACTIONS(140), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [723] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(147), 1,
      anon_sym_POUND,
    STATE(33), 1,
      aux_sym_summary_repeat1,
    ACTIONS(145), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [738] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(152), 1,
      aux_sym_subject_token2,
    STATE(39), 1,
      aux_sym_subject_repeat1,
    ACTIONS(150), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [753] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    STATE(161), 1,
      sym_change,
    ACTIONS(111), 4,
      anon_sym_newfile,
      anon_sym_modified,
      anon_sym_renamed,
      anon_sym_deleted,
  [766] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(156), 1,
      sym__newline,
    ACTIONS(154), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
    STATE(36), 2,
      sym__body_line,
      aux_sym_source_repeat1,
  [781] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(161), 1,
      sym__newline,
    ACTIONS(159), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
    STATE(37), 2,
      sym__trailer,
      aux_sym_source_repeat2,
  [796] = 4,
    ACTIONS(11), 1,
      anon_sym_HG_COLON,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    STATE(71), 1,
      sym_comment,
    ACTIONS(87), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [811] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(166), 1,
      aux_sym_subject_token2,
    STATE(39), 1,
      aux_sym_subject_repeat1,
    ACTIONS(164), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [826] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(171), 1,
      aux_sym_subject_token2,
    STATE(34), 1,
      aux_sym_subject_repeat1,
    ACTIONS(169), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [841] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(175), 1,
      aux_sym_path_token1,
    STATE(62), 1,
      aux_sym_path_repeat1,
    ACTIONS(173), 2,
      anon_sym_DASH_GT,
      sym__newline,
  [855] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    ACTIONS(107), 1,
      aux_sym_source_token1,
    ACTIONS(177), 1,
      sym__newline,
    STATE(43), 1,
      aux_sym_source_repeat3,
  [871] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(181), 1,
      sym__newline,
    STATE(43), 1,
      aux_sym_source_repeat3,
    ACTIONS(179), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [885] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(186), 1,
      anon_sym_POUND,
    ACTIONS(184), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [897] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(188), 1,
      ts_builtin_sym_end,
    ACTIONS(190), 1,
      aux_sym__rest_token1,
    ACTIONS(193), 1,
      sym__newline,
    STATE(45), 1,
      aux_sym__rest,
  [913] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    ACTIONS(196), 1,
      aux_sym__rest_token1,
    ACTIONS(198), 1,
      sym__newline,
    STATE(63), 1,
      aux_sym__rest,
  [929] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    ACTIONS(196), 1,
      aux_sym__rest_token1,
    ACTIONS(198), 1,
      sym__newline,
    STATE(56), 1,
      aux_sym__rest,
  [945] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(177), 1,
      sym__newline,
    ACTIONS(200), 1,
      ts_builtin_sym_end,
    ACTIONS(202), 1,
      aux_sym_source_token1,
    STATE(43), 1,
      aux_sym_source_repeat3,
  [961] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(196), 1,
      aux_sym__rest_token1,
    ACTIONS(198), 1,
      sym__newline,
    ACTIONS(200), 1,
      ts_builtin_sym_end,
    STATE(51), 1,
      aux_sym__rest,
  [977] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(196), 1,
      aux_sym__rest_token1,
    ACTIONS(198), 1,
      sym__newline,
    ACTIONS(204), 1,
      ts_builtin_sym_end,
    STATE(45), 1,
      aux_sym__rest,
  [993] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(196), 1,
      aux_sym__rest_token1,
    ACTIONS(198), 1,
      sym__newline,
    ACTIONS(206), 1,
      ts_builtin_sym_end,
    STATE(45), 1,
      aux_sym__rest,
  [1009] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(210), 1,
      anon_sym_POUND,
    ACTIONS(208), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [1021] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(196), 1,
      aux_sym__rest_token1,
    ACTIONS(198), 1,
      sym__newline,
    ACTIONS(212), 1,
      ts_builtin_sym_end,
    STATE(64), 1,
      aux_sym__rest,
  [1037] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(216), 1,
      anon_sym_POUND,
    ACTIONS(214), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [1049] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(35), 1,
      anon_sym_Last,
    ACTIONS(37), 1,
      anon_sym_Next,
    ACTIONS(39), 1,
      anon_sym_No,
    STATE(139), 1,
      sym__rebase_header,
  [1065] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(196), 1,
      aux_sym__rest_token1,
    ACTIONS(198), 1,
      sym__newline,
    ACTIONS(218), 1,
      ts_builtin_sym_end,
    STATE(45), 1,
      aux_sym__rest,
  [1081] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    ACTIONS(196), 1,
      aux_sym__rest_token1,
    ACTIONS(198), 1,
      sym__newline,
    STATE(50), 1,
      aux_sym__rest,
  [1097] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(222), 1,
      anon_sym_POUND,
    ACTIONS(220), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [1109] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    ACTIONS(128), 1,
      aux_sym_source_token1,
    ACTIONS(177), 1,
      sym__newline,
    STATE(43), 1,
      aux_sym_source_repeat3,
  [1125] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(224), 4,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      anon_sym_POUND,
      sym__newline,
  [1135] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(226), 4,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      anon_sym_POUND,
      sym__newline,
  [1145] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(230), 1,
      aux_sym_path_token1,
    STATE(62), 1,
      aux_sym_path_repeat1,
    ACTIONS(228), 2,
      anon_sym_DASH_GT,
      sym__newline,
  [1159] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(196), 1,
      aux_sym__rest_token1,
    ACTIONS(198), 1,
      sym__newline,
    ACTIONS(233), 1,
      ts_builtin_sym_end,
    STATE(45), 1,
      aux_sym__rest,
  [1175] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(196), 1,
      aux_sym__rest_token1,
    ACTIONS(198), 1,
      sym__newline,
    ACTIONS(235), 1,
      ts_builtin_sym_end,
    STATE(45), 1,
      aux_sym__rest,
  [1191] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 1,
      aux_sym_source_token1,
    ACTIONS(177), 1,
      sym__newline,
    STATE(43), 1,
      aux_sym_source_repeat3,
  [1207] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(237), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [1216] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(239), 1,
      aux_sym_path_token1,
    STATE(41), 1,
      aux_sym_path_repeat1,
    STATE(112), 1,
      sym_path,
  [1229] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(241), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(243), 1,
      anon_sym_rebasing,
    STATE(79), 1,
      aux_sym__rebase_summary_repeat2,
  [1242] = 3,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(247), 1,
      aux_sym__rest_token1,
    ACTIONS(245), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1253] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(228), 1,
      sym__newline,
    ACTIONS(249), 1,
      aux_sym_path_token1,
    STATE(70), 1,
      aux_sym_path_repeat1,
  [1266] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(179), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [1275] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(252), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [1284] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(124), 1,
      aux_sym_path_token1,
    STATE(94), 1,
      aux_sym_path_repeat1,
    STATE(158), 1,
      sym_path,
  [1297] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(254), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [1306] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(256), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(259), 1,
      anon_sym_rebasing,
    STATE(75), 1,
      aux_sym__rebase_summary_repeat2,
  [1319] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(261), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [1328] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(220), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [1337] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(263), 1,
      anon_sym_up,
    ACTIONS(265), 1,
      anon_sym_ahead,
    ACTIONS(267), 1,
      anon_sym_behind,
  [1350] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(269), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(271), 1,
      anon_sym_rebasing,
    STATE(75), 1,
      aux_sym__rebase_summary_repeat2,
  [1363] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(271), 1,
      anon_sym_rebasing,
    ACTIONS(273), 1,
      aux_sym__rebase_summary_token1,
    STATE(82), 1,
      aux_sym__rebase_summary_repeat2,
  [1376] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(214), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [1385] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(269), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(275), 1,
      anon_sym_rebasing,
    STATE(75), 1,
      aux_sym__rebase_summary_repeat2,
  [1398] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(277), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(280), 1,
      sym__newline,
    STATE(83), 1,
      aux_sym__rebase_summary_repeat2,
  [1411] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(282), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [1420] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(284), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [1429] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(286), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(288), 1,
      sym__newline,
    STATE(83), 1,
      aux_sym__rebase_summary_repeat2,
  [1442] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(290), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [1451] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(292), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [1460] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(275), 1,
      anon_sym_rebasing,
    ACTIONS(294), 1,
      aux_sym__rebase_summary_token1,
    STATE(91), 1,
      aux_sym__rebase_summary_repeat2,
  [1473] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(296), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [1482] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(269), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(298), 1,
      anon_sym_rebasing,
    STATE(75), 1,
      aux_sym__rebase_summary_repeat2,
  [1495] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(208), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [1504] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(300), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [1513] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(173), 1,
      sym__newline,
    ACTIONS(302), 1,
      aux_sym_path_token1,
    STATE(70), 1,
      aux_sym_path_repeat1,
  [1526] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(304), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [1535] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(124), 1,
      aux_sym_path_token1,
    STATE(94), 1,
      aux_sym_path_repeat1,
    STATE(130), 1,
      sym_path,
  [1548] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(237), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [1557] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(306), 1,
      anon_sym_POUND,
    STATE(30), 1,
      aux_sym_summary_repeat1,
  [1567] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(308), 2,
      anon_sym_COLON,
      anon_sym_EQ,
  [1575] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(310), 1,
      anon_sym_POUND,
    STATE(105), 1,
      aux_sym__rebase_summary_repeat1,
  [1585] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(312), 2,
      anon_sym_COLON,
      anon_sym_EQ,
  [1593] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(314), 2,
      sym_commit,
      sym_branch,
  [1601] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(316), 1,
      anon_sym_POUND,
    STATE(100), 1,
      aux_sym__rebase_summary_repeat1,
  [1611] = 3,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(318), 1,
      aux_sym__rebase_summary_token1,
    STATE(86), 1,
      aux_sym__rebase_summary_repeat2,
  [1621] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(320), 1,
      anon_sym_POUND,
    STATE(105), 1,
      aux_sym__rebase_summary_repeat1,
  [1631] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(323), 1,
      anon_sym_POUND,
    STATE(108), 1,
      aux_sym__rebase_summary_repeat1,
  [1641] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(325), 1,
      anon_sym_is,
    ACTIONS(327), 1,
      anon_sym_and,
  [1651] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(329), 1,
      anon_sym_POUND,
    STATE(105), 1,
      aux_sym__rebase_summary_repeat1,
  [1661] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(331), 1,
      anon_sym_POUND,
    STATE(31), 1,
      aux_sym_summary_repeat2,
  [1671] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(333), 1,
      anon_sym_POUND,
    STATE(105), 1,
      aux_sym__rebase_summary_repeat1,
  [1681] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(335), 1,
      anon_sym_to,
    ACTIONS(337), 1,
      anon_sym_not,
  [1691] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(339), 1,
      anon_sym_DASH_GT,
    ACTIONS(341), 1,
      sym__newline,
  [1701] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(329), 1,
      anon_sym_POUND,
    STATE(110), 1,
      aux_sym__rebase_summary_repeat1,
  [1711] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(343), 1,
      anon_sym_diverged,
  [1718] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(345), 1,
      anon_sym_COLON,
  [1725] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(347), 1,
      sym__newline,
  [1732] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(349), 1,
      anon_sym_with,
  [1739] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(351), 1,
      sym_branch,
  [1746] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(353), 1,
      anon_sym_SQUOTE,
  [1753] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(355), 1,
      anon_sym_have,
  [1760] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(357), 1,
      sym__newline,
  [1767] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
  [1774] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(361), 1,
      anon_sym_SQUOTE,
  [1781] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(363), 1,
      anon_sym_by,
  [1788] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(365), 1,
      anon_sym_POUND,
  [1795] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(367), 1,
      sym_branch,
  [1802] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(369), 1,
      anon_sym_by,
  [1809] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(371), 1,
      aux_sym__rebase_header_token2,
  [1816] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(373), 1,
      anon_sym_COMMA,
  [1823] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(375), 1,
      sym__newline,
  [1830] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(377), 1,
      ts_builtin_sym_end,
  [1837] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(379), 1,
      anon_sym_SQUOTE_DOT,
  [1844] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(381), 1,
      aux_sym__rebase_header_token2,
  [1851] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(383), 1,
      aux_sym__branch_declaration_token1,
  [1858] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(385), 1,
      anon_sym_SQUOTE,
  [1865] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(387), 1,
      aux_sym__rebase_header_token1,
  [1872] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(389), 1,
      aux_sym__rebase_header_token1,
  [1879] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(391), 1,
      anon_sym_commands,
  [1886] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(393), 1,
      sym__newline,
  [1893] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(395), 1,
      sym_branch,
  [1900] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(397), 1,
      aux_sym__branch_declaration_token1,
  [1907] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(399), 1,
      anon_sym_DOT,
  [1914] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(401), 1,
      anon_sym_done,
  [1921] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(403), 1,
      anon_sym_to,
  [1928] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(405), 1,
      anon_sym_remaining,
  [1935] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(407), 1,
      anon_sym_SQUOTE,
  [1942] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(409), 1,
      anon_sym_DOT,
  [1949] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(411), 1,
      anon_sym_date,
  [1956] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(413), 1,
      anon_sym_LPAREN,
  [1963] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(415), 1,
      anon_sym_do,
  [1970] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(417), 1,
      anon_sym_DOT,
  [1977] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(419), 1,
      anon_sym_COLON,
  [1984] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(421), 1,
      sym__newline,
  [1991] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(423), 1,
      anon_sym_onto,
  [1998] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(425), 1,
      aux_sym__rebase_header_token2,
  [2005] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(427), 1,
      anon_sym_LPAREN,
  [2012] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(429), 1,
      sym__newline,
  [2019] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(431), 1,
      sym__newline,
  [2026] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(433), 1,
      sym__newline,
  [2033] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(435), 1,
      sym__newline,
  [2040] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(437), 1,
      sym__newline,
  [2047] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(439), 1,
      anon_sym_COLON,
  [2054] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(441), 1,
      aux_sym__rebase_header_token1,
  [2061] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(443), 1,
      aux_sym__rebase_header_token2,
  [2068] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(445), 1,
      sym_branch,
  [2075] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(447), 1,
      anon_sym_SQUOTE,
  [2082] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(449), 1,
      anon_sym_POUND,
  [2089] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(451), 1,
      sym__newline,
  [2096] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(453), 1,
      anon_sym_of,
  [2103] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(455), 1,
      anon_sym_done,
  [2110] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(457), 1,
      anon_sym_remaining,
  [2117] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(459), 1,
      anon_sym_to,
  [2124] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(461), 1,
      anon_sym_commit,
  [2131] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(463), 1,
      anon_sym_COLON,
  [2138] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(465), 1,
      anon_sym_SEMI,
  [2145] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(467), 1,
      anon_sym_RPAREN,
  [2152] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(469), 1,
      aux_sym__rebase_header_token1,
  [2159] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(471), 1,
      anon_sym_are,
  [2166] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(473), 1,
      sym__newline,
  [2173] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(475), 1,
      anon_sym_SQUOTE,
  [2180] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(477), 1,
      sym_commit,
  [2187] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(479), 1,
      anon_sym_RPAREN,
  [2194] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(481), 1,
      anon_sym_currently,
  [2201] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(483), 1,
      anon_sym_are,
  [2208] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(485), 1,
      anon_sym_for,
  [2215] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(487), 1,
      sym__newline,
  [2222] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(489), 1,
      anon_sym_COLON,
  [2229] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(491), 1,
      anon_sym_committed,
  [2236] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(493), 1,
      anon_sym_currently,
  [2243] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(495), 1,
      anon_sym_are,
  [2250] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(497), 1,
      sym__newline,
  [2257] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(499), 1,
      anon_sym_branch,
  [2264] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(501), 1,
      anon_sym_progress,
  [2271] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(503), 1,
      anon_sym_COLON,
  [2278] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(505), 1,
      anon_sym_currently,
  [2285] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(507), 1,
      anon_sym_SQUOTE,
  [2292] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(509), 1,
      anon_sym_branch,
  [2299] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(511), 1,
      sym__newline,
  [2306] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(513), 1,
      anon_sym_at,
  [2313] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(515), 1,
      sym_branch,
  [2320] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(517), 1,
      anon_sym_SQUOTE,
  [2327] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(519), 1,
      anon_sym_branch,
  [2334] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(521), 1,
      sym_branch,
  [2341] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(523), 1,
      anon_sym_SQUOTE,
  [2348] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(525), 1,
      sym_branch,
  [2355] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
  [2362] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(529), 1,
      anon_sym_branch,
  [2369] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(531), 1,
      anon_sym_on,
  [2376] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(533), 1,
      anon_sym_SQUOTE,
  [2383] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(535), 1,
      sym_branch,
  [2390] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(537), 1,
      anon_sym_SQUOTE,
  [2397] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(539), 1,
      anon_sym_SQUOTE,
  [2404] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(541), 1,
      anon_sym_on,
  [2411] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(543), 1,
      anon_sym_SQUOTE,
  [2418] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(545), 1,
      sym_branch,
  [2425] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(547), 1,
      sym_commit,
  [2432] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(549), 1,
      anon_sym_SQUOTE,
  [2439] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(551), 1,
      anon_sym_on,
  [2446] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(553), 1,
      anon_sym_SQUOTE,
  [2453] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(555), 1,
      anon_sym_SQUOTE,
  [2460] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(557), 1,
      sym_commit,
  [2467] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(559), 1,
      anon_sym_SQUOTE,
  [2474] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(561), 1,
      anon_sym_on,
  [2481] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(563), 1,
      anon_sym_DOT,
  [2488] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(565), 1,
      anon_sym_SQUOTE,
  [2495] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(567), 1,
      sym_commit,
  [2502] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(569), 1,
      anon_sym_SQUOTE,
  [2509] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(571), 1,
      sym__newline,
  [2516] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(573), 1,
      anon_sym_DOT,
  [2523] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(575), 1,
      anon_sym_SQUOTE,
  [2530] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(577), 1,
      sym_commit,
  [2537] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(579), 1,
      anon_sym_staged,
  [2544] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(581), 1,
      sym__newline,
  [2551] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(583), 1,
      anon_sym_DOT,
  [2558] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(585), 1,
      anon_sym_SQUOTE,
  [2565] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(587), 1,
      anon_sym_be,
  [2572] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(589), 1,
      anon_sym_in,
  [2579] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(591), 1,
      sym__newline,
  [2586] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(593), 1,
      anon_sym_DOT,
  [2593] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(595), 1,
      sym__newline,
  [2600] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(597), 1,
      sym__newline,
  [2607] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(599), 1,
      sym__newline,
  [2614] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(601), 1,
      anon_sym_files,
  [2621] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(603), 1,
      anon_sym_COLON,
  [2628] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(605), 1,
      anon_sym_detached,
  [2635] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(607), 1,
      anon_sym_branch,
  [2642] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(609), 1,
      anon_sym_branch,
  [2649] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(611), 1,
      anon_sym_rebase,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 51,
  [SMALL_STATE(4)] = 82,
  [SMALL_STATE(5)] = 113,
  [SMALL_STATE(6)] = 141,
  [SMALL_STATE(7)] = 177,
  [SMALL_STATE(8)] = 199,
  [SMALL_STATE(9)] = 221,
  [SMALL_STATE(10)] = 245,
  [SMALL_STATE(11)] = 267,
  [SMALL_STATE(12)] = 291,
  [SMALL_STATE(13)] = 315,
  [SMALL_STATE(14)] = 334,
  [SMALL_STATE(15)] = 357,
  [SMALL_STATE(16)] = 386,
  [SMALL_STATE(17)] = 409,
  [SMALL_STATE(18)] = 431,
  [SMALL_STATE(19)] = 452,
  [SMALL_STATE(20)] = 476,
  [SMALL_STATE(21)] = 500,
  [SMALL_STATE(22)] = 518,
  [SMALL_STATE(23)] = 542,
  [SMALL_STATE(24)] = 560,
  [SMALL_STATE(25)] = 578,
  [SMALL_STATE(26)] = 598,
  [SMALL_STATE(27)] = 618,
  [SMALL_STATE(28)] = 638,
  [SMALL_STATE(29)] = 658,
  [SMALL_STATE(30)] = 678,
  [SMALL_STATE(31)] = 693,
  [SMALL_STATE(32)] = 708,
  [SMALL_STATE(33)] = 723,
  [SMALL_STATE(34)] = 738,
  [SMALL_STATE(35)] = 753,
  [SMALL_STATE(36)] = 766,
  [SMALL_STATE(37)] = 781,
  [SMALL_STATE(38)] = 796,
  [SMALL_STATE(39)] = 811,
  [SMALL_STATE(40)] = 826,
  [SMALL_STATE(41)] = 841,
  [SMALL_STATE(42)] = 855,
  [SMALL_STATE(43)] = 871,
  [SMALL_STATE(44)] = 885,
  [SMALL_STATE(45)] = 897,
  [SMALL_STATE(46)] = 913,
  [SMALL_STATE(47)] = 929,
  [SMALL_STATE(48)] = 945,
  [SMALL_STATE(49)] = 961,
  [SMALL_STATE(50)] = 977,
  [SMALL_STATE(51)] = 993,
  [SMALL_STATE(52)] = 1009,
  [SMALL_STATE(53)] = 1021,
  [SMALL_STATE(54)] = 1037,
  [SMALL_STATE(55)] = 1049,
  [SMALL_STATE(56)] = 1065,
  [SMALL_STATE(57)] = 1081,
  [SMALL_STATE(58)] = 1097,
  [SMALL_STATE(59)] = 1109,
  [SMALL_STATE(60)] = 1125,
  [SMALL_STATE(61)] = 1135,
  [SMALL_STATE(62)] = 1145,
  [SMALL_STATE(63)] = 1159,
  [SMALL_STATE(64)] = 1175,
  [SMALL_STATE(65)] = 1191,
  [SMALL_STATE(66)] = 1207,
  [SMALL_STATE(67)] = 1216,
  [SMALL_STATE(68)] = 1229,
  [SMALL_STATE(69)] = 1242,
  [SMALL_STATE(70)] = 1253,
  [SMALL_STATE(71)] = 1266,
  [SMALL_STATE(72)] = 1275,
  [SMALL_STATE(73)] = 1284,
  [SMALL_STATE(74)] = 1297,
  [SMALL_STATE(75)] = 1306,
  [SMALL_STATE(76)] = 1319,
  [SMALL_STATE(77)] = 1328,
  [SMALL_STATE(78)] = 1337,
  [SMALL_STATE(79)] = 1350,
  [SMALL_STATE(80)] = 1363,
  [SMALL_STATE(81)] = 1376,
  [SMALL_STATE(82)] = 1385,
  [SMALL_STATE(83)] = 1398,
  [SMALL_STATE(84)] = 1411,
  [SMALL_STATE(85)] = 1420,
  [SMALL_STATE(86)] = 1429,
  [SMALL_STATE(87)] = 1442,
  [SMALL_STATE(88)] = 1451,
  [SMALL_STATE(89)] = 1460,
  [SMALL_STATE(90)] = 1473,
  [SMALL_STATE(91)] = 1482,
  [SMALL_STATE(92)] = 1495,
  [SMALL_STATE(93)] = 1504,
  [SMALL_STATE(94)] = 1513,
  [SMALL_STATE(95)] = 1526,
  [SMALL_STATE(96)] = 1535,
  [SMALL_STATE(97)] = 1548,
  [SMALL_STATE(98)] = 1557,
  [SMALL_STATE(99)] = 1567,
  [SMALL_STATE(100)] = 1575,
  [SMALL_STATE(101)] = 1585,
  [SMALL_STATE(102)] = 1593,
  [SMALL_STATE(103)] = 1601,
  [SMALL_STATE(104)] = 1611,
  [SMALL_STATE(105)] = 1621,
  [SMALL_STATE(106)] = 1631,
  [SMALL_STATE(107)] = 1641,
  [SMALL_STATE(108)] = 1651,
  [SMALL_STATE(109)] = 1661,
  [SMALL_STATE(110)] = 1671,
  [SMALL_STATE(111)] = 1681,
  [SMALL_STATE(112)] = 1691,
  [SMALL_STATE(113)] = 1701,
  [SMALL_STATE(114)] = 1711,
  [SMALL_STATE(115)] = 1718,
  [SMALL_STATE(116)] = 1725,
  [SMALL_STATE(117)] = 1732,
  [SMALL_STATE(118)] = 1739,
  [SMALL_STATE(119)] = 1746,
  [SMALL_STATE(120)] = 1753,
  [SMALL_STATE(121)] = 1760,
  [SMALL_STATE(122)] = 1767,
  [SMALL_STATE(123)] = 1774,
  [SMALL_STATE(124)] = 1781,
  [SMALL_STATE(125)] = 1788,
  [SMALL_STATE(126)] = 1795,
  [SMALL_STATE(127)] = 1802,
  [SMALL_STATE(128)] = 1809,
  [SMALL_STATE(129)] = 1816,
  [SMALL_STATE(130)] = 1823,
  [SMALL_STATE(131)] = 1830,
  [SMALL_STATE(132)] = 1837,
  [SMALL_STATE(133)] = 1844,
  [SMALL_STATE(134)] = 1851,
  [SMALL_STATE(135)] = 1858,
  [SMALL_STATE(136)] = 1865,
  [SMALL_STATE(137)] = 1872,
  [SMALL_STATE(138)] = 1879,
  [SMALL_STATE(139)] = 1886,
  [SMALL_STATE(140)] = 1893,
  [SMALL_STATE(141)] = 1900,
  [SMALL_STATE(142)] = 1907,
  [SMALL_STATE(143)] = 1914,
  [SMALL_STATE(144)] = 1921,
  [SMALL_STATE(145)] = 1928,
  [SMALL_STATE(146)] = 1935,
  [SMALL_STATE(147)] = 1942,
  [SMALL_STATE(148)] = 1949,
  [SMALL_STATE(149)] = 1956,
  [SMALL_STATE(150)] = 1963,
  [SMALL_STATE(151)] = 1970,
  [SMALL_STATE(152)] = 1977,
  [SMALL_STATE(153)] = 1984,
  [SMALL_STATE(154)] = 1991,
  [SMALL_STATE(155)] = 1998,
  [SMALL_STATE(156)] = 2005,
  [SMALL_STATE(157)] = 2012,
  [SMALL_STATE(158)] = 2019,
  [SMALL_STATE(159)] = 2026,
  [SMALL_STATE(160)] = 2033,
  [SMALL_STATE(161)] = 2040,
  [SMALL_STATE(162)] = 2047,
  [SMALL_STATE(163)] = 2054,
  [SMALL_STATE(164)] = 2061,
  [SMALL_STATE(165)] = 2068,
  [SMALL_STATE(166)] = 2075,
  [SMALL_STATE(167)] = 2082,
  [SMALL_STATE(168)] = 2089,
  [SMALL_STATE(169)] = 2096,
  [SMALL_STATE(170)] = 2103,
  [SMALL_STATE(171)] = 2110,
  [SMALL_STATE(172)] = 2117,
  [SMALL_STATE(173)] = 2124,
  [SMALL_STATE(174)] = 2131,
  [SMALL_STATE(175)] = 2138,
  [SMALL_STATE(176)] = 2145,
  [SMALL_STATE(177)] = 2152,
  [SMALL_STATE(178)] = 2159,
  [SMALL_STATE(179)] = 2166,
  [SMALL_STATE(180)] = 2173,
  [SMALL_STATE(181)] = 2180,
  [SMALL_STATE(182)] = 2187,
  [SMALL_STATE(183)] = 2194,
  [SMALL_STATE(184)] = 2201,
  [SMALL_STATE(185)] = 2208,
  [SMALL_STATE(186)] = 2215,
  [SMALL_STATE(187)] = 2222,
  [SMALL_STATE(188)] = 2229,
  [SMALL_STATE(189)] = 2236,
  [SMALL_STATE(190)] = 2243,
  [SMALL_STATE(191)] = 2250,
  [SMALL_STATE(192)] = 2257,
  [SMALL_STATE(193)] = 2264,
  [SMALL_STATE(194)] = 2271,
  [SMALL_STATE(195)] = 2278,
  [SMALL_STATE(196)] = 2285,
  [SMALL_STATE(197)] = 2292,
  [SMALL_STATE(198)] = 2299,
  [SMALL_STATE(199)] = 2306,
  [SMALL_STATE(200)] = 2313,
  [SMALL_STATE(201)] = 2320,
  [SMALL_STATE(202)] = 2327,
  [SMALL_STATE(203)] = 2334,
  [SMALL_STATE(204)] = 2341,
  [SMALL_STATE(205)] = 2348,
  [SMALL_STATE(206)] = 2355,
  [SMALL_STATE(207)] = 2362,
  [SMALL_STATE(208)] = 2369,
  [SMALL_STATE(209)] = 2376,
  [SMALL_STATE(210)] = 2383,
  [SMALL_STATE(211)] = 2390,
  [SMALL_STATE(212)] = 2397,
  [SMALL_STATE(213)] = 2404,
  [SMALL_STATE(214)] = 2411,
  [SMALL_STATE(215)] = 2418,
  [SMALL_STATE(216)] = 2425,
  [SMALL_STATE(217)] = 2432,
  [SMALL_STATE(218)] = 2439,
  [SMALL_STATE(219)] = 2446,
  [SMALL_STATE(220)] = 2453,
  [SMALL_STATE(221)] = 2460,
  [SMALL_STATE(222)] = 2467,
  [SMALL_STATE(223)] = 2474,
  [SMALL_STATE(224)] = 2481,
  [SMALL_STATE(225)] = 2488,
  [SMALL_STATE(226)] = 2495,
  [SMALL_STATE(227)] = 2502,
  [SMALL_STATE(228)] = 2509,
  [SMALL_STATE(229)] = 2516,
  [SMALL_STATE(230)] = 2523,
  [SMALL_STATE(231)] = 2530,
  [SMALL_STATE(232)] = 2537,
  [SMALL_STATE(233)] = 2544,
  [SMALL_STATE(234)] = 2551,
  [SMALL_STATE(235)] = 2558,
  [SMALL_STATE(236)] = 2565,
  [SMALL_STATE(237)] = 2572,
  [SMALL_STATE(238)] = 2579,
  [SMALL_STATE(239)] = 2586,
  [SMALL_STATE(240)] = 2593,
  [SMALL_STATE(241)] = 2600,
  [SMALL_STATE(242)] = 2607,
  [SMALL_STATE(243)] = 2614,
  [SMALL_STATE(244)] = 2621,
  [SMALL_STATE(245)] = 2628,
  [SMALL_STATE(246)] = 2635,
  [SMALL_STATE(247)] = 2642,
  [SMALL_STATE(248)] = 2649,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__word, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__body_line, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_repeat1, 2),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_repeat1, 2), SHIFT_REPEAT(12),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_repeat1, 2), SHIFT_REPEAT(12),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_trailer_value_repeat1, 2),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trailer_value_repeat1, 2), SHIFT_REPEAT(14),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trailer_value_repeat1, 2), SHIFT_REPEAT(14),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat3, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trailer_value, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_summary, 4),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__comment_body_repeat1, 2),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_body_repeat1, 2), SHIFT_REPEAT(23),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_body, 1),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_summary, 4),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_summary, 3),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_summary_repeat2, 2),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_summary_repeat2, 2), SHIFT_REPEAT(73),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_summary_repeat1, 2),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_summary_repeat1, 2), SHIFT_REPEAT(35),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 2),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(17),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat2, 2),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(27),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_subject_repeat1, 2),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_subject_repeat1, 2), SHIFT_REPEAT(39),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 1),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat3, 2),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat3, 2), SHIFT_REPEAT(38),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_summary, 29),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__rest, 2),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__rest, 2), SHIFT_REPEAT(69),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__rest, 2), SHIFT_REPEAT(69),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 4),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 4, .production_id = 4),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 5, .production_id = 5),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_summary, 30),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 5),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_summary, 31),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 3, .production_id = 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_summary, 32),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_summary_repeat1, 3),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_summary_repeat2, 3),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(62),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2, .production_id = 1),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 6, .production_id = 6),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__body_line, 2),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__rest, 1),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__rest, 1),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(70),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_summary, 33),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 3),
  [256] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__rebase_summary_repeat2, 2), SHIFT_REPEAT(75),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__rebase_summary_repeat2, 2),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trailer, 3, .production_id = 3),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [277] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__rebase_summary_repeat2, 2), SHIFT_REPEAT(83),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__rebase_summary_repeat2, 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 9),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rebase_command, 2),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 10),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 4),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 11),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 12),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trailer, 2),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trailer_key, 1),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__rebase_summary_repeat1, 2), SHIFT_REPEAT(13),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change, 3, .production_id = 7),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__change_header, 6),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change, 5, .production_id = 7),
  [377] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__change_header, 5),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_header, 4),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__rebase_summary_repeat1, 3),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_header, 9),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_header, 10),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
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
