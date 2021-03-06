/* Generated By:JavaCC: Do not edit this line. SimpleListHxConstants.java */
package edu.nyu.csci.cc.fall14;


/**
 * Token literal values and constants.
 * Generated by org.javacc.parser.OtherFilesGen#start()
 */
public interface SimpleListHxConstants {

  /** End of File. */
  int EOF = 0;
  /** RegularExpression Id. */
  int T_HX_CONCRETE = 15;
  /** RegularExpression Id. */
  int T_HX_PP_UNCONCRETE = 25;
  /** RegularExpression Id. */
  int T_HX_SEMI = 28;
  /** RegularExpression Id. */
  int T_HX_BAR = 29;
  /** RegularExpression Id. */
  int T_HX_LPAREN = 30;
  /** RegularExpression Id. */
  int T_HX_RPAREN = 31;
  /** RegularExpression Id. */
  int T_HX_STAR = 32;
  /** RegularExpression Id. */
  int T_HX_PLUS = 33;
  /** RegularExpression Id. */
  int T_HX_QUEST = 34;
  /** RegularExpression Id. */
  int T_HX_SUB = 35;
  /** RegularExpression Id. */
  int T_HX_DOT = 36;
  /** RegularExpression Id. */
  int T_HX_COLON = 37;
  /** RegularExpression Id. */
  int T_HX_LBRACE = 38;
  /** RegularExpression Id. */
  int T_HX_RBRACE = 39;
  /** RegularExpression Id. */
  int T_HX_LBRACKET = 40;
  /** RegularExpression Id. */
  int T_HX_RBRACKET = 41;
  /** RegularExpression Id. */
  int T_HX_COMMA = 42;
  /** RegularExpression Id. */
  int T_HX_FORALL = 43;
  /** RegularExpression Id. */
  int T_HX_ARROW = 44;
  /** RegularExpression Id. */
  int T_HX_UP = 45;
  /** RegularExpression Id. */
  int T_HX_DOWN = 46;
  /** RegularExpression Id. */
  int T_HX_NOT = 47;
  /** RegularExpression Id. */
  int T_HX_AT = 48;
  /** RegularExpression Id. */
  int T_HX_DOTTEDNAME = 49;
  /** RegularExpression Id. */
  int T_HX_MODULE = 50;
  /** RegularExpression Id. */
  int T_HX_SORT = 51;
  /** RegularExpression Id. */
  int T_HX_MAIN = 52;
  /** RegularExpression Id. */
  int T_HX_DATA = 53;
  /** RegularExpression Id. */
  int T_HX_SCHEME = 54;
  /** RegularExpression Id. */
  int T_HX_AUTOMATIC = 55;
  /** RegularExpression Id. */
  int T_HX_SYMBOL = 56;
  /** RegularExpression Id. */
  int T_HX_STATIC = 57;
  /** RegularExpression Id. */
  int T_HX_ATTRIBUTE = 58;
  /** RegularExpression Id. */
  int T_HX_COMPOSE = 59;
  /** RegularExpression Id. */
  int T_HX_SUGAR = 60;
  /** RegularExpression Id. */
  int T_HX_RULE = 61;
  /** RegularExpression Id. */
  int T_HX_PRIORITY = 62;
  /** RegularExpression Id. */
  int T_HX_DEFAULT = 63;
  /** RegularExpression Id. */
  int T_HX_IMPORT = 64;
  /** RegularExpression Id. */
  int T_HX_TAG = 65;
  /** RegularExpression Id. */
  int T_HX_BINDS = 66;
  /** RegularExpression Id. */
  int T_HX_AS = 67;
  /** RegularExpression Id. */
  int T_HX_SPACE = 68;
  /** RegularExpression Id. */
  int T_HX_TOKEN = 69;
  /** RegularExpression Id. */
  int T_HX_FRAGMENT = 70;
  /** RegularExpression Id. */
  int T_HX_NESTED = 71;
  /** RegularExpression Id. */
  int T_HX_FRAGMENT_REF = 72;
  /** RegularExpression Id. */
  int T_HX_RE_NAME = 73;
  /** RegularExpression Id. */
  int T_HX_RE_WORD = 74;
  /** RegularExpression Id. */
  int T_HX_META = 75;
  /** RegularExpression Id. */
  int T_HX_VAR = 76;
  /** RegularExpression Id. */
  int T_HX_NATURAL = 77;
  /** RegularExpression Id. */
  int T_HX_INTEGER = 78;
  /** RegularExpression Id. */
  int T_HX_UNNATURAL = 79;
  /** RegularExpression Id. */
  int T_HX_STRING = 80;
  /** RegularExpression Id. */
  int T_HX_STRING1CHAR = 81;
  /** RegularExpression Id. */
  int T_HX_STRING2CHAR = 82;
  /** RegularExpression Id. */
  int T_HX_ESCAPEDCHAR = 83;
  /** RegularExpression Id. */
  int T_HX_HEX = 84;
  /** RegularExpression Id. */
  int T_HX_CHAR_CLASS = 85;
  /** RegularExpression Id. */
  int T_HX_CC_NOT = 86;
  /** RegularExpression Id. */
  int T_HX_CC_RBRACKET = 87;
  /** RegularExpression Id. */
  int T_HX_CC_DASH = 88;
  /** RegularExpression Id. */
  int T_HX_CC_OTHER = 89;
  /** RegularExpression Id. */
  int T_HX_CC_SKIP = 90;
  /** RegularExpression Id. */
  int T_HX_PP_CONCRETE_SPACE = 91;
  /** RegularExpression Id. */
  int T_HX_PP_CONCRETE_WORD = 92;

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
    "\"WORD\"",
    "\"Query\"",
    "\"List\"",
    "\"Words\"",
    "\"Answer\"",
    "\"MoreWords\"",
    "\"NoWords\"",
    "\"CheckMember\"",
    "\"Check\"",
    "\"__HACS__\"",
    "\"\\u27e6\"",
    "\"\\u27e6\"",
    "\"\\u27e6\"",
    "\"\\u27e7\"",
    "\"\\u27e7\"",
    "<token of kind 16>",
    "\"/*\"",
    "\"/*\"",
    "\"*/\"",
    "<token of kind 20>",
    "\"\\u27e8\"",
    "\"\\u27e8\"",
    "\"\\u27e8\"",
    "\"\\u27e9\"",
    "\"\\u27e9\"",
    "<token of kind 26>",
    "<token of kind 27>",
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
