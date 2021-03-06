/* Generated By:JavaCC: Do not edit this line. Pr2BaseHxConstants.java */
package edu.nyu.csci.cc.fall14;


/**
 * Token literal values and constants.
 * Generated by org.javacc.parser.OtherFilesGen#start()
 */
public interface Pr2BaseHxConstants {

  /** End of File. */
  int EOF = 0;
  /** RegularExpression Id. */
  int T_HX_CONCRETE = 27;
  /** RegularExpression Id. */
  int T_HX_PP_UNCONCRETE = 37;
  /** RegularExpression Id. */
  int T_HX_SEMI = 40;
  /** RegularExpression Id. */
  int T_HX_BAR = 41;
  /** RegularExpression Id. */
  int T_HX_LPAREN = 42;
  /** RegularExpression Id. */
  int T_HX_RPAREN = 43;
  /** RegularExpression Id. */
  int T_HX_STAR = 44;
  /** RegularExpression Id. */
  int T_HX_PLUS = 45;
  /** RegularExpression Id. */
  int T_HX_QUEST = 46;
  /** RegularExpression Id. */
  int T_HX_SUB = 47;
  /** RegularExpression Id. */
  int T_HX_DOT = 48;
  /** RegularExpression Id. */
  int T_HX_COLON = 49;
  /** RegularExpression Id. */
  int T_HX_LBRACE = 50;
  /** RegularExpression Id. */
  int T_HX_RBRACE = 51;
  /** RegularExpression Id. */
  int T_HX_LBRACKET = 52;
  /** RegularExpression Id. */
  int T_HX_RBRACKET = 53;
  /** RegularExpression Id. */
  int T_HX_COMMA = 54;
  /** RegularExpression Id. */
  int T_HX_FORALL = 55;
  /** RegularExpression Id. */
  int T_HX_ARROW = 56;
  /** RegularExpression Id. */
  int T_HX_UP = 57;
  /** RegularExpression Id. */
  int T_HX_DOWN = 58;
  /** RegularExpression Id. */
  int T_HX_NOT = 59;
  /** RegularExpression Id. */
  int T_HX_AT = 60;
  /** RegularExpression Id. */
  int T_HX_DOTTEDNAME = 61;
  /** RegularExpression Id. */
  int T_HX_MODULE = 62;
  /** RegularExpression Id. */
  int T_HX_SORT = 63;
  /** RegularExpression Id. */
  int T_HX_MAIN = 64;
  /** RegularExpression Id. */
  int T_HX_DATA = 65;
  /** RegularExpression Id. */
  int T_HX_SCHEME = 66;
  /** RegularExpression Id. */
  int T_HX_AUTOMATIC = 67;
  /** RegularExpression Id. */
  int T_HX_SYMBOL = 68;
  /** RegularExpression Id. */
  int T_HX_STATIC = 69;
  /** RegularExpression Id. */
  int T_HX_ATTRIBUTE = 70;
  /** RegularExpression Id. */
  int T_HX_COMPOSE = 71;
  /** RegularExpression Id. */
  int T_HX_SUGAR = 72;
  /** RegularExpression Id. */
  int T_HX_RULE = 73;
  /** RegularExpression Id. */
  int T_HX_PRIORITY = 74;
  /** RegularExpression Id. */
  int T_HX_DEFAULT = 75;
  /** RegularExpression Id. */
  int T_HX_IMPORT = 76;
  /** RegularExpression Id. */
  int T_HX_TAG = 77;
  /** RegularExpression Id. */
  int T_HX_BINDS = 78;
  /** RegularExpression Id. */
  int T_HX_AS = 79;
  /** RegularExpression Id. */
  int T_HX_SPACE = 80;
  /** RegularExpression Id. */
  int T_HX_TOKEN = 81;
  /** RegularExpression Id. */
  int T_HX_FRAGMENT = 82;
  /** RegularExpression Id. */
  int T_HX_NESTED = 83;
  /** RegularExpression Id. */
  int T_HX_FRAGMENT_REF = 84;
  /** RegularExpression Id. */
  int T_HX_RE_NAME = 85;
  /** RegularExpression Id. */
  int T_HX_RE_WORD = 86;
  /** RegularExpression Id. */
  int T_HX_META = 87;
  /** RegularExpression Id. */
  int T_HX_VAR = 88;
  /** RegularExpression Id. */
  int T_HX_NATURAL = 89;
  /** RegularExpression Id. */
  int T_HX_INTEGER = 90;
  /** RegularExpression Id. */
  int T_HX_UNNATURAL = 91;
  /** RegularExpression Id. */
  int T_HX_STRING = 92;
  /** RegularExpression Id. */
  int T_HX_STRING1CHAR = 93;
  /** RegularExpression Id. */
  int T_HX_STRING2CHAR = 94;
  /** RegularExpression Id. */
  int T_HX_ESCAPEDCHAR = 95;
  /** RegularExpression Id. */
  int T_HX_HEX = 96;
  /** RegularExpression Id. */
  int T_HX_CHAR_CLASS = 97;
  /** RegularExpression Id. */
  int T_HX_CC_NOT = 98;
  /** RegularExpression Id. */
  int T_HX_CC_RBRACKET = 99;
  /** RegularExpression Id. */
  int T_HX_CC_DASH = 100;
  /** RegularExpression Id. */
  int T_HX_CC_OTHER = 101;
  /** RegularExpression Id. */
  int T_HX_CC_SKIP = 102;
  /** RegularExpression Id. */
  int T_HX_PP_CONCRETE_SPACE = 103;
  /** RegularExpression Id. */
  int T_HX_PP_CONCRETE_WORD = 104;

