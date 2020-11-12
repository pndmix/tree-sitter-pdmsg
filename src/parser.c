#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 73
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 60
#define ALIAS_COUNT 0
#define TOKEN_COUNT 40
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6

enum {
  sym_identifier = 1,
  anon_sym_DOT = 2,
  anon_sym_send = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  aux_sym_port_token1 = 6,
  sym_host = 7,
  anon_sym_msg = 8,
  anon_sym_AMP_AMP = 9,
  anon_sym_PIPE_PIPE = 10,
  anon_sym_STAR = 11,
  anon_sym_SLASH = 12,
  anon_sym_PERCENT = 13,
  anon_sym_PLUS = 14,
  anon_sym_DASH = 15,
  anon_sym_LT_LT = 16,
  anon_sym_GT_GT = 17,
  anon_sym_AMP = 18,
  anon_sym_CARET = 19,
  anon_sym_PIPE = 20,
  anon_sym_LT = 21,
  anon_sym_LT_EQ = 22,
  anon_sym_EQ_EQ = 23,
  anon_sym_BANG_EQ = 24,
  anon_sym_GT_EQ = 25,
  anon_sym_GT = 26,
  anon_sym_TILDE = 27,
  anon_sym_BANG = 28,
  aux_sym_number_token1 = 29,
  anon_sym_e = 30,
  anon_sym_E = 31,
  aux_sym_function_token1 = 32,
  aux_sym_function_token2 = 33,
  aux_sym_function_token3 = 34,
  sym__delimiter = 35,
  anon_sym_bang = 36,
  anon_sym_connect = 37,
  anon_sym_SLASH_SLASH = 38,
  aux_sym_comment_token1 = 39,
  sym_program = 40,
  sym_send_statement = 41,
  sym_send_block = 42,
  sym_port = 43,
  sym_message_block = 44,
  sym_expression = 45,
  sym_parenthesized = 46,
  sym_boolean_operator = 47,
  sym_binary_operator = 48,
  sym_comparison_operator = 49,
  sym_unary_operator = 50,
  sym_number = 51,
  sym_function = 52,
  sym_arguments = 53,
  sym_keyword_identifier = 54,
  sym_comment = 55,
  aux_sym_program_repeat1 = 56,
  aux_sym_send_statement_repeat1 = 57,
  aux_sym_message_block_repeat1 = 58,
  aux_sym_arguments_repeat1 = 59,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_DOT] = ".",
  [anon_sym_send] = "keyword_identifier",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym_port_token1] = "port_token1",
  [sym_host] = "host",
  [anon_sym_msg] = "keyword_identifier",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_AMP] = "&",
  [anon_sym_CARET] = "^",
  [anon_sym_PIPE] = "|",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_GT] = ">",
  [anon_sym_TILDE] = "~",
  [anon_sym_BANG] = "!",
  [aux_sym_number_token1] = "number_token1",
  [anon_sym_e] = "e",
  [anon_sym_E] = "E",
  [aux_sym_function_token1] = "name",
  [aux_sym_function_token2] = "name",
  [aux_sym_function_token3] = "name",
  [sym__delimiter] = "_delimiter",
  [anon_sym_bang] = "bang",
  [anon_sym_connect] = "connect",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_program] = "program",
  [sym_send_statement] = "send_statement",
  [sym_send_block] = "send_block",
  [sym_port] = "port",
  [sym_message_block] = "message_block",
  [sym_expression] = "expression",
  [sym_parenthesized] = "parenthesized",
  [sym_boolean_operator] = "boolean_operator",
  [sym_binary_operator] = "binary_operator",
  [sym_comparison_operator] = "comparison_operator",
  [sym_unary_operator] = "unary_operator",
  [sym_number] = "number",
  [sym_function] = "function",
  [sym_arguments] = "arguments",
  [sym_keyword_identifier] = "keyword_identifier",
  [sym_comment] = "comment",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_send_statement_repeat1] = "send_statement_repeat1",
  [aux_sym_message_block_repeat1] = "message_block_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_send] = sym_keyword_identifier,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_port_token1] = aux_sym_port_token1,
  [sym_host] = sym_host,
  [anon_sym_msg] = sym_keyword_identifier,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_BANG] = anon_sym_BANG,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [anon_sym_e] = anon_sym_e,
  [anon_sym_E] = anon_sym_E,
  [aux_sym_function_token1] = aux_sym_function_token1,
  [aux_sym_function_token2] = aux_sym_function_token1,
  [aux_sym_function_token3] = aux_sym_function_token1,
  [sym__delimiter] = sym__delimiter,
  [anon_sym_bang] = anon_sym_bang,
  [anon_sym_connect] = anon_sym_connect,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_program] = sym_program,
  [sym_send_statement] = sym_send_statement,
  [sym_send_block] = sym_send_block,
  [sym_port] = sym_port,
  [sym_message_block] = sym_message_block,
  [sym_expression] = sym_expression,
  [sym_parenthesized] = sym_parenthesized,
  [sym_boolean_operator] = sym_boolean_operator,
  [sym_binary_operator] = sym_binary_operator,
  [sym_comparison_operator] = sym_comparison_operator,
  [sym_unary_operator] = sym_unary_operator,
  [sym_number] = sym_number,
  [sym_function] = sym_function,
  [sym_arguments] = sym_arguments,
  [sym_keyword_identifier] = sym_keyword_identifier,
  [sym_comment] = sym_comment,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_send_statement_repeat1] = aux_sym_send_statement_repeat1,
  [aux_sym_message_block_repeat1] = aux_sym_message_block_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_send] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_port_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_host] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_msg] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_number_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_e] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_E] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_function_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_function_token2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_function_token3] = {
    .visible = true,
    .named = true,
  },
  [sym__delimiter] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_bang] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_connect] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_send_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_send_block] = {
    .visible = true,
    .named = true,
  },
  [sym_port] = {
    .visible = true,
    .named = true,
  },
  [sym_message_block] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_comparison_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_send_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_message_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(9);
      if (lookahead == '!') ADVANCE(38);
      if (lookahead == '%') ADVANCE(22);
      if (lookahead == '&') ADVANCE(27);
      if (lookahead == '(') ADVANCE(12);
      if (lookahead == ')') ADVANCE(13);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '+') ADVANCE(23);
      if (lookahead == ',') ADVANCE(40);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '0') ADVANCE(15);
      if (lookahead == '<') ADVANCE(30);
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == '>') ADVANCE(35);
      if (lookahead == '^') ADVANCE(28);
      if (lookahead == '|') ADVANCE(29);
      if (lookahead == '~') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(37);
      if (lookahead == '(') ADVANCE(12);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '0') ADVANCE(15);
      if (lookahead == '~') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '%') ADVANCE(22);
      if (lookahead == '&') ADVANCE(27);
      if (lookahead == '(') ADVANCE(12);
      if (lookahead == ')') ADVANCE(13);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '+') ADVANCE(23);
      if (lookahead == ',') ADVANCE(40);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '0') ADVANCE(15);
      if (lookahead == '<') ADVANCE(30);
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == '>') ADVANCE(35);
      if (lookahead == '^') ADVANCE(28);
      if (lookahead == '|') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(42);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(33);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(32);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 8:
      if (eof) ADVANCE(9);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_port_token1);
      if (lookahead == '.') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_port_token1);
      if (lookahead == '.') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_host);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(42);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(18);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(19);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(25);
      if (lookahead == '=') ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(34);
      if (lookahead == '>') ADVANCE(26);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(33);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__delimiter);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'E') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(2);
      if (lookahead == 'b') ADVANCE(3);
      if (lookahead == 'c') ADVANCE(4);
      if (lookahead == 'e') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(6);
      if (lookahead == 'i') ADVANCE(7);
      if (lookahead == 'l') ADVANCE(8);
      if (lookahead == 'm') ADVANCE(9);
      if (lookahead == 'p') ADVANCE(10);
      if (lookahead == 'r') ADVANCE(11);
      if (lookahead == 's') ADVANCE(12);
      if (lookahead == 't') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      ACCEPT_TOKEN(anon_sym_E);
      END_STATE();
    case 2:
      if (lookahead == 'b') ADVANCE(14);
      if (lookahead == 'c') ADVANCE(15);
      if (lookahead == 's') ADVANCE(16);
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 4:
      if (lookahead == 'b') ADVANCE(19);
      if (lookahead == 'e') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_e);
      if (lookahead == 'x') ADVANCE(22);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(23);
      if (lookahead == 'l') ADVANCE(24);
      if (lookahead == 'm') ADVANCE(25);
      END_STATE();
    case 7:
      if (lookahead == 'f') ADVANCE(26);
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 8:
      if (lookahead == 'd') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(29);
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(31);
      if (lookahead == 'i') ADVANCE(32);
      if (lookahead == 's') ADVANCE(33);
      END_STATE();
    case 10:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 11:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(37);
      if (lookahead == 'q') ADVANCE(38);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 14:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 15:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 16:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 18:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 19:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(46);
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 22:
      if (lookahead == 'p') ADVANCE(48);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_function_token1);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_function_token2);
      END_STATE();
    case 30:
      if (lookahead == 'g') ADVANCE(53);
      END_STATE();
    case 31:
      if (lookahead == 'x') ADVANCE(26);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 33:
      if (lookahead == 'g') ADVANCE(54);
      END_STATE();
    case 34:
      if (lookahead == 'w') ADVANCE(29);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 40:
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 43:
      if (lookahead == 'g') ADVANCE(63);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_function_token3);
      if (lookahead == 'h') ADVANCE(64);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_function_token2);
      if (lookahead == 'm') ADVANCE(66);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(67);
      if (lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(64);
      END_STATE();
    case 52:
      if (lookahead == 'x') ADVANCE(69);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_function_token2);
      if (lookahead == '1') ADVANCE(70);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_msg);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(71);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_function_token3);
      if (lookahead == 'h') ADVANCE(64);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_function_token3);
      if (lookahead == 'h') ADVANCE(64);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_function_token3);
      if (lookahead == 'h') ADVANCE(64);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_function_token3);
      if (lookahead == 'h') ADVANCE(64);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_function_token3);
      if (lookahead == '2' ||
          lookahead == 'h') ADVANCE(64);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_bang);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_function_token3);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 66:
      if (lookahead == '1') ADVANCE(29);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 68:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 69:
      if (lookahead == 'p') ADVANCE(29);
      END_STATE();
    case 70:
      if (lookahead == '0' ||
          lookahead == 'p') ADVANCE(29);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_send);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(73);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_connect);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 8},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 8},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 8},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 8},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 8},
  [70] = {.lex_state = 8},
  [71] = {.lex_state = 43},
  [72] = {(TSStateId)(-1)},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_send] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_port_token1] = ACTIONS(1),
    [anon_sym_msg] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [aux_sym_number_token1] = ACTIONS(1),
    [anon_sym_e] = ACTIONS(1),
    [anon_sym_E] = ACTIONS(1),
    [aux_sym_function_token1] = ACTIONS(1),
    [aux_sym_function_token2] = ACTIONS(1),
    [aux_sym_function_token3] = ACTIONS(1),
    [sym__delimiter] = ACTIONS(1),
    [anon_sym_bang] = ACTIONS(1),
    [anon_sym_connect] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
  },
  [1] = {
    [sym_program] = STATE(62),
    [sym_send_statement] = STATE(53),
    [sym_send_block] = STATE(70),
    [sym_comment] = STATE(1),
    [aux_sym_program_repeat1] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_send] = ACTIONS(7),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(2), 1,
      sym_comment,
    ACTIONS(13), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(11), 5,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(9), 15,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      sym__delimiter,
  [35] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_port_token1,
    ACTIONS(23), 1,
      aux_sym_number_token1,
    STATE(3), 1,
      sym_comment,
    STATE(47), 1,
      sym_expression,
    STATE(61), 1,
      sym_keyword_identifier,
    ACTIONS(27), 2,
      anon_sym_bang,
      anon_sym_connect,
    ACTIONS(21), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(25), 3,
      aux_sym_function_token1,
      aux_sym_function_token2,
      aux_sym_function_token3,
    STATE(19), 7,
      sym_parenthesized,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_unary_operator,
      sym_number,
      sym_function,
  [83] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_RPAREN,
    ACTIONS(31), 1,
      anon_sym_AMP_AMP,
    ACTIONS(33), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(37), 1,
      anon_sym_SLASH,
    ACTIONS(43), 1,
      anon_sym_AMP,
    ACTIONS(45), 1,
      anon_sym_CARET,
    ACTIONS(47), 1,
      anon_sym_PIPE,
    ACTIONS(53), 1,
      sym__delimiter,
    STATE(4), 1,
      sym_comment,
    STATE(45), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(35), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(41), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(49), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [139] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_port_token1,
    ACTIONS(23), 1,
      aux_sym_number_token1,
    STATE(5), 1,
      sym_comment,
    STATE(56), 1,
      sym_expression,
    STATE(61), 1,
      sym_keyword_identifier,
    ACTIONS(27), 2,
      anon_sym_bang,
      anon_sym_connect,
    ACTIONS(21), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(25), 3,
      aux_sym_function_token1,
      aux_sym_function_token2,
      aux_sym_function_token3,
    STATE(19), 7,
      sym_parenthesized,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_unary_operator,
      sym_number,
      sym_function,
  [187] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_SLASH,
    ACTIONS(43), 1,
      anon_sym_AMP,
    ACTIONS(45), 1,
      anon_sym_CARET,
    ACTIONS(47), 1,
      anon_sym_PIPE,
    STATE(6), 1,
      sym_comment,
    ACTIONS(35), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(41), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(49), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(55), 4,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__delimiter,
  [234] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(7), 1,
      sym_comment,
    ACTIONS(59), 5,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(57), 15,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      sym__delimiter,
  [265] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(8), 1,
      sym_comment,
    ACTIONS(63), 5,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 15,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      sym__delimiter,
  [296] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_AMP_AMP,
    ACTIONS(33), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(37), 1,
      anon_sym_SLASH,
    ACTIONS(43), 1,
      anon_sym_AMP,
    ACTIONS(45), 1,
      anon_sym_CARET,
    ACTIONS(47), 1,
      anon_sym_PIPE,
    STATE(9), 1,
      sym_comment,
    ACTIONS(35), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(41), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(49), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 2,
      anon_sym_RPAREN,
      sym__delimiter,
    ACTIONS(51), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [347] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(10), 1,
      sym_comment,
    ACTIONS(69), 5,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(67), 15,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      sym__delimiter,
  [378] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(11), 1,
      sym_comment,
    ACTIONS(73), 5,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(71), 15,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      sym__delimiter,
  [409] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(12), 1,
      sym_comment,
    ACTIONS(77), 5,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 15,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      sym__delimiter,
  [440] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_SLASH,
    STATE(13), 1,
      sym_comment,
    ACTIONS(35), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(41), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(81), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 9,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      sym__delimiter,
  [479] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_SLASH,
    ACTIONS(43), 1,
      anon_sym_AMP,
    ACTIONS(45), 1,
      anon_sym_CARET,
    ACTIONS(59), 1,
      anon_sym_PIPE,
    STATE(14), 1,
      sym_comment,
    ACTIONS(35), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(41), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(49), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(57), 4,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym__delimiter,
  [526] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_SLASH,
    ACTIONS(43), 1,
      anon_sym_AMP,
    ACTIONS(59), 1,
      anon_sym_PIPE,
    STATE(15), 1,
      sym_comment,
    ACTIONS(35), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(41), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(49), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(57), 5,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      sym__delimiter,
  [571] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_SLASH,
    STATE(16), 1,
      sym_comment,
    ACTIONS(35), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(41), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(49), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(51), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(57), 5,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      sym__delimiter,
  [614] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_SLASH,
    STATE(17), 1,
      sym_comment,
    ACTIONS(35), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(59), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(57), 11,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      sym__delimiter,
  [651] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_SLASH,
    STATE(18), 1,
      sym_comment,
    ACTIONS(35), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(59), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(57), 13,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      sym__delimiter,
  [686] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_AMP_AMP,
    ACTIONS(33), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(37), 1,
      anon_sym_SLASH,
    ACTIONS(43), 1,
      anon_sym_AMP,
    ACTIONS(45), 1,
      anon_sym_CARET,
    ACTIONS(47), 1,
      anon_sym_PIPE,
    STATE(19), 1,
      sym_comment,
    ACTIONS(35), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(41), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(49), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(83), 2,
      anon_sym_RPAREN,
      sym__delimiter,
    ACTIONS(51), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [737] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(20), 1,
      sym_comment,
    ACTIONS(87), 5,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(85), 15,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      sym__delimiter,
  [768] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(21), 1,
      sym_comment,
    ACTIONS(91), 5,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(89), 15,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      sym__delimiter,
  [799] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_AMP_AMP,
    ACTIONS(37), 1,
      anon_sym_SLASH,
    ACTIONS(43), 1,
      anon_sym_AMP,
    ACTIONS(45), 1,
      anon_sym_CARET,
    ACTIONS(47), 1,
      anon_sym_PIPE,
    STATE(22), 1,
      sym_comment,
    ACTIONS(35), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(41), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(49), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(55), 3,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      sym__delimiter,
    ACTIONS(51), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [848] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(23), 1,
      sym_comment,
    ACTIONS(95), 5,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(93), 15,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      sym__delimiter,
  [879] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_AMP_AMP,
    ACTIONS(33), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(37), 1,
      anon_sym_SLASH,
    ACTIONS(43), 1,
      anon_sym_AMP,
    ACTIONS(45), 1,
      anon_sym_CARET,
    ACTIONS(47), 1,
      anon_sym_PIPE,
    ACTIONS(97), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      sym_comment,
    ACTIONS(35), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(41), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(49), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 4,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [929] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_port_token1,
    ACTIONS(23), 1,
      aux_sym_number_token1,
    ACTIONS(99), 1,
      sym_identifier,
    STATE(25), 1,
      sym_comment,
    ACTIONS(21), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(25), 3,
      aux_sym_function_token1,
      aux_sym_function_token2,
      aux_sym_function_token3,
    STATE(24), 7,
      sym_parenthesized,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_unary_operator,
      sym_number,
      sym_function,
  [967] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_port_token1,
    ACTIONS(23), 1,
      aux_sym_number_token1,
    ACTIONS(101), 1,
      sym_identifier,
    STATE(26), 1,
      sym_comment,
    ACTIONS(21), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(25), 3,
      aux_sym_function_token1,
      aux_sym_function_token2,
      aux_sym_function_token3,
    STATE(22), 7,
      sym_parenthesized,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_unary_operator,
      sym_number,
      sym_function,
  [1005] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_port_token1,
    ACTIONS(23), 1,
      aux_sym_number_token1,
    ACTIONS(103), 1,
      sym_identifier,
    STATE(27), 1,
      sym_comment,
    ACTIONS(21), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(25), 3,
      aux_sym_function_token1,
      aux_sym_function_token2,
      aux_sym_function_token3,
    STATE(6), 7,
      sym_parenthesized,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_unary_operator,
      sym_number,
      sym_function,
  [1043] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_port_token1,
    ACTIONS(23), 1,
      aux_sym_number_token1,
    ACTIONS(105), 1,
      sym_identifier,
    STATE(28), 1,
      sym_comment,
    ACTIONS(21), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(25), 3,
      aux_sym_function_token1,
      aux_sym_function_token2,
      aux_sym_function_token3,
    STATE(13), 7,
      sym_parenthesized,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_unary_operator,
      sym_number,
      sym_function,
  [1081] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_port_token1,
    ACTIONS(23), 1,
      aux_sym_number_token1,
    ACTIONS(107), 1,
      sym_identifier,
    STATE(29), 1,
      sym_comment,
    ACTIONS(21), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(25), 3,
      aux_sym_function_token1,
      aux_sym_function_token2,
      aux_sym_function_token3,
    STATE(14), 7,
      sym_parenthesized,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_unary_operator,
      sym_number,
      sym_function,
  [1119] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_port_token1,
    ACTIONS(23), 1,
      aux_sym_number_token1,
    ACTIONS(109), 1,
      sym_identifier,
    STATE(30), 1,
      sym_comment,
    ACTIONS(21), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(25), 3,
      aux_sym_function_token1,
      aux_sym_function_token2,
      aux_sym_function_token3,
    STATE(7), 7,
      sym_parenthesized,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_unary_operator,
      sym_number,
      sym_function,
  [1157] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_port_token1,
    ACTIONS(23), 1,
      aux_sym_number_token1,
    ACTIONS(111), 1,
      sym_identifier,
    STATE(31), 1,
      sym_comment,
    ACTIONS(21), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(25), 3,
      aux_sym_function_token1,
      aux_sym_function_token2,
      aux_sym_function_token3,
    STATE(16), 7,
      sym_parenthesized,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_unary_operator,
      sym_number,
      sym_function,
  [1195] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_port_token1,
    ACTIONS(23), 1,
      aux_sym_number_token1,
    ACTIONS(113), 1,
      sym_identifier,
    STATE(32), 1,
      sym_comment,
    ACTIONS(21), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(25), 3,
      aux_sym_function_token1,
      aux_sym_function_token2,
      aux_sym_function_token3,
    STATE(17), 7,
      sym_parenthesized,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_unary_operator,
      sym_number,
      sym_function,
  [1233] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_port_token1,
    ACTIONS(23), 1,
      aux_sym_number_token1,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(33), 1,
      sym_comment,
    ACTIONS(21), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(25), 3,
      aux_sym_function_token1,
      aux_sym_function_token2,
      aux_sym_function_token3,
    STATE(18), 7,
      sym_parenthesized,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_unary_operator,
      sym_number,
      sym_function,
  [1271] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_port_token1,
    ACTIONS(23), 1,
      aux_sym_number_token1,
    ACTIONS(117), 1,
      sym_identifier,
    STATE(34), 1,
      sym_comment,
    ACTIONS(21), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(25), 3,
      aux_sym_function_token1,
      aux_sym_function_token2,
      aux_sym_function_token3,
    STATE(15), 7,
      sym_parenthesized,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_unary_operator,
      sym_number,
      sym_function,
  [1309] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_port_token1,
    ACTIONS(23), 1,
      aux_sym_number_token1,
    ACTIONS(119), 1,
      sym_identifier,
    STATE(35), 1,
      sym_comment,
    ACTIONS(21), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(25), 3,
      aux_sym_function_token1,
      aux_sym_function_token2,
      aux_sym_function_token3,
    STATE(9), 7,
      sym_parenthesized,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_unary_operator,
      sym_number,
      sym_function,
  [1347] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_port_token1,
    ACTIONS(23), 1,
      aux_sym_number_token1,
    ACTIONS(121), 1,
      sym_identifier,
    STATE(36), 1,
      sym_comment,
    ACTIONS(21), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(25), 3,
      aux_sym_function_token1,
      aux_sym_function_token2,
      aux_sym_function_token3,
    STATE(4), 7,
      sym_parenthesized,
      sym_boolean_operator,
      sym_binary_operator,
      sym_comparison_operator,
      sym_unary_operator,
      sym_number,
      sym_function,
  [1385] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_port_token1,
    ACTIONS(23), 1,
      aux_sym_number_token1,
    ACTIONS(123), 1,
      sym_identifier,
    STATE(37), 1,
      sym_comment,
    ACTIONS(25), 3,
      aux_sym_function_token1,
      aux_sym_function_token2,
      aux_sym_function_token3,
    STATE(10), 3,
      sym_parenthesized,
      sym_number,
      sym_function,
  [1414] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_send,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
    STATE(38), 1,
      sym_comment,
    STATE(39), 1,
      aux_sym_program_repeat1,
    STATE(53), 1,
      sym_send_statement,
    STATE(70), 1,
      sym_send_block,
  [1436] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
    ACTIONS(129), 1,
      anon_sym_send,
    STATE(53), 1,
      sym_send_statement,
    STATE(70), 1,
      sym_send_block,
    STATE(39), 2,
      sym_comment,
      aux_sym_program_repeat1,
  [1456] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(134), 1,
      anon_sym_DOT,
    STATE(40), 1,
      sym_comment,
    STATE(41), 1,
      aux_sym_send_statement_repeat1,
    ACTIONS(132), 2,
      ts_builtin_sym_end,
      anon_sym_send,
  [1473] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(138), 1,
      anon_sym_DOT,
    ACTIONS(136), 2,
      ts_builtin_sym_end,
      anon_sym_send,
    STATE(41), 2,
      sym_comment,
      aux_sym_send_statement_repeat1,
  [1488] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(134), 1,
      anon_sym_DOT,
    STATE(40), 1,
      aux_sym_send_statement_repeat1,
    STATE(42), 1,
      sym_comment,
    ACTIONS(141), 2,
      ts_builtin_sym_end,
      anon_sym_send,
  [1505] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    ACTIONS(143), 1,
      sym__delimiter,
    STATE(43), 2,
      sym_comment,
      aux_sym_arguments_repeat1,
  [1519] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(146), 1,
      aux_sym_port_token1,
    STATE(44), 1,
      sym_comment,
    ACTIONS(148), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [1533] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(53), 1,
      sym__delimiter,
    ACTIONS(150), 1,
      anon_sym_RPAREN,
    STATE(43), 1,
      aux_sym_arguments_repeat1,
    STATE(45), 1,
      sym_comment,
  [1549] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(46), 1,
      sym_comment,
    ACTIONS(136), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_send,
  [1561] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(152), 1,
      anon_sym_RPAREN,
    ACTIONS(154), 1,
      sym__delimiter,
    STATE(47), 1,
      sym_comment,
    STATE(50), 1,
      aux_sym_message_block_repeat1,
  [1577] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(48), 1,
      sym_comment,
    ACTIONS(156), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_send,
  [1589] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(158), 1,
      anon_sym_RPAREN,
    ACTIONS(160), 1,
      sym__delimiter,
    STATE(49), 2,
      sym_comment,
      aux_sym_message_block_repeat1,
  [1603] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(154), 1,
      sym__delimiter,
    ACTIONS(163), 1,
      anon_sym_RPAREN,
    STATE(49), 1,
      aux_sym_message_block_repeat1,
    STATE(50), 1,
      sym_comment,
  [1619] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(51), 1,
      sym_comment,
    ACTIONS(165), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_send,
  [1631] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(52), 1,
      sym_comment,
    ACTIONS(167), 2,
      anon_sym_RPAREN,
      sym__delimiter,
  [1642] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(53), 1,
      sym_comment,
    ACTIONS(169), 2,
      ts_builtin_sym_end,
      anon_sym_send,
  [1653] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(171), 1,
      anon_sym_msg,
    STATE(46), 1,
      sym_message_block,
    STATE(54), 1,
      sym_comment,
  [1666] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(173), 1,
      anon_sym_RPAREN,
    ACTIONS(175), 1,
      sym__delimiter,
    STATE(55), 1,
      sym_comment,
  [1679] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(56), 1,
      sym_comment,
    ACTIONS(158), 2,
      anon_sym_RPAREN,
      sym__delimiter,
  [1690] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(177), 1,
      anon_sym_LPAREN,
    STATE(21), 1,
      sym_arguments,
    STATE(57), 1,
      sym_comment,
  [1703] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(58), 1,
      sym_comment,
    ACTIONS(179), 2,
      anon_sym_RPAREN,
      sym__delimiter,
  [1714] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(171), 1,
      anon_sym_msg,
    STATE(42), 1,
      sym_message_block,
    STATE(59), 1,
      sym_comment,
  [1727] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(181), 1,
      aux_sym_port_token1,
    STATE(55), 1,
      sym_port,
    STATE(60), 1,
      sym_comment,
  [1740] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(61), 1,
      sym_comment,
    ACTIONS(83), 2,
      anon_sym_RPAREN,
      sym__delimiter,
  [1751] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(183), 1,
      ts_builtin_sym_end,
    STATE(62), 1,
      sym_comment,
  [1761] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    STATE(63), 1,
      sym_comment,
  [1771] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(187), 1,
      anon_sym_RPAREN,
    STATE(64), 1,
      sym_comment,
  [1781] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(189), 1,
      anon_sym_DOT,
    STATE(65), 1,
      sym_comment,
  [1791] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(191), 1,
      aux_sym_port_token1,
    STATE(66), 1,
      sym_comment,
  [1801] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    STATE(67), 1,
      sym_comment,
  [1811] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(195), 1,
      sym_host,
    STATE(68), 1,
      sym_comment,
  [1821] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(197), 1,
      anon_sym_DOT,
    STATE(69), 1,
      sym_comment,
  [1831] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(199), 1,
      anon_sym_DOT,
    STATE(70), 1,
      sym_comment,
  [1841] = 1,
    ACTIONS(201), 1,
      aux_sym_comment_token1,
  [1845] = 1,
    ACTIONS(203), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 35,
  [SMALL_STATE(4)] = 83,
  [SMALL_STATE(5)] = 139,
  [SMALL_STATE(6)] = 187,
  [SMALL_STATE(7)] = 234,
  [SMALL_STATE(8)] = 265,
  [SMALL_STATE(9)] = 296,
  [SMALL_STATE(10)] = 347,
  [SMALL_STATE(11)] = 378,
  [SMALL_STATE(12)] = 409,
  [SMALL_STATE(13)] = 440,
  [SMALL_STATE(14)] = 479,
  [SMALL_STATE(15)] = 526,
  [SMALL_STATE(16)] = 571,
  [SMALL_STATE(17)] = 614,
  [SMALL_STATE(18)] = 651,
  [SMALL_STATE(19)] = 686,
  [SMALL_STATE(20)] = 737,
  [SMALL_STATE(21)] = 768,
  [SMALL_STATE(22)] = 799,
  [SMALL_STATE(23)] = 848,
  [SMALL_STATE(24)] = 879,
  [SMALL_STATE(25)] = 929,
  [SMALL_STATE(26)] = 967,
  [SMALL_STATE(27)] = 1005,
  [SMALL_STATE(28)] = 1043,
  [SMALL_STATE(29)] = 1081,
  [SMALL_STATE(30)] = 1119,
  [SMALL_STATE(31)] = 1157,
  [SMALL_STATE(32)] = 1195,
  [SMALL_STATE(33)] = 1233,
  [SMALL_STATE(34)] = 1271,
  [SMALL_STATE(35)] = 1309,
  [SMALL_STATE(36)] = 1347,
  [SMALL_STATE(37)] = 1385,
  [SMALL_STATE(38)] = 1414,
  [SMALL_STATE(39)] = 1436,
  [SMALL_STATE(40)] = 1456,
  [SMALL_STATE(41)] = 1473,
  [SMALL_STATE(42)] = 1488,
  [SMALL_STATE(43)] = 1505,
  [SMALL_STATE(44)] = 1519,
  [SMALL_STATE(45)] = 1533,
  [SMALL_STATE(46)] = 1549,
  [SMALL_STATE(47)] = 1561,
  [SMALL_STATE(48)] = 1577,
  [SMALL_STATE(49)] = 1589,
  [SMALL_STATE(50)] = 1603,
  [SMALL_STATE(51)] = 1619,
  [SMALL_STATE(52)] = 1631,
  [SMALL_STATE(53)] = 1642,
  [SMALL_STATE(54)] = 1653,
  [SMALL_STATE(55)] = 1666,
  [SMALL_STATE(56)] = 1679,
  [SMALL_STATE(57)] = 1690,
  [SMALL_STATE(58)] = 1703,
  [SMALL_STATE(59)] = 1714,
  [SMALL_STATE(60)] = 1727,
  [SMALL_STATE(61)] = 1740,
  [SMALL_STATE(62)] = 1751,
  [SMALL_STATE(63)] = 1761,
  [SMALL_STATE(64)] = 1771,
  [SMALL_STATE(65)] = 1781,
  [SMALL_STATE(66)] = 1791,
  [SMALL_STATE(67)] = 1801,
  [SMALL_STATE(68)] = 1811,
  [SMALL_STATE(69)] = 1821,
  [SMALL_STATE(70)] = 1831,
  [SMALL_STATE(71)] = 1841,
  [SMALL_STATE(72)] = 1845,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_operator, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 3),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operator, 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operator, 2),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_operator, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 4),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 4),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 3),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_operator, 3),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized, 3),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 2),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 3),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(63),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_send_statement, 4),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_send_statement_repeat1, 2),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_send_statement_repeat1, 2), SHIFT_REPEAT(54),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_send_statement, 3),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(35),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_block, 4),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_block_repeat1, 2),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_block_repeat1, 2), SHIFT_REPEAT(5),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_block, 5),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_identifier, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [183] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_send_block, 4),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_send_block, 6),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_pdmsg(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const uint16_t *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .field_count = FIELD_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .state_count = STATE_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
