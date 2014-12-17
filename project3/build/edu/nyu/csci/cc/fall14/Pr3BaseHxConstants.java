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
  int T_HX_CONCRETE = 45;
  /** RegularExpression Id. */
  int T_HX_PP_UNCONCRETE = 55;
  /** RegularExpression Id. */
  int T_HX_SEMI = 58;
  /** RegularExpression Id. */
  int T_HX_BAR = 59;
  /** RegularExpression Id. */
  int T_HX_LPAREN = 60;
  /** RegularExpression Id. */
  int T_HX_RPAREN = 61;
  /** RegularExpression Id. */
  int T_HX_STAR = 62;
  /** RegularExpression Id. */
  int T_HX_PLUS = 63;
  /** RegularExpression Id. */
  int T_HX_QUEST = 64;
  /** RegularExpression Id. */
  int T_HX_SUB = 65;
  /** RegularExpression Id. */
  int T_HX_DOT = 66;
  /** RegularExpression Id. */
  int T_HX_COLON = 67;
  /** RegularExpression Id. */
  int T_HX_LBRACE = 68;
  /** RegularExpression Id. */
  int T_HX_RBRACE = 69;
  /** RegularExpression Id. */
  int T_HX_LBRACKET = 70;
  /** RegularExpression Id. */
  int T_HX_RBRACKET = 71;
  /** RegularExpression Id. */
  int T_HX_COMMA = 72;
  /** RegularExpression Id. */
  int T_HX_FORALL = 73;
  /** RegularExpression Id. */
  int T_HX_ARROW = 74;
  /** RegularExpression Id. */
  int T_HX_UP = 75;
  /** RegularExpression Id. */
  int T_HX_DOWN = 76;
  /** RegularExpression Id. */
  int T_HX_NOT = 77;
  /** RegularExpression Id. */
  int T_HX_AT = 78;
  /** RegularExpression Id. */
  int T_HX_DOTTEDNAME = 79;
  /** RegularExpression Id. */
  int T_HX_MODULE = 80;
  /** RegularExpression Id. */
  int T_HX_SORT = 81;
  /** RegularExpression Id. */
  int T_HX_MAIN = 82;
  /** RegularExpression Id. */
  int T_HX_DATA = 83;
  /** RegularExpression Id. */
  int T_HX_SCHEME = 84;
  /** RegularExpression Id. */
  int T_HX_AUTOMATIC = 85;
  /** RegularExpression Id. */
  int T_HX_SYMBOL = 86;
  /** RegularExpression Id. */
  int T_HX_STATIC = 87;
  /** RegularExpression Id. */
  int T_HX_ATTRIBUTE = 88;
  /** RegularExpression Id. */
  int T_HX_COMPOSE = 89;
  /** RegularExpression Id. */
  int T_HX_SUGAR = 90;
  /** RegularExpression Id. */
  int T_HX_RULE = 91;
  /** RegularExpression Id. */
  int T_HX_PRIORITY = 92;
  /** RegularExpression Id. */
  int T_HX_DEFAULT = 93;
  /** RegularExpression Id. */
  int T_HX_IMPORT = 94;
  /** RegularExpression Id. */
  int T_HX_TAG = 95;
  /** RegularExpression Id. */
  int T_HX_BINDS = 96;
  /** RegularExpression Id. */
  int T_HX_AS = 97;
  /** RegularExpression Id. */
  int T_HX_SPACE = 98;
  /** RegularExpression Id. */
  int T_HX_TOKEN = 99;
  /** RegularExpression Id. */
  int T_HX_FRAGMENT = 100;
  /** RegularExpression Id. */
  int T_HX_NESTED = 101;
  /** RegularExpression Id. */
  int T_HX_FRAGMENT_REF = 102;
  /** RegularExpression Id. */
  int T_HX_RE_NAME = 103;
  /** RegularExpression Id. */
  int T_HX_RE_WORD = 104;
  /** RegularExpression Id. */
  int T_HX_META = 105;
  /** RegularExpression Id. */
  int T_HX_VAR = 106;
  /** RegularExpression Id. */
  int T_HX_NATURAL = 107;
  /** RegularExpression Id. */
  int T_HX_INTEGER = 108;
  /** RegularExpression Id. */
  int T_HX_UNNATURAL = 109;
  /** RegularExpression Id. */
  int T_HX_STRING = 110;
  /** RegularExpression Id. */
  int T_HX_STRING1CHAR = 111;
  /** RegularExpression Id. */
  int T_HX_STRING2CHAR = 112;
  /** RegularExpression Id. */
  int T_HX_ESCAPEDCHAR = 113;
  /** RegularExpression Id. */
  int T_HX_HEX = 114;
  /** RegularExpression Id. */
  int T_HX_CHAR_CLASS = 115;
  /** RegularExpression Id. */
  int T_HX_CC_NOT = 116;
  /** RegularExpression Id. */
  int T_HX_CC_RBRACKET = 117;
  /** RegularExpression Id. */
  int T_HX_CC_DASH = 118;
  /** RegularExpression Id. */
  int T_HX_CC_OTHER = 119;
  /** RegularExpression Id. */
  int T_HX_CC_SKIP = 120;
  /** RegularExpression Id. */
  int T_HX_PP_CONCRETE_SPACE = 121;
  /** RegularExpression Id. */
  int T_HX_PP_CONCRETE_WORD = 122;

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
    "\"SYMBOL\"",
    "\"IDENTIFIER\"",
    "\"INTEGER\"",
    "\"Arg\"",
    "\"Program\"",
    "\"Integers\"",
    "\"Integer\"",
    "\"Constant\"",
    "\"ArgState\"",
    "\"Boolean\"",
    "\"ArgumentSignature\"",
    "\"TypeIdentifierTail\"",
    "\"Instructions\"",
    "\"Instruction\"",
    "\"Identifiers\"",
    "\"Op\"",
    "\"Declarations\"",
    "\"Declaration\"",
    "\"Symbol\"",
    "\"IfTail\"",
    "\"Expression\"",
    "\"Statements\"",
    "\"Statement\"",
    "\"Identifier\"",
    "\"Type\"",
    "\"Sign\"",
    "\"Mem\"",
    "\"Regs\"",
    "\"Reg\"",
    "\"Compile\"",
    "\"CompileDeclarations\"",
    "\"CompileDeclaration\"",
    "\"Argument\"",
    "\"AllStatements\"",
    "\"SingleStatement\"",
    "\"SingleExpression\"",
    "\"T\"",
    "\"ArgumentIDSearching\"",
    "\"ArgumentIntSearching\"",
    "\"__HACS__\"",
    "\"\\u27e6\"",
    "\"\\u27e6\"",
    "\"\\u27e6\"",
    "\"\\u27e7\"",
    "\"\\u27e7\"",
    "<token of kind 46>",
    "\"/*\"",
    "\"/*\"",
    "\"*/\"",
    "<token of kind 50>",
    "\"\\u27e8\"",
    "\"\\u27e8\"",
    "\"\\u27e8\"",
    "\"\\u27e9\"",
    "\"\\u27e9\"",
    "<token of kind 56>",
    "<token of kind 57>",
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