  /** Lexical state. */
  int DEFAULT = 0;
  /** Lexical state. */
  int HX_RE = 1;
  /** Lexical state. */
  int HX_IN_CONCRETE = 2;
  /** Lexical state. */
  int HX_IN_NESTED_CONCRETE = 3;
  /** Lexical state. */
  int HX_NESTED_COMMENT = 4;
  /** Lexical state. */
  int HX_PP = 5;
  /** Lexical state. */
  int IN_PP_UNCONCRETE = 6;
  /** Lexical state. */
  int IN_PP_NESTED_UNCONCRETE = 7;
  /** Lexical state. */
  int HX_CC = 8;

  /** Literal token values. */
  String[] tokenImage = {
    "<EOF>",
    "\"Identifier\"",
    "\"Integer\"",
    "\"String\"",
    "\"Program\"",
    "\"Declarations\"",
    "\"Declaration\"",
    "\"Members\"",
    "\"Member\"",
    "\"ArgumentSignature\"",
    "\"TypeIdentifierTail\"",
    "\"Statements\"",
    "\"Statement\"",
    "\"IfTail\"",
    "\"Type\"",
    "\"Expression\"",
    "\"Literal\"",
    "\"SimpleLiteral\"",
    "\"ObjectLiteral\"",
    "\"KeyValueTail\"",
    "\"KeyValue\"",
    "\"Compile\"",
    "\"__HACS__\"",
    "\"\\u27e6\"",
    "\"\\u27e6\"",
    "\"\\u27e6\"",
    "\"\\u27e7\"",
    "\"\\u27e7\"",
    "<token of kind 28>",
    "\"/*\"",
    "\"/*\"",
    "\"*/\"",
    "<token of kind 32>",
    "\"\\u27e8\"",
    "\"\\u27e8\"",
    "\"\\u27e8\"",
    "\"\\u27e9\"",
    "\"\\u27e9\"",
    "<token of kind 38>",
    "<token of kind 39>",
    "\";\"",
    "\"|\"",
    "\"(\"",
    "\")\"",
    "\"*\"",
    "\"+\"",
    "\"?\"",
    "\"_\"",
    "\".\"",
    "\":\"",
    "\"{\"",
    "\"}\"",
    "\"[\"",
    "\"]\"",
    "\",\"",
    "\"\\u2200\"",
    "\"\\u2192\"",
    "\"\\u2191\"",
    "\"\\u2193\"",
    "\"\\u00ac\"",
    "\"@\"",
    "<T_HX_DOTTEDNAME>",
    "\"module\"",
    "\"sort\"",
    "\"main\"",
    "\"data\"",
    "\"scheme\"",
    "\"automatic\"",
    "\"symbol\"",
    "\"static\"",
    "\"attribute\"",
    "\"compose\"",
    "\"sugar\"",
    "\"rule\"",
    "\"priority\"",
    "\"default\"",
    "\"import\"",
    "\"tag\"",
    "\"binds\"",
    "\"as\"",
    "\"space\"",
    "\"token\"",
    "\"fragment\"",
    "\"nested\"",
    "<T_HX_FRAGMENT_REF>",
    "<T_HX_RE_NAME>",
    "<T_HX_RE_WORD>",
    "<T_HX_META>",
    "<T_HX_VAR>",
    "<T_HX_NATURAL>",
    "<T_HX_INTEGER>",
    "<T_HX_UNNATURAL>",
    "<T_HX_STRING>",
    "<T_HX_STRING1CHAR>",
    "<T_HX_STRING2CHAR>",
    "<T_HX_ESCAPEDCHAR>",
    "<T_HX_HEX>",
    "<T_HX_CHAR_CLASS>",
    "\"^\"",
    "\"]\"",
    "\"-\"",
    "<T_HX_CC_OTHER>",
    "\"\\u0001\"",
    "<T_HX_PP_CONCRETE_SPACE>",
    "<T_HX_PP_CONCRETE_WORD>",
  };

}
