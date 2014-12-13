/* Generated By:JavaCC: Do not edit this line. Pr3BaseHxConstants.java */
package edu.nyu.csci.cc.fall14;


/**
 * Token literal values and constants.
 * Generated by org.javacc.parser.OtherFilesGen#start()
 */
public interface Pr3BaseHxConstants {

  /** End of File. */
  int EOF = 0;
  /** RegularExpression Id. */
  int T_HX_CONCRETE = 33;
  /** RegularExpression Id. */
  int T_HX_PP_UNCONCRETE = 43;
  /** RegularExpression Id. */
  int T_HX_SEMI = 46;
  /** RegularExpression Id. */
  int T_HX_BAR = 47;
  /** RegularExpression Id. */
  int T_HX_LPAREN = 48;
  /** RegularExpression Id. */
  int T_HX_RPAREN = 49;
  /** RegularExpression Id. */
  int T_HX_STAR = 50;
  /** RegularExpression Id. */
  int T_HX_PLUS = 51;
  /** RegularExpression Id. */
  int T_HX_QUEST = 52;
  /** RegularExpression Id. */
  int T_HX_SUB = 53;
  /** RegularExpression Id. */
  int T_HX_DOT = 54;
  /** RegularExpression Id. */
  int T_HX_COLON = 55;
  /** RegularExpression Id. */
  int T_HX_LBRACE = 56;
  /** RegularExpression Id. */
  int T_HX_RBRACE = 57;
  /** RegularExpression Id. */
  int T_HX_LBRACKET = 58;
  /** RegularExpression Id. */
  int T_HX_RBRACKET = 59;
  /** RegularExpression Id. */
  int T_HX_COMMA = 60;
  /** RegularExpression Id. */
  int T_HX_FORALL = 61;
  /** RegularExpression Id. */
  int T_HX_ARROW = 62;
  /** RegularExpression Id. */
  int T_HX_UP = 63;
  /** RegularExpression Id. */
  int T_HX_DOWN = 64;
  /** RegularExpression Id. */
  int T_HX_NOT = 65;
  /** RegularExpression Id. */
  int T_HX_AT = 66;
  /** RegularExpression Id. */
  int T_HX_DOTTEDNAME = 67;
  /** RegularExpression Id. */
  int T_HX_MODULE = 68;
  /** RegularExpression Id. */
  int T_HX_SORT = 69;
  /** RegularExpression Id. */
  int T_HX_MAIN = 70;
  /** RegularExpression Id. */
  int T_HX_DATA = 71;
  /** RegularExpression Id. */
  int T_HX_SCHEME = 72;
  /** RegularExpression Id. */
  int T_HX_AUTOMATIC = 73;
  /** RegularExpression Id. */
  int T_HX_SYMBOL = 74;
  /** RegularExpression Id. */
  int T_HX_STATIC = 75;
  /** RegularExpression Id. */
  int T_HX_ATTRIBUTE = 76;
  /** RegularExpression Id. */
  int T_HX_COMPOSE = 77;
  /** RegularExpression Id. */
  int T_HX_SUGAR = 78;
  /** RegularExpression Id. */
  int T_HX_RULE = 79;
  /** RegularExpression Id. */
  int T_HX_PRIORITY = 80;
  /** RegularExpression Id. */
  int T_HX_DEFAULT = 81;
  /** RegularExpression Id. */
  int T_HX_IMPORT = 82;
  /** RegularExpression Id. */
  int T_HX_TAG = 83;
  /** RegularExpression Id. */
  int T_HX_BINDS = 84;
  /** RegularExpression Id. */
  int T_HX_AS = 85;
  /** RegularExpression Id. */
  int T_HX_SPACE = 86;
  /** RegularExpression Id. */
  int T_HX_TOKEN = 87;
  /** RegularExpression Id. */
  int T_HX_FRAGMENT = 88;
  /** RegularExpression Id. */
  int T_HX_NESTED = 89;
  /** RegularExpression Id. */
  int T_HX_FRAGMENT_REF = 90;
  /** RegularExpression Id. */
  int T_HX_RE_NAME = 91;
  /** RegularExpression Id. */
  int T_HX_RE_WORD = 92;
  /** RegularExpression Id. */
  int T_HX_META = 93;
  /** RegularExpression Id. */
  int T_HX_VAR = 94;
  /** RegularExpression Id. */
  int T_HX_NATURAL = 95;
  /** RegularExpression Id. */
  int T_HX_INTEGER = 96;
  /** RegularExpression Id. */
  int T_HX_UNNATURAL = 97;
  /** RegularExpression Id. */
  int T_HX_STRING = 98;
  /** RegularExpression Id. */
  int T_HX_STRING1CHAR = 99;
  /** RegularExpression Id. */
  int T_HX_STRING2CHAR = 100;
  /** RegularExpression Id. */
  int T_HX_ESCAPEDCHAR = 101;
  /** RegularExpression Id. */
  int T_HX_HEX = 102;
  /** RegularExpression Id. */
  int T_HX_CHAR_CLASS = 103;
  /** RegularExpression Id. */
  int T_HX_CC_NOT = 104;
  /** RegularExpression Id. */
  int T_HX_CC_RBRACKET = 105;
  /** RegularExpression Id. */
  int T_HX_CC_DASH = 106;
  /** RegularExpression Id. */
  int T_HX_CC_OTHER = 107;
  /** RegularExpression Id. */
  int T_HX_CC_SKIP = 108;
  /** RegularExpression Id. */
  int T_HX_PP_CONCRETE_SPACE = 109;
  /** RegularExpression Id. */
  int T_HX_PP_CONCRETE_WORD = 110;

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
    "\"IDENTIFIER\"",
    "\"INTEGER\"",
    "\"Program\"",
    "\"Integers\"",
    "\"Integer\"",
    "\"ArgumentSignature\"",
    "\"TypeIdentifierTail\"",
    "\"Instructions\"",
    "\"Instruction\"",
    "\"Op\"",
    "\"Declarations\"",
    "\"Declaration\"",
    "\"IfTail\"",
    "\"Expression\"",
    "\"Statements\"",
    "\"Statement\"",
    "\"Identifier\"",
    "\"Type\"",
    "\"Reg\"",
    "\"Arg\"",
    "\"Mem\"",
    "\"Sign\"",
    "\"Regs\"",
    "\"Constant\"",
    "\"Compile\"",
    "\"CompileDeclarations\"",
    "\"CompileDeclaration\"",
    "\"__HACS__\"",
    "\"\\u27e6\"",
    "\"\\u27e6\"",
    "\"\\u27e6\"",
    "\"\\u27e7\"",
    "\"\\u27e7\"",
    "<token of kind 34>",
    "\"/*\"",
    "\"/*\"",
    "\"*/\"",
    "<token of kind 38>",
    "\"\\u27e8\"",
    "\"\\u27e8\"",
    "\"\\u27e8\"",
    "\"\\u27e9\"",
    "\"\\u27e9\"",
    "<token of kind 44>",
    "<token of kind 45>",
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
