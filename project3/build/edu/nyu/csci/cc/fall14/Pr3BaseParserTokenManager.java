/* Pr3BaseParserTokenManager.java */
/* Generated By:JavaCC: Do not edit this line. Pr3BaseParserTokenManager.java */
package edu.nyu.csci.cc.fall14;

/** Token Manager. */
@SuppressWarnings("unused")public class Pr3BaseParserTokenManager implements Pr3BaseParserConstants {
                    int nesting; int nestedState;

  /** Debug output. */
  public  java.io.PrintStream debugStream = System.out;
  /** Set debug output. */
  public  void setDebugStream(java.io.PrintStream ds) { debugStream = ds; }
private final int jjStopStringLiteralDfa_0(int pos, long active0, long active1){
   switch (pos)
   {
      case 0:
         if ((active0 & 0xff0000L) != 0L)
            return 2;
         if ((active0 & 0xf000003ff700d00cL) != 0L || (active1 & 0xfffL) != 0L)
         {
            jjmatchedKind = 77;
            return 2;
         }
         if ((active0 & 0x3f000c000000300L) != 0L)
         {
            jjmatchedKind = 77;
            return 16;
         }
         return -1;
      case 1:
         if ((active0 & 0xf000000000700000L) != 0L || (active1 & 0xfffL) != 0L)
            return 2;
         if ((active0 & 0x10000000000000L) != 0L)
            return 16;
         if ((active0 & 0x3e000c000000300L) != 0L)
         {
            if (jjmatchedPos != 1)
            {
               jjmatchedKind = 77;
               jjmatchedPos = 1;
            }
            return 16;
         }
         if ((active0 & 0x3ff78ed00cL) != 0L)
         {
            if (jjmatchedPos != 1)
            {
               jjmatchedKind = 77;
               jjmatchedPos = 1;
            }
            return 2;
         }
         return -1;
      case 2:
         if ((active0 & 0x404000000L) != 0L)
         {
            if (jjmatchedPos != 2)
            {
               jjmatchedKind = 77;
               jjmatchedPos = 2;
            }
            return 2;
         }
         if ((active0 & 0x3bf3eed00cL) != 0L || (active1 & 0x7L) != 0L)
            return 2;
         if ((active0 & 0x240000000000000L) != 0L)
            return 16;
         if ((active0 & 0x1a000c000000300L) != 0L)
         {
            if (jjmatchedPos != 2)
            {
               jjmatchedKind = 77;
               jjmatchedPos = 2;
            }
            return 16;
         }
         return -1;
      case 3:
         if ((active0 & 0x1020000000L) != 0L)
            return 2;
         if ((active0 & 0x1a0004000000300L) != 0L)
         {
            jjmatchedKind = 77;
            jjmatchedPos = 3;
            return 16;
         }
         if ((active0 & 0x8000000000L) != 0L)
            return 16;
         if ((active0 & 0x404000000L) != 0L)
         {
            jjmatchedKind = 77;
            jjmatchedPos = 3;
            return 2;
         }
         return -1;
      case 4:
         if ((active0 & 0x200L) != 0L)
         {
            jjmatchedKind = 77;
            jjmatchedPos = 4;
            return 2;
         }
         if ((active0 & 0x404000000L) != 0L)
            return 2;
         if ((active0 & 0x120004000000100L) != 0L)
         {
            jjmatchedKind = 77;
            jjmatchedPos = 4;
            return 16;
         }
         if ((active0 & 0x80000000000000L) != 0L)
            return 16;
         return -1;
      case 5:
         if ((active0 & 0x300L) != 0L)
         {
            jjmatchedKind = 77;
            jjmatchedPos = 5;
            return 2;
         }
         if ((active0 & 0x100004000000000L) != 0L)
         {
            jjmatchedKind = 77;
            jjmatchedPos = 5;
            return 16;
         }
         if ((active0 & 0x20000000000000L) != 0L)
            return 16;
         return -1;
      case 6:
         if ((active0 & 0x4000000000L) != 0L)
         {
            jjmatchedKind = 77;
            jjmatchedPos = 6;
            return 16;
         }
         if ((active0 & 0x300L) != 0L)
         {
            jjmatchedKind = 77;
            jjmatchedPos = 6;
            return 2;
         }
         if ((active0 & 0x100000000000000L) != 0L)
            return 16;
         return -1;
      case 7:
         if ((active0 & 0x200L) != 0L)
            return 2;
         if ((active0 & 0x100L) != 0L)
         {
            jjmatchedKind = 77;
            jjmatchedPos = 7;
            return 2;
         }
         if ((active0 & 0x4000000000L) != 0L)
            return 16;
         return -1;
      default :
         return -1;
   }
}
private final int jjStartNfa_0(int pos, long active0, long active1){
   return jjMoveNfa_0(jjStopStringLiteralDfa_0(pos, active0, active1), pos + 1);
}
private int jjStopAtPos(int pos, int kind)
{
   jjmatchedKind = kind;
   jjmatchedPos = pos;
   return pos + 1;
}
private int jjMoveStringLiteralDfa0_0(){
   switch(curChar)
   {
      case 33:
         jjmatchedKind = 27;
         return jjMoveStringLiteralDfa1_0(0x40000000000L, 0x0L);
      case 35:
         return jjStopAtPos(0, 4);
      case 38:
         jjmatchedKind = 5;
         return jjMoveStringLiteralDfa1_0(0x20000000000L, 0x0L);
      case 40:
         return jjStopAtPos(0, 10);
      case 41:
         return jjStopAtPos(0, 11);
      case 42:
         return jjStopAtPos(0, 50);
      case 43:
         return jjStopAtPos(0, 48);
      case 44:
         return jjStopAtPos(0, 1);
      case 45:
         return jjStopAtPos(0, 49);
      case 59:
         return jjStopAtPos(0, 51);
      case 60:
         jjmatchedKind = 44;
         return jjMoveStringLiteralDfa1_0(0x200000000000L, 0x0L);
      case 61:
         jjmatchedKind = 13;
         return jjMoveStringLiteralDfa1_0(0x80000000000L, 0x0L);
      case 62:
         jjmatchedKind = 46;
         return jjMoveStringLiteralDfa1_0(0x800000000000L, 0x0L);
      case 65:
         return jjMoveStringLiteralDfa1_0(0xc000L, 0x0L);
      case 66:
         jjmatchedKind = 16;
         return jjMoveStringLiteralDfa1_0(0xfe0000L, 0x0L);
      case 67:
         return jjMoveStringLiteralDfa1_0(0x1000000L, 0x0L);
      case 68:
         return jjMoveStringLiteralDfa1_0(0x1000L, 0x0L);
      case 69:
         return jjMoveStringLiteralDfa1_0(0x2000000L, 0x0L);
      case 76:
         return jjMoveStringLiteralDfa1_0(0x100000003400000cL, 0x0L);
      case 77:
         return jjMoveStringLiteralDfa1_0(0x1c0000000L, 0x0L);
      case 79:
         return jjMoveStringLiteralDfa1_0(0x200000000L, 0x0L);
      case 80:
         return jjMoveStringLiteralDfa1_0(0x2000000000000000L, 0x0L);
      case 82:
         return jjMoveStringLiteralDfa1_0(0xc000000000000000L, 0x7ffL);
      case 83:
         return jjMoveStringLiteralDfa1_0(0x3c00000000L, 0x800L);
      case 91:
         return jjStopAtPos(0, 58);
      case 93:
         return jjStopAtPos(0, 59);
      case 98:
         return jjMoveStringLiteralDfa1_0(0x100000000000000L, 0x0L);
      case 101:
         return jjMoveStringLiteralDfa1_0(0x8000000000L, 0x0L);
      case 102:
         return jjMoveStringLiteralDfa1_0(0x4000000100L, 0x0L);
      case 105:
         return jjMoveStringLiteralDfa1_0(0x210000000000000L, 0x0L);
      case 114:
         return jjMoveStringLiteralDfa1_0(0x20000000000000L, 0x0L);
      case 116:
         return jjMoveStringLiteralDfa1_0(0x200L, 0x0L);
      case 118:
         return jjMoveStringLiteralDfa1_0(0x40000000000000L, 0x0L);
      case 119:
         return jjMoveStringLiteralDfa1_0(0x80000000000000L, 0x0L);
      case 123:
         return jjStopAtPos(0, 6);
      case 124:
         return jjMoveStringLiteralDfa1_0(0x10000000000L, 0x0L);
      case 125:
         return jjStopAtPos(0, 7);
      default :
         return jjMoveNfa_0(0, 0);
   }
}
private int jjMoveStringLiteralDfa1_0(long active0, long active1){
   try { curChar = input_stream.readChar(); }
   catch(java.io.IOException e) {
      jjStopStringLiteralDfa_0(0, active0, active1);
      return 1;
   }
   switch(curChar)
   {
      case 38:
         if ((active0 & 0x20000000000L) != 0L)
            return jjStopAtPos(1, 41);
         break;
      case 48:
         if ((active0 & 0x4000000000000000L) != 0L)
            return jjStartNfaWithStates_0(1, 62, 2);
         break;
      case 49:
         if ((active0 & 0x8000000000000000L) != 0L)
         {
            jjmatchedKind = 63;
            jjmatchedPos = 1;
         }
         return jjMoveStringLiteralDfa2_0(active0, 0L, active1, 0x7L);
      case 50:
         if ((active1 & 0x8L) != 0L)
            return jjStartNfaWithStates_0(1, 67, 2);
         break;
      case 51:
         if ((active1 & 0x10L) != 0L)
            return jjStartNfaWithStates_0(1, 68, 2);
         break;
      case 52:
         if ((active1 & 0x20L) != 0L)
            return jjStartNfaWithStates_0(1, 69, 2);
         break;
      case 53:
         if ((active1 & 0x40L) != 0L)
            return jjStartNfaWithStates_0(1, 70, 2);
         break;
      case 54:
         if ((active1 & 0x80L) != 0L)
            return jjStartNfaWithStates_0(1, 71, 2);
         break;
      case 55:
         if ((active1 & 0x100L) != 0L)
            return jjStartNfaWithStates_0(1, 72, 2);
         break;
      case 56:
         if ((active1 & 0x200L) != 0L)
            return jjStartNfaWithStates_0(1, 73, 2);
         break;
      case 57:
         if ((active1 & 0x400L) != 0L)
            return jjStartNfaWithStates_0(1, 74, 2);
         break;
      case 61:
         if ((active0 & 0x40000000000L) != 0L)
            return jjStopAtPos(1, 42);
         else if ((active0 & 0x80000000000L) != 0L)
            return jjStopAtPos(1, 43);
         else if ((active0 & 0x200000000000L) != 0L)
            return jjStopAtPos(1, 45);
         else if ((active0 & 0x800000000000L) != 0L)
            return jjStopAtPos(1, 47);
         break;
      case 67:
         if ((active0 & 0x2000000000000000L) != 0L)
            return jjStartNfaWithStates_0(1, 61, 2);
         return jjMoveStringLiteralDfa2_0(active0, 0x1000L, active1, 0L);
      case 68:
         return jjMoveStringLiteralDfa2_0(active0, 0x34004000L, active1, 0L);
      case 69:
         return jjMoveStringLiteralDfa2_0(active0, 0x20000L, active1, 0L);
      case 71:
         return jjMoveStringLiteralDfa2_0(active0, 0xc0000L, active1, 0L);
      case 76:
         if ((active0 & 0x100000L) != 0L)
         {
            jjmatchedKind = 20;
            jjmatchedPos = 1;
         }
         return jjMoveStringLiteralDfa2_0(active0, 0x600000L, active1, 0L);
      case 77:
         return jjMoveStringLiteralDfa2_0(active0, 0x1000000L, active1, 0L);
      case 78:
         return jjMoveStringLiteralDfa2_0(active0, 0x808000L, active1, 0L);
      case 79:
         return jjMoveStringLiteralDfa2_0(active0, 0x42000000L, active1, 0L);
      case 80:
         if ((active1 & 0x800L) != 0L)
            return jjStartNfaWithStates_0(1, 75, 2);
         break;
      case 82:
         if ((active0 & 0x1000000000000000L) != 0L)
            return jjStartNfaWithStates_0(1, 60, 2);
         return jjMoveStringLiteralDfa2_0(active0, 0x200000000L, active1, 0L);
      case 83:
         return jjMoveStringLiteralDfa2_0(active0, 0xcL, active1, 0L);
      case 84:
         return jjMoveStringLiteralDfa2_0(active0, 0x1c00000000L, active1, 0L);
      case 85:
         return jjMoveStringLiteralDfa2_0(active0, 0x2080000000L, active1, 0L);
      case 86:
         return jjMoveStringLiteralDfa2_0(active0, 0x100000000L, active1, 0L);
      case 97:
         return jjMoveStringLiteralDfa2_0(active0, 0x40000000000100L, active1, 0L);
      case 101:
         return jjMoveStringLiteralDfa2_0(active0, 0x20000000000000L, active1, 0L);
      case 102:
         if ((active0 & 0x10000000000000L) != 0L)
            return jjStartNfaWithStates_0(1, 52, 16);
         break;
      case 104:
         return jjMoveStringLiteralDfa2_0(active0, 0x80000000000000L, active1, 0L);
      case 108:
         return jjMoveStringLiteralDfa2_0(active0, 0x8000000000L, active1, 0L);
      case 110:
         return jjMoveStringLiteralDfa2_0(active0, 0x200000000000000L, active1, 0L);
      case 111:
         return jjMoveStringLiteralDfa2_0(active0, 0x100000000000000L, active1, 0L);
      case 114:
         return jjMoveStringLiteralDfa2_0(active0, 0x200L, active1, 0L);
      case 117:
         return jjMoveStringLiteralDfa2_0(active0, 0x4000000000L, active1, 0L);
      case 124:
         if ((active0 & 0x10000000000L) != 0L)
            return jjStopAtPos(1, 40);
         break;
      default :
         break;
   }
   return jjStartNfa_0(0, active0, active1);
}
private int jjMoveStringLiteralDfa2_0(long old0, long active0, long old1, long active1){
   if (((active0 &= old0) | (active1 &= old1)) == 0L)
      return jjStartNfa_0(0, old0, old1);
   try { curChar = input_stream.readChar(); }
   catch(java.io.IOException e) {
      jjStopStringLiteralDfa_0(1, active0, active1);
      return 2;
   }
   switch(curChar)
   {
      case 48:
         if ((active1 & 0x1L) != 0L)
            return jjStartNfaWithStates_0(2, 64, 2);
         break;
      case 49:
         if ((active1 & 0x2L) != 0L)
            return jjStartNfaWithStates_0(2, 65, 2);
         break;
      case 50:
         if ((active1 & 0x4L) != 0L)
            return jjStartNfaWithStates_0(2, 66, 2);
         break;
      case 66:
         if ((active0 & 0x2000000000L) != 0L)
            return jjStartNfaWithStates_0(2, 37, 2);
         break;
      case 68:
         if ((active0 & 0x4000L) != 0L)
            return jjStartNfaWithStates_0(2, 14, 2);
         else if ((active0 & 0x8000L) != 0L)
            return jjStartNfaWithStates_0(2, 15, 2);
         break;
      case 69:
         if ((active0 & 0x40000L) != 0L)
            return jjStartNfaWithStates_0(2, 18, 2);
         else if ((active0 & 0x200000L) != 0L)
            return jjStartNfaWithStates_0(2, 21, 2);
         else if ((active0 & 0x800000L) != 0L)
            return jjStartNfaWithStates_0(2, 23, 2);
         break;
      case 73:
         if ((active0 & 0x1000L) != 0L)
            return jjStartNfaWithStates_0(2, 12, 2);
         break;
      case 76:
         if ((active0 & 0x4L) != 0L)
            return jjStartNfaWithStates_0(2, 2, 2);
         else if ((active0 & 0x80000000L) != 0L)
            return jjStartNfaWithStates_0(2, 31, 2);
         break;
      case 77:
         return jjMoveStringLiteralDfa3_0(active0, 0x404000000L, active1, 0L);
      case 78:
         if ((active0 & 0x100000000L) != 0L)
            return jjStartNfaWithStates_0(2, 32, 2);
         break;
      case 80:
         if ((active0 & 0x1000000L) != 0L)
            return jjStartNfaWithStates_0(2, 24, 2);
         break;
      case 81:
         if ((active0 & 0x20000L) != 0L)
            return jjStartNfaWithStates_0(2, 17, 2);
         break;
      case 82:
         if ((active0 & 0x8L) != 0L)
            return jjStartNfaWithStates_0(2, 3, 2);
         else if ((active0 & 0x2000000L) != 0L)
            return jjStartNfaWithStates_0(2, 25, 2);
         else if ((active0 & 0x10000000L) != 0L)
         {
            jjmatchedKind = 28;
            jjmatchedPos = 2;
         }
         else if ((active0 & 0x200000000L) != 0L)
            return jjStartNfaWithStates_0(2, 33, 2);
         else if ((active0 & 0x800000000L) != 0L)
         {
            jjmatchedKind = 35;
            jjmatchedPos = 2;
         }
         return jjMoveStringLiteralDfa3_0(active0, 0x1020000000L, active1, 0L);
      case 84:
         if ((active0 & 0x80000L) != 0L)
            return jjStartNfaWithStates_0(2, 19, 2);
         else if ((active0 & 0x400000L) != 0L)
            return jjStartNfaWithStates_0(2, 22, 2);
         break;
      case 86:
         if ((active0 & 0x40000000L) != 0L)
            return jjStartNfaWithStates_0(2, 30, 2);
         break;
      case 105:
         return jjMoveStringLiteralDfa3_0(active0, 0x80000000000000L, active1, 0L);
      case 108:
         return jjMoveStringLiteralDfa3_0(active0, 0x100L, active1, 0L);
      case 110:
         return jjMoveStringLiteralDfa3_0(active0, 0x4000000000L, active1, 0L);
      case 111:
         return jjMoveStringLiteralDfa3_0(active0, 0x100000000000000L, active1, 0L);
      case 114:
         if ((active0 & 0x40000000000000L) != 0L)
            return jjStartNfaWithStates_0(2, 54, 16);
         break;
      case 115:
         return jjMoveStringLiteralDfa3_0(active0, 0x8000000000L, active1, 0L);
      case 116:
         if ((active0 & 0x200000000000000L) != 0L)
            return jjStartNfaWithStates_0(2, 57, 16);
         return jjMoveStringLiteralDfa3_0(active0, 0x20000000000000L, active1, 0L);
      case 117:
         return jjMoveStringLiteralDfa3_0(active0, 0x200L, active1, 0L);
      default :
         break;
   }
   return jjStartNfa_0(1, active0, active1);
}
private int jjMoveStringLiteralDfa3_0(long old0, long active0, long old1, long active1){
   if (((active0 &= old0) | (active1 &= old1)) == 0L)
      return jjStartNfa_0(1, old0, old1);
   try { curChar = input_stream.readChar(); }
   catch(java.io.IOException e) {
      jjStopStringLiteralDfa_0(2, active0, 0L);
      return 3;
   }
   switch(curChar)
   {
      case 66:
         if ((active0 & 0x20000000L) != 0L)
            return jjStartNfaWithStates_0(3, 29, 2);
         else if ((active0 & 0x1000000000L) != 0L)
            return jjStartNfaWithStates_0(3, 36, 2);
         break;
      case 70:
         return jjMoveStringLiteralDfa4_0(active0, 0x404000000L);
      case 99:
         return jjMoveStringLiteralDfa4_0(active0, 0x4000000000L);
      case 101:
         if ((active0 & 0x8000000000L) != 0L)
            return jjStartNfaWithStates_0(3, 39, 16);
         return jjMoveStringLiteralDfa4_0(active0, 0x200L);
      case 108:
         return jjMoveStringLiteralDfa4_0(active0, 0x180000000000000L);
      case 115:
         return jjMoveStringLiteralDfa4_0(active0, 0x100L);
      case 117:
         return jjMoveStringLiteralDfa4_0(active0, 0x20000000000000L);
      default :
         break;
   }
   return jjStartNfa_0(2, active0, 0L);
}
private int jjMoveStringLiteralDfa4_0(long old0, long active0){
   if (((active0 &= old0)) == 0L)
      return jjStartNfa_0(2, old0, 0L);
   try { curChar = input_stream.readChar(); }
   catch(java.io.IOException e) {
      jjStopStringLiteralDfa_0(3, active0, 0L);
      return 4;
   }
   switch(curChar)
   {
      case 66:
         return jjMoveStringLiteralDfa5_0(active0, 0x200L);
      case 68:
         if ((active0 & 0x4000000L) != 0L)
            return jjStartNfaWithStates_0(4, 26, 2);
         else if ((active0 & 0x400000000L) != 0L)
            return jjStartNfaWithStates_0(4, 34, 2);
         break;
      case 101:
         if ((active0 & 0x80000000000000L) != 0L)
            return jjStartNfaWithStates_0(4, 55, 16);
         return jjMoveStringLiteralDfa5_0(active0, 0x100000000000100L);
      case 114:
         return jjMoveStringLiteralDfa5_0(active0, 0x20000000000000L);
      case 116:
         return jjMoveStringLiteralDfa5_0(active0, 0x4000000000L);
      default :
         break;
   }
   return jjStartNfa_0(3, active0, 0L);
}
private int jjMoveStringLiteralDfa5_0(long old0, long active0){
   if (((active0 &= old0)) == 0L)
      return jjStartNfa_0(3, old0, 0L);
   try { curChar = input_stream.readChar(); }
   catch(java.io.IOException e) {
      jjStopStringLiteralDfa_0(4, active0, 0L);
      return 5;
   }
   switch(curChar)
   {
      case 66:
         return jjMoveStringLiteralDfa6_0(active0, 0x100L);
      case 97:
         return jjMoveStringLiteralDfa6_0(active0, 0x100000000000000L);
      case 105:
         return jjMoveStringLiteralDfa6_0(active0, 0x4000000000L);
      case 110:
         if ((active0 & 0x20000000000000L) != 0L)
            return jjStartNfaWithStates_0(5, 53, 16);
         break;
      case 111:
         return jjMoveStringLiteralDfa6_0(active0, 0x200L);
      default :
         break;
   }
   return jjStartNfa_0(4, active0, 0L);
}
private int jjMoveStringLiteralDfa6_0(long old0, long active0){
   if (((active0 &= old0)) == 0L)
      return jjStartNfa_0(4, old0, 0L);
   try { curChar = input_stream.readChar(); }
   catch(java.io.IOException e) {
      jjStopStringLiteralDfa_0(5, active0, 0L);
      return 6;
   }
   switch(curChar)
   {
      case 110:
         if ((active0 & 0x100000000000000L) != 0L)
            return jjStartNfaWithStates_0(6, 56, 16);
         break;
      case 111:
         return jjMoveStringLiteralDfa7_0(active0, 0x4000000300L);
      default :
         break;
   }
   return jjStartNfa_0(5, active0, 0L);
}
private int jjMoveStringLiteralDfa7_0(long old0, long active0){
   if (((active0 &= old0)) == 0L)
      return jjStartNfa_0(5, old0, 0L);
   try { curChar = input_stream.readChar(); }
   catch(java.io.IOException e) {
      jjStopStringLiteralDfa_0(6, active0, 0L);
      return 7;
   }
   switch(curChar)
   {
      case 108:
         if ((active0 & 0x200L) != 0L)
            return jjStartNfaWithStates_0(7, 9, 2);
         break;
      case 110:
         if ((active0 & 0x4000000000L) != 0L)
            return jjStartNfaWithStates_0(7, 38, 16);
         break;
      case 111:
         return jjMoveStringLiteralDfa8_0(active0, 0x100L);
      default :
         break;
   }
   return jjStartNfa_0(6, active0, 0L);
}
private int jjMoveStringLiteralDfa8_0(long old0, long active0){
   if (((active0 &= old0)) == 0L)
      return jjStartNfa_0(6, old0, 0L);
   try { curChar = input_stream.readChar(); }
   catch(java.io.IOException e) {
      jjStopStringLiteralDfa_0(7, active0, 0L);
      return 8;
   }
   switch(curChar)
   {
      case 108:
         if ((active0 & 0x100L) != 0L)
            return jjStartNfaWithStates_0(8, 8, 2);
         break;
      default :
         break;
   }
   return jjStartNfa_0(7, active0, 0L);
}
private int jjStartNfaWithStates_0(int pos, int kind, int state)
{
   jjmatchedKind = kind;
   jjmatchedPos = pos;
   try { curChar = input_stream.readChar(); }
   catch(java.io.IOException e) { return pos + 1; }
   return jjMoveNfa_0(state, pos + 1);
}
static final long[] jjbitVec0 = {
   0x0L, 0x0L, 0xffffffffffffffffL, 0xffffffffffffffffL
};
private int jjMoveNfa_0(int startState, int curPos)
{
   int startsAt = 0;
   jjnewStateCnt = 16;
   int i = 1;
   jjstateSet[0] = startState;
   int kind = 0x7fffffff;
   for (;;)
   {
      if (++jjround == 0x7fffffff)
         ReInitRounds();
      if (curChar < 64)
      {
         long l = 1L << curChar;
         do
         {
            switch(jjstateSet[--i])
            {
               case 0:
                  if ((0x3ff000000000000L & l) != 0L)
                  {
                     if (kind > 78)
                        kind = 78;
                     { jjCheckNAdd(3); }
                  }
                  else if ((0x100002600L & l) != 0L)
                  {
                     if (kind > 76)
                        kind = 76;
                  }
                  else if (curChar == 47)
                     { jjAddStates(0, 1); }
                  else if (curChar == 36)
                  {
                     if (kind > 77)
                        kind = 77;
                     { jjCheckNAdd(2); }
                  }
                  break;
               case 16:
               case 2:
                  if ((0x3ff001000000000L & l) == 0L)
                     break;
                  if (kind > 77)
                     kind = 77;
                  { jjCheckNAdd(2); }
                  break;
               case 1:
                  if (curChar != 36)
                     break;
                  if (kind > 77)
                     kind = 77;
                  { jjCheckNAdd(2); }
                  break;
               case 3:
                  if ((0x3ff000000000000L & l) == 0L)
                     break;
                  if (kind > 78)
                     kind = 78;
                  { jjCheckNAdd(3); }
                  break;
               case 6:
                  if ((0x3ff000000000000L & l) == 0L)
                     break;
                  if (kind > 82)
                     kind = 82;
                  { jjAddStates(2, 3); }
                  break;
               case 7:
                  if (curChar == 47)
                     { jjAddStates(0, 1); }
                  break;
               case 8:
                  if (curChar != 47)
                     break;
                  if (kind > 76)
                     kind = 76;
                  { jjCheckNAdd(9); }
                  break;
               case 9:
                  if ((0xfffffffffffffbffL & l) == 0L)
                     break;
                  if (kind > 76)
                     kind = 76;
                  { jjCheckNAdd(9); }
                  break;
               case 10:
                  if (curChar == 42)
                     { jjCheckNAddStates(4, 6); }
                  break;
               case 11:
                  if ((0xfffffbffffffffffL & l) != 0L)
                     { jjCheckNAddStates(4, 6); }
                  break;
               case 12:
                  if (curChar == 42)
                     jjstateSet[jjnewStateCnt++] = 13;
                  break;
               case 13:
                  if ((0xffff7fffffffffffL & l) != 0L)
                     { jjCheckNAddStates(4, 6); }
                  break;
               case 14:
                  if (curChar == 47 && kind > 76)
                     kind = 76;
                  break;
               case 15:
                  if (curChar == 42)
                     jjstateSet[jjnewStateCnt++] = 14;
                  break;
               default : break;
            }
         } while(i != startsAt);
      }
      else if (curChar < 128)
      {
         long l = 1L << (curChar & 077);
         do
         {
            switch(jjstateSet[--i])
            {
               case 0:
                  if ((0x7fffffe87fffffeL & l) != 0L)
                  {
                     if (kind > 77)
                        kind = 77;
                     { jjCheckNAdd(2); }
                  }
                  if ((0x7fffffe00000000L & l) != 0L)
                  {
                     if (kind > 82)
                        kind = 82;
                     { jjCheckNAddTwoStates(4, 5); }
                  }
                  break;
               case 16:
                  if ((0x7fffffe87fffffeL & l) != 0L)
                  {
                     if (kind > 77)
                        kind = 77;
                     { jjCheckNAdd(2); }
                  }
                  if ((0x7fffffe00000000L & l) != 0L)
                  {
                     if (kind > 82)
                        kind = 82;
                     { jjCheckNAddTwoStates(4, 5); }
                  }
                  else if (curChar == 95)
                     jjstateSet[jjnewStateCnt++] = 6;
                  break;
               case 1:
                  if ((0x7fffffe87fffffeL & l) == 0L)
                     break;
                  if (kind > 77)
                     kind = 77;
                  { jjCheckNAdd(2); }
                  break;
               case 2:
                  if ((0x7fffffe87fffffeL & l) == 0L)
                     break;
                  if (kind > 77)
                     kind = 77;
                  { jjCheckNAdd(2); }
                  break;
               case 4:
                  if ((0x7fffffe00000000L & l) == 0L)
                     break;
                  if (kind > 82)
                     kind = 82;
                  { jjCheckNAddTwoStates(4, 5); }
                  break;
               case 5:
                  if (curChar == 95)
                     jjstateSet[jjnewStateCnt++] = 6;
                  break;
               case 9:
                  if (kind > 76)
                     kind = 76;
                  jjstateSet[jjnewStateCnt++] = 9;
                  break;
               case 11:
               case 13:
                  { jjCheckNAddStates(4, 6); }
                  break;
               default : break;
            }
         } while(i != startsAt);
      }
      else
      {
         int i2 = (curChar & 0xff) >> 6;
         long l2 = 1L << (curChar & 077);
         do
         {
            switch(jjstateSet[--i])
            {
               case 9:
                  if ((jjbitVec0[i2] & l2) == 0L)
                     break;
                  if (kind > 76)
                     kind = 76;
                  jjstateSet[jjnewStateCnt++] = 9;
                  break;
               case 11:
               case 13:
                  if ((jjbitVec0[i2] & l2) != 0L)
                     { jjCheckNAddStates(4, 6); }
                  break;
               default : break;
            }
         } while(i != startsAt);
      }
      if (kind != 0x7fffffff)
      {
         jjmatchedKind = kind;
         jjmatchedPos = curPos;
         kind = 0x7fffffff;
      }
      ++curPos;
      if ((i = jjnewStateCnt) == (startsAt = 16 - (jjnewStateCnt = startsAt)))
         return curPos;
      try { curChar = input_stream.readChar(); }
      catch(java.io.IOException e) { return curPos; }
   }
}
static final int[] jjnextStates = {
   8, 10, 5, 6, 11, 12, 15, 
};

/** Token literal values. */
public static final String[] jjstrLiteralImages = {
"", "\54", "\114\123\114", "\114\123\122", "\43", "\46", "\173", "\175", 
"\146\141\154\163\145\102\157\157\154", "\164\162\165\145\102\157\157\154", "\50", "\51", "\104\103\111", "\75", 
"\101\104\104", "\101\116\104", "\102", "\102\105\121", "\102\107\105", "\102\107\124", 
"\102\114", "\102\114\105", "\102\114\124", "\102\116\105", "\103\115\120", 
"\105\117\122", "\114\104\115\106\104", "\41", "\114\104\122", "\114\104\122\102", 
"\115\117\126", "\115\125\114", "\115\126\116", "\117\122\122", "\123\124\115\106\104", 
"\123\124\122", "\123\124\122\102", "\123\125\102", "\146\165\156\143\164\151\157\156", 
"\145\154\163\145", "\174\174", "\46\46", "\41\75", "\75\75", "\74", "\74\75", "\76", "\76\75", 
"\53", "\55", "\52", "\73", "\151\146", "\162\145\164\165\162\156", "\166\141\162", 
"\167\150\151\154\145", "\142\157\157\154\145\141\156", "\151\156\164", "\133", "\135", "\114\122", 
"\120\103", "\122\60", "\122\61", "\122\61\60", "\122\61\61", "\122\61\62", "\122\62", 
"\122\63", "\122\64", "\122\65", "\122\66", "\122\67", "\122\70", "\122\71", "\123\120", 
null, null, null, null, null, null, null, };
protected Token jjFillToken()
{
   final Token t;
   final String curTokenImage;
   final int beginLine;
   final int endLine;
   final int beginColumn;
   final int endColumn;
   String im = jjstrLiteralImages[jjmatchedKind];
   curTokenImage = (im == null) ? input_stream.GetImage() : im;
   beginLine = input_stream.getBeginLine();
   beginColumn = input_stream.getBeginColumn();
   endLine = input_stream.getEndLine();
   endColumn = input_stream.getEndColumn();
   t = Token.newToken(jjmatchedKind, curTokenImage);

   t.beginLine = beginLine;
   t.endLine = endLine;
   t.beginColumn = beginColumn;
   t.endColumn = endColumn;

   return t;
}

int curLexState = 0;
int defaultLexState = 0;
int jjnewStateCnt;
int jjround;
int jjmatchedPos;
int jjmatchedKind;

/** Get the next Token. */
public Token getNextToken() 
{
  Token matchedToken;
  int curPos = 0;

  EOFLoop :
  for (;;)
  {
   try
   {
      curChar = input_stream.BeginToken();
   }
   catch(java.io.IOException e)
   {
      jjmatchedKind = 0;
      jjmatchedPos = -1;
      matchedToken = jjFillToken();
      return matchedToken;
   }

   jjmatchedKind = 0x7fffffff;
   jjmatchedPos = 0;
   curPos = jjMoveStringLiteralDfa0_0();
   if (jjmatchedKind != 0x7fffffff)
   {
      if (jjmatchedPos + 1 < curPos)
         input_stream.backup(curPos - jjmatchedPos - 1);
      if ((jjtoToken[jjmatchedKind >> 6] & (1L << (jjmatchedKind & 077))) != 0L)
      {
         matchedToken = jjFillToken();
         return matchedToken;
      }
      else
      {
         continue EOFLoop;
      }
   }
   int error_line = input_stream.getEndLine();
   int error_column = input_stream.getEndColumn();
   String error_after = null;
   boolean EOFSeen = false;
   try { input_stream.readChar(); input_stream.backup(1); }
   catch (java.io.IOException e1) {
      EOFSeen = true;
      error_after = curPos <= 1 ? "" : input_stream.GetImage();
      if (curChar == '\n' || curChar == '\r') {
         error_line++;
         error_column = 0;
      }
      else
         error_column++;
   }
   if (!EOFSeen) {
      input_stream.backup(1);
      error_after = curPos <= 1 ? "" : input_stream.GetImage();
   }
   throw new TokenMgrError(EOFSeen, curLexState, error_line, error_column, error_after, curChar, TokenMgrError.LEXICAL_ERROR);
  }
}

private void jjCheckNAdd(int state)
{
   if (jjrounds[state] != jjround)
   {
      jjstateSet[jjnewStateCnt++] = state;
      jjrounds[state] = jjround;
   }
}
private void jjAddStates(int start, int end)
{
   do {
      jjstateSet[jjnewStateCnt++] = jjnextStates[start];
   } while (start++ != end);
}
private void jjCheckNAddTwoStates(int state1, int state2)
{
   jjCheckNAdd(state1);
   jjCheckNAdd(state2);
}

private void jjCheckNAddStates(int start, int end)
{
   do {
      jjCheckNAdd(jjnextStates[start]);
   } while (start++ != end);
}

    /** Constructor. */
    public Pr3BaseParserTokenManager(SimpleCharStream stream){

      if (SimpleCharStream.staticFlag)
            throw new Error("ERROR: Cannot use a static CharStream class with a non-static lexical analyzer.");

    input_stream = stream;
  }

  /** Constructor. */
  public Pr3BaseParserTokenManager (SimpleCharStream stream, int lexState){
    ReInit(stream);
    SwitchTo(lexState);
  }

  /** Reinitialise parser. */
  public void ReInit(SimpleCharStream stream)
  {
    jjmatchedPos = jjnewStateCnt = 0;
    curLexState = defaultLexState;
    input_stream = stream;
    ReInitRounds();
  }

  private void ReInitRounds()
  {
    int i;
    jjround = 0x80000001;
    for (i = 16; i-- > 0;)
      jjrounds[i] = 0x80000000;
  }

  /** Reinitialise parser. */
  public void ReInit(SimpleCharStream stream, int lexState)
  {
    ReInit(stream);
    SwitchTo(lexState);
  }

  /** Switch to specified lex state. */
  public void SwitchTo(int lexState)
  {
    if (lexState >= 1 || lexState < 0)
      throw new TokenMgrError("Error: Ignoring invalid lexical state : " + lexState + ". State unchanged.", TokenMgrError.INVALID_LEXICAL_STATE);
    else
      curLexState = lexState;
  }

/** Lexer state names. */
public static final String[] lexStateNames = {
   "DEFAULT",
};
static final long[] jjtoToken = {
   0xffffffffffffffffL, 0x46fffL, 
};
static final long[] jjtoSkip = {
   0x0L, 0x1000L, 
};
    protected SimpleCharStream  input_stream;

    private final int[] jjrounds = new int[16];
    private final int[] jjstateSet = new int[2 * 16];

    
    protected char curChar;
}
