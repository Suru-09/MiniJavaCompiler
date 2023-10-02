/* MiniJavaParserTokenManager.cc */
#include "MiniJavaParserTokenManager.h"
#include "TokenMgrError.h"
#include "SimpleNode.h"
static const unsigned long long jjbitVec0[] = {
   0x0ULL, 0x0ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL
};
static const int jjnextStates[] = {
   8, 10, 5, 
};
static JJChar jjstrLiteralChars_0[] = {0};
static JJChar jjstrLiteralChars_1[] = {0};
static JJChar jjstrLiteralChars_2[] = {0};
static JJChar jjstrLiteralChars_3[] = {0};
static JJChar jjstrLiteralChars_4[] = {0};
static JJChar jjstrLiteralChars_5[] = {0};
static JJChar jjstrLiteralChars_6[] = {0};

static JJChar jjstrLiteralChars_7[] = {0};
static JJChar jjstrLiteralChars_8[] = {0};
static JJChar jjstrLiteralChars_9[] = {0};
static JJChar jjstrLiteralChars_10[] = {0};
static JJChar jjstrLiteralChars_11[] = {0};
static JJChar jjstrLiteralChars_12[] = {0};
static JJChar jjstrLiteralChars_13[] = {0};

static JJChar jjstrLiteralChars_14[] = {0x69, 0x6e, 0x74, 0};

static JJChar jjstrLiteralChars_15[] = {0x62, 0x6f, 0x6f, 0x6c, 0x65, 0x61, 0x6e, 0};
static JJChar jjstrLiteralChars_16[] = {0x63, 0x6c, 0x61, 0x73, 0x73, 0};

static JJChar jjstrLiteralChars_17[] = {0x70, 0x75, 0x62, 0x6c, 0x69, 0x63, 0};
static JJChar jjstrLiteralChars_18[] = {0x73, 0x74, 0x61, 0x74, 0x69, 0x63, 0};

static JJChar jjstrLiteralChars_19[] = {0x76, 0x6f, 0x69, 0x64, 0};
static JJChar jjstrLiteralChars_20[] = {0x6d, 0x61, 0x69, 0x6e, 0};

static JJChar jjstrLiteralChars_21[] = {0x53, 0x74, 0x72, 0x69, 0x6e, 0x67, 0};

static JJChar jjstrLiteralChars_22[] = {0x65, 0x78, 0x74, 0x65, 0x6e, 0x64, 0x73, 0};
static JJChar jjstrLiteralChars_23[] = {0x74, 0x72, 0x75, 0x65, 0};

static JJChar jjstrLiteralChars_24[] = {0x66, 0x61, 0x6c, 0x73, 0x65, 0};
static JJChar jjstrLiteralChars_25[] = {0x74, 0x68, 0x69, 0x73, 0};

static JJChar jjstrLiteralChars_26[] = {0x6e, 0x65, 0x77, 0};
static JJChar jjstrLiteralChars_27[] = {0x69, 0x66, 0};

static JJChar jjstrLiteralChars_28[] = {0x65, 0x6c, 0x73, 0x65, 0};
static JJChar jjstrLiteralChars_29[] = {0x77, 0x68, 0x69, 0x6c, 0x65, 0};

static JJChar jjstrLiteralChars_30[] = {0x53, 0x79, 0x73, 0x74, 0x65, 0x6d, 0x2e, 0x6f, 0x75, 0x74, 0x2e, 0x70, 0x72, 0x69, 0x6e, 0x74, 0x6c, 0x6e, 0};
static JJChar jjstrLiteralChars_31[] = {0x6c, 0x65, 0x6e, 0x67, 0x74, 0x68, 0};

static JJChar jjstrLiteralChars_32[] = {0x21, 0};
static JJChar jjstrLiteralChars_33[] = {0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0};

static JJChar jjstrLiteralChars_34[] = {0x7b, 0};
static JJChar jjstrLiteralChars_35[] = {0x7d, 0};

static JJChar jjstrLiteralChars_36[] = {0x28, 0};
static JJChar jjstrLiteralChars_37[] = {0x29, 0};

static JJChar jjstrLiteralChars_38[] = {0x5b, 0};
static JJChar jjstrLiteralChars_39[] = {0x5d, 0};

static JJChar jjstrLiteralChars_40[] = {0x3b, 0};
static JJChar jjstrLiteralChars_41[] = {0x2c, 0};

static JJChar jjstrLiteralChars_42[] = {0x2e, 0};
static JJChar jjstrLiteralChars_43[] = {0x3d, 0};

static JJChar jjstrLiteralChars_44[] = {0x3d, 0x3d, 0};
static JJChar jjstrLiteralChars_45[] = {0x21, 0x3d, 0};

static JJChar jjstrLiteralChars_46[] = {0x3c, 0};
static JJChar jjstrLiteralChars_47[] = {0x3c, 0x3d, 0};

static JJChar jjstrLiteralChars_48[] = {0x3e, 0};
static JJChar jjstrLiteralChars_49[] = {0x3e, 0x3d, 0};

static JJChar jjstrLiteralChars_50[] = {0x2b, 0};
static JJChar jjstrLiteralChars_51[] = {0x2d, 0};

static JJChar jjstrLiteralChars_52[] = {0x2a, 0};
static JJChar jjstrLiteralChars_53[] = {0x2f, 0};

static JJChar jjstrLiteralChars_54[] = {0x26, 0x26, 0};
static JJChar jjstrLiteralChars_55[] = {0x7c, 0x7c, 0};
static JJChar jjstrLiteralChars_56[] = {0};
static JJChar jjstrLiteralChars_57[] = {0};
static JJChar jjstrLiteralChars_58[] = {0};
static const JJString jjstrLiteralImages[] = {
jjstrLiteralChars_0, 
jjstrLiteralChars_1, 
jjstrLiteralChars_2, 
jjstrLiteralChars_3, 
jjstrLiteralChars_4, 
jjstrLiteralChars_5, 
jjstrLiteralChars_6, 
jjstrLiteralChars_7, 
jjstrLiteralChars_8, 
jjstrLiteralChars_9, 
jjstrLiteralChars_10, 
jjstrLiteralChars_11, 
jjstrLiteralChars_12, 
jjstrLiteralChars_13, 
jjstrLiteralChars_14, 
jjstrLiteralChars_15, 
jjstrLiteralChars_16, 
jjstrLiteralChars_17, 
jjstrLiteralChars_18, 
jjstrLiteralChars_19, 
jjstrLiteralChars_20, 
jjstrLiteralChars_21, 
jjstrLiteralChars_22, 
jjstrLiteralChars_23, 
jjstrLiteralChars_24, 
jjstrLiteralChars_25, 
jjstrLiteralChars_26, 
jjstrLiteralChars_27, 
jjstrLiteralChars_28, 
jjstrLiteralChars_29, 
jjstrLiteralChars_30, 
jjstrLiteralChars_31, 
jjstrLiteralChars_32, 
jjstrLiteralChars_33, 
jjstrLiteralChars_34, 
jjstrLiteralChars_35, 
jjstrLiteralChars_36, 
jjstrLiteralChars_37, 
jjstrLiteralChars_38, 
jjstrLiteralChars_39, 
jjstrLiteralChars_40, 
jjstrLiteralChars_41, 
jjstrLiteralChars_42, 
jjstrLiteralChars_43, 
jjstrLiteralChars_44, 
jjstrLiteralChars_45, 
jjstrLiteralChars_46, 
jjstrLiteralChars_47, 
jjstrLiteralChars_48, 
jjstrLiteralChars_49, 
jjstrLiteralChars_50, 
jjstrLiteralChars_51, 
jjstrLiteralChars_52, 
jjstrLiteralChars_53, 
jjstrLiteralChars_54, 
jjstrLiteralChars_55, 
jjstrLiteralChars_56, 
jjstrLiteralChars_57, 
jjstrLiteralChars_58, 
};

/** Lexer state names. */
static const JJChar lexStateNames_arr_0[] = 
{0x44, 0x45, 0x46, 0x41, 0x55, 0x4c, 0x54, 0};
static const JJChar lexStateNames_arr_1[] = 
{0x53, 0x74, 0x61, 0x72, 0x74, 0x5f, 0x42, 0x6c, 0x6f, 0x63, 0x6b, 0x5f, 0x43, 0x6f, 0x6d, 0x6d, 0x65, 0x6e, 0x74, 0};
static const JJString lexStateNames[] = {
lexStateNames_arr_0, 
lexStateNames_arr_1, 
};

/** Lex State array. */
static const int jjnewLexState[] = {
   -1, -1, -1, -1, -1, -1, -1, 1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 
   -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 
   -1, -1, -1, -1, -1, -1, -1, -1, -1, 
};
static const unsigned long long jjtoToken[] = {
   0x7ffffffffffc401ULL, 
};
static const unsigned long long jjtoSkip[] = {
   0x3feULL, 
};

  void  MiniJavaParserTokenManager::setDebugStream(FILE *ds){ debugStream = ds; }

 int MiniJavaParserTokenManager::jjStopStringLiteralDfa_0(int pos, unsigned long long active0){
   switch (pos)
   {
      case 0:
         if ((active0 & 0x20000000000080ULL) != 0L)
            return 0;
         if ((active0 & 0x2ffffc000ULL) != 0L)
         {
            jjmatchedKind = 56;
            return 12;
         }
         return -1;
      case 1:
         if ((active0 & 0x8000000ULL) != 0L)
            return 12;
         if ((active0 & 0x2f7ffc000ULL) != 0L)
         {
            jjmatchedKind = 56;
            jjmatchedPos = 1;
            return 12;
         }
         return -1;
      case 2:
         if ((active0 & 0x4004000ULL) != 0L)
            return 12;
         if ((active0 & 0x2f3ff8000ULL) != 0L)
         {
            jjmatchedKind = 56;
            jjmatchedPos = 2;
            return 12;
         }
         return -1;
      case 3:
         if ((active0 & 0x12980000ULL) != 0L)
            return 12;
         if ((active0 & 0x2e1678000ULL) != 0L)
         {
            jjmatchedKind = 56;
            jjmatchedPos = 3;
            return 12;
         }
         return -1;
      case 4:
         if ((active0 & 0x21010000ULL) != 0L)
            return 12;
         if ((active0 & 0x2c0668000ULL) != 0L)
         {
            jjmatchedKind = 56;
            jjmatchedPos = 4;
            return 12;
         }
         return -1;
      case 5:
         if ((active0 & 0x40408000ULL) != 0L)
         {
            jjmatchedKind = 56;
            jjmatchedPos = 5;
            return 12;
         }
         if ((active0 & 0x280260000ULL) != 0L)
            return 12;
         return -1;
      case 6:
         if ((active0 & 0x40000000ULL) != 0L)
         {
            if (jjmatchedPos < 5)
            {
               jjmatchedKind = 56;
               jjmatchedPos = 5;
            }
            return -1;
         }
         if ((active0 & 0x408000ULL) != 0L)
            return 12;
         return -1;
      case 7:
         if ((active0 & 0x40000000ULL) != 0L)
         {
            if (jjmatchedPos < 5)
            {
               jjmatchedKind = 56;
               jjmatchedPos = 5;
            }
            return -1;
         }
         return -1;
      case 8:
         if ((active0 & 0x40000000ULL) != 0L)
         {
            if (jjmatchedPos < 5)
            {
               jjmatchedKind = 56;
               jjmatchedPos = 5;
            }
            return -1;
         }
         return -1;
      case 9:
         if ((active0 & 0x40000000ULL) != 0L)
         {
            if (jjmatchedPos < 5)
            {
               jjmatchedKind = 56;
               jjmatchedPos = 5;
            }
            return -1;
         }
         return -1;
      case 10:
         if ((active0 & 0x40000000ULL) != 0L)
         {
            if (jjmatchedPos < 5)
            {
               jjmatchedKind = 56;
               jjmatchedPos = 5;
            }
            return -1;
         }
         return -1;
      case 11:
         if ((active0 & 0x40000000ULL) != 0L)
         {
            if (jjmatchedPos < 5)
            {
               jjmatchedKind = 56;
               jjmatchedPos = 5;
            }
            return -1;
         }
         return -1;
      case 12:
         if ((active0 & 0x40000000ULL) != 0L)
         {
            if (jjmatchedPos < 5)
            {
               jjmatchedKind = 56;
               jjmatchedPos = 5;
            }
            return -1;
         }
         return -1;
      case 13:
         if ((active0 & 0x40000000ULL) != 0L)
         {
            if (jjmatchedPos < 5)
            {
               jjmatchedKind = 56;
               jjmatchedPos = 5;
            }
            return -1;
         }
         return -1;
      case 14:
         if ((active0 & 0x40000000ULL) != 0L)
         {
            if (jjmatchedPos < 5)
            {
               jjmatchedKind = 56;
               jjmatchedPos = 5;
            }
            return -1;
         }
         return -1;
      case 15:
         if ((active0 & 0x40000000ULL) != 0L)
         {
            if (jjmatchedPos < 5)
            {
               jjmatchedKind = 56;
               jjmatchedPos = 5;
            }
            return -1;
         }
         return -1;
      case 16:
         if ((active0 & 0x40000000ULL) != 0L)
         {
            if (jjmatchedPos < 5)
            {
               jjmatchedKind = 56;
               jjmatchedPos = 5;
            }
            return -1;
         }
         return -1;
      default :
         return -1;
   }
}

int  MiniJavaParserTokenManager::jjStartNfa_0(int pos, unsigned long long active0){
   return jjMoveNfa_0(jjStopStringLiteralDfa_0(pos, active0), pos + 1);
}

 int  MiniJavaParserTokenManager::jjStopAtPos(int pos, int kind){
   jjmatchedKind = kind;
   jjmatchedPos = pos;
   return pos + 1;
}

 int  MiniJavaParserTokenManager::jjMoveStringLiteralDfa0_0(){
   switch(curChar)
   {
      case 33:
         jjmatchedKind = 32;
         return jjMoveStringLiteralDfa1_0(0x200000000000ULL);
      case 38:
         return jjMoveStringLiteralDfa1_0(0x40000000000000ULL);
      case 40:
         return jjStopAtPos(0, 36);
      case 41:
         return jjStopAtPos(0, 37);
      case 42:
         return jjStopAtPos(0, 52);
      case 43:
         return jjStopAtPos(0, 50);
      case 44:
         return jjStopAtPos(0, 41);
      case 45:
         return jjStopAtPos(0, 51);
      case 46:
         return jjStopAtPos(0, 42);
      case 47:
         jjmatchedKind = 53;
         return jjMoveStringLiteralDfa1_0(0x80ULL);
      case 59:
         return jjStopAtPos(0, 40);
      case 60:
         jjmatchedKind = 46;
         return jjMoveStringLiteralDfa1_0(0x800000000000ULL);
      case 61:
         jjmatchedKind = 43;
         return jjMoveStringLiteralDfa1_0(0x100000000000ULL);
      case 62:
         jjmatchedKind = 48;
         return jjMoveStringLiteralDfa1_0(0x2000000000000ULL);
      case 83:
         return jjMoveStringLiteralDfa1_0(0x40200000ULL);
      case 91:
         return jjStopAtPos(0, 38);
      case 93:
         return jjStopAtPos(0, 39);
      case 98:
         return jjMoveStringLiteralDfa1_0(0x8000ULL);
      case 99:
         return jjMoveStringLiteralDfa1_0(0x10000ULL);
      case 101:
         return jjMoveStringLiteralDfa1_0(0x10400000ULL);
      case 102:
         return jjMoveStringLiteralDfa1_0(0x1000000ULL);
      case 105:
         return jjMoveStringLiteralDfa1_0(0x8004000ULL);
      case 108:
         return jjMoveStringLiteralDfa1_0(0x80000000ULL);
      case 109:
         return jjMoveStringLiteralDfa1_0(0x100000ULL);
      case 110:
         return jjMoveStringLiteralDfa1_0(0x4000000ULL);
      case 112:
         return jjMoveStringLiteralDfa1_0(0x20000ULL);
      case 114:
         return jjMoveStringLiteralDfa1_0(0x200000000ULL);
      case 115:
         return jjMoveStringLiteralDfa1_0(0x40000ULL);
      case 116:
         return jjMoveStringLiteralDfa1_0(0x2800000ULL);
      case 118:
         return jjMoveStringLiteralDfa1_0(0x80000ULL);
      case 119:
         return jjMoveStringLiteralDfa1_0(0x20000000ULL);
      case 123:
         return jjStopAtPos(0, 34);
      case 124:
         return jjMoveStringLiteralDfa1_0(0x80000000000000ULL);
      case 125:
         return jjStopAtPos(0, 35);
      default :
         return jjMoveNfa_0(2, 0);
   }
}

 int  MiniJavaParserTokenManager::jjMoveStringLiteralDfa1_0(unsigned long long active0){
   if (input_stream->endOfInput()) {
      jjStopStringLiteralDfa_0(0, active0);
      return 1;
   }
   curChar = input_stream->readChar();
   switch(curChar)
   {
      case 38:
         if ((active0 & 0x40000000000000ULL) != 0L)
            return jjStopAtPos(1, 54);
         break;
      case 42:
         if ((active0 & 0x80ULL) != 0L)
            return jjStopAtPos(1, 7);
         break;
      case 61:
         if ((active0 & 0x100000000000ULL) != 0L)
            return jjStopAtPos(1, 44);
         else if ((active0 & 0x200000000000ULL) != 0L)
            return jjStopAtPos(1, 45);
         else if ((active0 & 0x800000000000ULL) != 0L)
            return jjStopAtPos(1, 47);
         else if ((active0 & 0x2000000000000ULL) != 0L)
            return jjStopAtPos(1, 49);
         break;
      case 97:
         return jjMoveStringLiteralDfa2_0(active0, 0x1100000ULL);
      case 101:
         return jjMoveStringLiteralDfa2_0(active0, 0x284000000ULL);
      case 102:
         if ((active0 & 0x8000000ULL) != 0L)
            return jjStartNfaWithStates_0(1, 27, 12);
         break;
      case 104:
         return jjMoveStringLiteralDfa2_0(active0, 0x22000000ULL);
      case 108:
         return jjMoveStringLiteralDfa2_0(active0, 0x10010000ULL);
      case 110:
         return jjMoveStringLiteralDfa2_0(active0, 0x4000ULL);
      case 111:
         return jjMoveStringLiteralDfa2_0(active0, 0x88000ULL);
      case 114:
         return jjMoveStringLiteralDfa2_0(active0, 0x800000ULL);
      case 116:
         return jjMoveStringLiteralDfa2_0(active0, 0x240000ULL);
      case 117:
         return jjMoveStringLiteralDfa2_0(active0, 0x20000ULL);
      case 120:
         return jjMoveStringLiteralDfa2_0(active0, 0x400000ULL);
      case 121:
         return jjMoveStringLiteralDfa2_0(active0, 0x40000000ULL);
      case 124:
         if ((active0 & 0x80000000000000ULL) != 0L)
            return jjStopAtPos(1, 55);
         break;
      default :
         break;
   }
   return jjStartNfa_0(0, active0);
}

 int  MiniJavaParserTokenManager::jjMoveStringLiteralDfa2_0(unsigned long long old0, unsigned long long active0){
   if (((active0 &= old0)) == 0L)
      return jjStartNfa_0(0, old0);
   if (input_stream->endOfInput()) {
      jjStopStringLiteralDfa_0(1, active0);
      return 2;
   }
   curChar = input_stream->readChar();
   switch(curChar)
   {
      case 97:
         return jjMoveStringLiteralDfa3_0(active0, 0x50000ULL);
      case 98:
         return jjMoveStringLiteralDfa3_0(active0, 0x20000ULL);
      case 105:
         return jjMoveStringLiteralDfa3_0(active0, 0x22180000ULL);
      case 108:
         return jjMoveStringLiteralDfa3_0(active0, 0x1000000ULL);
      case 110:
         return jjMoveStringLiteralDfa3_0(active0, 0x80000000ULL);
      case 111:
         return jjMoveStringLiteralDfa3_0(active0, 0x8000ULL);
      case 114:
         return jjMoveStringLiteralDfa3_0(active0, 0x200000ULL);
      case 115:
         return jjMoveStringLiteralDfa3_0(active0, 0x50000000ULL);
      case 116:
         if ((active0 & 0x4000ULL) != 0L)
            return jjStartNfaWithStates_0(2, 14, 12);
         return jjMoveStringLiteralDfa3_0(active0, 0x200400000ULL);
      case 117:
         return jjMoveStringLiteralDfa3_0(active0, 0x800000ULL);
      case 119:
         if ((active0 & 0x4000000ULL) != 0L)
            return jjStartNfaWithStates_0(2, 26, 12);
         break;
      default :
         break;
   }
   return jjStartNfa_0(1, active0);
}

 int  MiniJavaParserTokenManager::jjMoveStringLiteralDfa3_0(unsigned long long old0, unsigned long long active0){
   if (((active0 &= old0)) == 0L)
      return jjStartNfa_0(1, old0);
   if (input_stream->endOfInput()) {
      jjStopStringLiteralDfa_0(2, active0);
      return 3;
   }
   curChar = input_stream->readChar();
   switch(curChar)
   {
      case 100:
         if ((active0 & 0x80000ULL) != 0L)
            return jjStartNfaWithStates_0(3, 19, 12);
         break;
      case 101:
         if ((active0 & 0x800000ULL) != 0L)
            return jjStartNfaWithStates_0(3, 23, 12);
         else if ((active0 & 0x10000000ULL) != 0L)
            return jjStartNfaWithStates_0(3, 28, 12);
         return jjMoveStringLiteralDfa4_0(active0, 0x400000ULL);
      case 103:
         return jjMoveStringLiteralDfa4_0(active0, 0x80000000ULL);
      case 105:
         return jjMoveStringLiteralDfa4_0(active0, 0x200000ULL);
      case 108:
         return jjMoveStringLiteralDfa4_0(active0, 0x20028000ULL);
      case 110:
         if ((active0 & 0x100000ULL) != 0L)
            return jjStartNfaWithStates_0(3, 20, 12);
         break;
      case 115:
         if ((active0 & 0x2000000ULL) != 0L)
            return jjStartNfaWithStates_0(3, 25, 12);
         return jjMoveStringLiteralDfa4_0(active0, 0x1010000ULL);
      case 116:
         return jjMoveStringLiteralDfa4_0(active0, 0x40040000ULL);
      case 117:
         return jjMoveStringLiteralDfa4_0(active0, 0x200000000ULL);
      default :
         break;
   }
   return jjStartNfa_0(2, active0);
}

 int  MiniJavaParserTokenManager::jjMoveStringLiteralDfa4_0(unsigned long long old0, unsigned long long active0){
   if (((active0 &= old0)) == 0L)
      return jjStartNfa_0(2, old0);
   if (input_stream->endOfInput()) {
      jjStopStringLiteralDfa_0(3, active0);
      return 4;
   }
   curChar = input_stream->readChar();
   switch(curChar)
   {
      case 101:
         if ((active0 & 0x1000000ULL) != 0L)
            return jjStartNfaWithStates_0(4, 24, 12);
         else if ((active0 & 0x20000000ULL) != 0L)
            return jjStartNfaWithStates_0(4, 29, 12);
         return jjMoveStringLiteralDfa5_0(active0, 0x40008000ULL);
      case 105:
         return jjMoveStringLiteralDfa5_0(active0, 0x60000ULL);
      case 110:
         return jjMoveStringLiteralDfa5_0(active0, 0x600000ULL);
      case 114:
         return jjMoveStringLiteralDfa5_0(active0, 0x200000000ULL);
      case 115:
         if ((active0 & 0x10000ULL) != 0L)
            return jjStartNfaWithStates_0(4, 16, 12);
         break;
      case 116:
         return jjMoveStringLiteralDfa5_0(active0, 0x80000000ULL);
      default :
         break;
   }
   return jjStartNfa_0(3, active0);
}

 int  MiniJavaParserTokenManager::jjMoveStringLiteralDfa5_0(unsigned long long old0, unsigned long long active0){
   if (((active0 &= old0)) == 0L)
      return jjStartNfa_0(3, old0);
   if (input_stream->endOfInput()) {
      jjStopStringLiteralDfa_0(4, active0);
      return 5;
   }
   curChar = input_stream->readChar();
   switch(curChar)
   {
      case 97:
         return jjMoveStringLiteralDfa6_0(active0, 0x8000ULL);
      case 99:
         if ((active0 & 0x20000ULL) != 0L)
            return jjStartNfaWithStates_0(5, 17, 12);
         else if ((active0 & 0x40000ULL) != 0L)
            return jjStartNfaWithStates_0(5, 18, 12);
         break;
      case 100:
         return jjMoveStringLiteralDfa6_0(active0, 0x400000ULL);
      case 103:
         if ((active0 & 0x200000ULL) != 0L)
            return jjStartNfaWithStates_0(5, 21, 12);
         break;
      case 104:
         if ((active0 & 0x80000000ULL) != 0L)
            return jjStartNfaWithStates_0(5, 31, 12);
         break;
      case 109:
         return jjMoveStringLiteralDfa6_0(active0, 0x40000000ULL);
      case 110:
         if ((active0 & 0x200000000ULL) != 0L)
            return jjStartNfaWithStates_0(5, 33, 12);
         break;
      default :
         break;
   }
   return jjStartNfa_0(4, active0);
}

 int  MiniJavaParserTokenManager::jjMoveStringLiteralDfa6_0(unsigned long long old0, unsigned long long active0){
   if (((active0 &= old0)) == 0L)
      return jjStartNfa_0(4, old0);
   if (input_stream->endOfInput()) {
      jjStopStringLiteralDfa_0(5, active0);
      return 6;
   }
   curChar = input_stream->readChar();
   switch(curChar)
   {
      case 46:
         return jjMoveStringLiteralDfa7_0(active0, 0x40000000ULL);
      case 110:
         if ((active0 & 0x8000ULL) != 0L)
            return jjStartNfaWithStates_0(6, 15, 12);
         break;
      case 115:
         if ((active0 & 0x400000ULL) != 0L)
            return jjStartNfaWithStates_0(6, 22, 12);
         break;
      default :
         break;
   }
   return jjStartNfa_0(5, active0);
}

 int  MiniJavaParserTokenManager::jjMoveStringLiteralDfa7_0(unsigned long long old0, unsigned long long active0){
   if (((active0 &= old0)) == 0L)
      return jjStartNfa_0(5, old0);
   if (input_stream->endOfInput()) {
      jjStopStringLiteralDfa_0(6, active0);
      return 7;
   }
   curChar = input_stream->readChar();
   switch(curChar)
   {
      case 111:
         return jjMoveStringLiteralDfa8_0(active0, 0x40000000ULL);
      default :
         break;
   }
   return jjStartNfa_0(6, active0);
}

 int  MiniJavaParserTokenManager::jjMoveStringLiteralDfa8_0(unsigned long long old0, unsigned long long active0){
   if (((active0 &= old0)) == 0L)
      return jjStartNfa_0(6, old0);
   if (input_stream->endOfInput()) {
      jjStopStringLiteralDfa_0(7, active0);
      return 8;
   }
   curChar = input_stream->readChar();
   switch(curChar)
   {
      case 117:
         return jjMoveStringLiteralDfa9_0(active0, 0x40000000ULL);
      default :
         break;
   }
   return jjStartNfa_0(7, active0);
}

 int  MiniJavaParserTokenManager::jjMoveStringLiteralDfa9_0(unsigned long long old0, unsigned long long active0){
   if (((active0 &= old0)) == 0L)
      return jjStartNfa_0(7, old0);
   if (input_stream->endOfInput()) {
      jjStopStringLiteralDfa_0(8, active0);
      return 9;
   }
   curChar = input_stream->readChar();
   switch(curChar)
   {
      case 116:
         return jjMoveStringLiteralDfa10_0(active0, 0x40000000ULL);
      default :
         break;
   }
   return jjStartNfa_0(8, active0);
}

 int  MiniJavaParserTokenManager::jjMoveStringLiteralDfa10_0(unsigned long long old0, unsigned long long active0){
   if (((active0 &= old0)) == 0L)
      return jjStartNfa_0(8, old0);
   if (input_stream->endOfInput()) {
      jjStopStringLiteralDfa_0(9, active0);
      return 10;
   }
   curChar = input_stream->readChar();
   switch(curChar)
   {
      case 46:
         return jjMoveStringLiteralDfa11_0(active0, 0x40000000ULL);
      default :
         break;
   }
   return jjStartNfa_0(9, active0);
}

 int  MiniJavaParserTokenManager::jjMoveStringLiteralDfa11_0(unsigned long long old0, unsigned long long active0){
   if (((active0 &= old0)) == 0L)
      return jjStartNfa_0(9, old0);
   if (input_stream->endOfInput()) {
      jjStopStringLiteralDfa_0(10, active0);
      return 11;
   }
   curChar = input_stream->readChar();
   switch(curChar)
   {
      case 112:
         return jjMoveStringLiteralDfa12_0(active0, 0x40000000ULL);
      default :
         break;
   }
   return jjStartNfa_0(10, active0);
}

 int  MiniJavaParserTokenManager::jjMoveStringLiteralDfa12_0(unsigned long long old0, unsigned long long active0){
   if (((active0 &= old0)) == 0L)
      return jjStartNfa_0(10, old0);
   if (input_stream->endOfInput()) {
      jjStopStringLiteralDfa_0(11, active0);
      return 12;
   }
   curChar = input_stream->readChar();
   switch(curChar)
   {
      case 114:
         return jjMoveStringLiteralDfa13_0(active0, 0x40000000ULL);
      default :
         break;
   }
   return jjStartNfa_0(11, active0);
}

 int  MiniJavaParserTokenManager::jjMoveStringLiteralDfa13_0(unsigned long long old0, unsigned long long active0){
   if (((active0 &= old0)) == 0L)
      return jjStartNfa_0(11, old0);
   if (input_stream->endOfInput()) {
      jjStopStringLiteralDfa_0(12, active0);
      return 13;
   }
   curChar = input_stream->readChar();
   switch(curChar)
   {
      case 105:
         return jjMoveStringLiteralDfa14_0(active0, 0x40000000ULL);
      default :
         break;
   }
   return jjStartNfa_0(12, active0);
}

 int  MiniJavaParserTokenManager::jjMoveStringLiteralDfa14_0(unsigned long long old0, unsigned long long active0){
   if (((active0 &= old0)) == 0L)
      return jjStartNfa_0(12, old0);
   if (input_stream->endOfInput()) {
      jjStopStringLiteralDfa_0(13, active0);
      return 14;
   }
   curChar = input_stream->readChar();
   switch(curChar)
   {
      case 110:
         return jjMoveStringLiteralDfa15_0(active0, 0x40000000ULL);
      default :
         break;
   }
   return jjStartNfa_0(13, active0);
}

 int  MiniJavaParserTokenManager::jjMoveStringLiteralDfa15_0(unsigned long long old0, unsigned long long active0){
   if (((active0 &= old0)) == 0L)
      return jjStartNfa_0(13, old0);
   if (input_stream->endOfInput()) {
      jjStopStringLiteralDfa_0(14, active0);
      return 15;
   }
   curChar = input_stream->readChar();
   switch(curChar)
   {
      case 116:
         return jjMoveStringLiteralDfa16_0(active0, 0x40000000ULL);
      default :
         break;
   }
   return jjStartNfa_0(14, active0);
}

 int  MiniJavaParserTokenManager::jjMoveStringLiteralDfa16_0(unsigned long long old0, unsigned long long active0){
   if (((active0 &= old0)) == 0L)
      return jjStartNfa_0(14, old0);
   if (input_stream->endOfInput()) {
      jjStopStringLiteralDfa_0(15, active0);
      return 16;
   }
   curChar = input_stream->readChar();
   switch(curChar)
   {
      case 108:
         return jjMoveStringLiteralDfa17_0(active0, 0x40000000ULL);
      default :
         break;
   }
   return jjStartNfa_0(15, active0);
}

 int  MiniJavaParserTokenManager::jjMoveStringLiteralDfa17_0(unsigned long long old0, unsigned long long active0){
   if (((active0 &= old0)) == 0L)
      return jjStartNfa_0(15, old0);
   if (input_stream->endOfInput()) {
      jjStopStringLiteralDfa_0(16, active0);
      return 17;
   }
   curChar = input_stream->readChar();
   switch(curChar)
   {
      case 110:
         if ((active0 & 0x40000000ULL) != 0L)
            return jjStopAtPos(17, 30);
         break;
      default :
         break;
   }
   return jjStartNfa_0(16, active0);
}

int MiniJavaParserTokenManager::jjStartNfaWithStates_0(int pos, int kind, int state){
   jjmatchedKind = kind;
   jjmatchedPos = pos;
   if (input_stream->endOfInput()) { return pos + 1; }
   curChar = input_stream->readChar();
   return jjMoveNfa_0(state, pos + 1);
}

int MiniJavaParserTokenManager::jjMoveNfa_0(int startState, int curPos){
   int startsAt = 0;
   jjnewStateCnt = 13;
   int i = 1;
   jjstateSet[0] = startState;
   int kind = 0x7fffffff;
   for (;;)
   {
      if (++jjround == 0x7fffffff)
         ReInitRounds();
      if (curChar < 64)
      {
         unsigned long long l = 1ULL << curChar;
         (void)l;
         do
         {
            switch(jjstateSet[--i])
            {
               case 2:
                  if ((0x3ff000000000000ULL & l) != 0L)
                  {
                     if (kind > 58)
                        kind = 58;
                  }
                  else if (curChar == 47)
                     jjstateSet[jjnewStateCnt++] = 0;
                  if ((0x3fe000000000000ULL & l) != 0L)
                  {
                     if (kind > 10)
                        kind = 10;
                     { jjCheckNAddTwoStates(4, 5); }
                  }
                  else if (curChar == 48)
                  {
                     if (kind > 10)
                        kind = 10;
                     { jjCheckNAddStates(0, 2); }
                  }
                  break;
               case 0:
                  if (curChar != 47)
                     break;
                  if (kind > 6)
                     kind = 6;
                  { jjCheckNAdd(1); }
                  break;
               case 1:
                  if ((0xffffffffffffdbffULL & l) == 0L)
                     break;
                  if (kind > 6)
                     kind = 6;
                  { jjCheckNAdd(1); }
                  break;
               case 3:
                  if ((0x3fe000000000000ULL & l) == 0L)
                     break;
                  if (kind > 10)
                     kind = 10;
                  { jjCheckNAddTwoStates(4, 5); }
                  break;
               case 4:
                  if ((0x3ff000000000000ULL & l) == 0L)
                     break;
                  if (kind > 10)
                     kind = 10;
                  { jjCheckNAddTwoStates(4, 5); }
                  break;
               case 6:
                  if ((0x3ff000000000000ULL & l) != 0L && kind > 58)
                     kind = 58;
                  break;
               case 7:
                  if (curChar != 48)
                     break;
                  if (kind > 10)
                     kind = 10;
                  { jjCheckNAddStates(0, 2); }
                  break;
               case 9:
                  if ((0x3ff000000000000ULL & l) == 0L)
                     break;
                  if (kind > 10)
                     kind = 10;
                  { jjCheckNAddTwoStates(9, 5); }
                  break;
               case 10:
                  if ((0xff000000000000ULL & l) == 0L)
                     break;
                  if (kind > 10)
                     kind = 10;
                  { jjCheckNAddTwoStates(10, 5); }
                  break;
               case 12:
                  if ((0x3ff000000000000ULL & l) == 0L)
                     break;
                  if (kind > 56)
                     kind = 56;
                  jjstateSet[jjnewStateCnt++] = 12;
                  break;
               default : break;
            }
         } while(i != startsAt);
      }
      else if (curChar < 128)
      {
         unsigned long long l = 1ULL << (curChar & 077);
         (void)l;
         do
         {
            switch(jjstateSet[--i])
            {
               case 2:
                  if ((0x7fffffe87fffffeULL & l) != 0L)
                  {
                     if (kind > 56)
                        kind = 56;
                     { jjCheckNAdd(12); }
                  }
                  if ((0x7fffffe87fffffeULL & l) != 0L)
                  {
                     if (kind > 58)
                        kind = 58;
                  }
                  break;
               case 1:
                  if (kind > 6)
                     kind = 6;
                  jjstateSet[jjnewStateCnt++] = 1;
                  break;
               case 5:
                  if ((0x100000001000ULL & l) != 0L && kind > 10)
                     kind = 10;
                  break;
               case 6:
                  if ((0x7fffffe87fffffeULL & l) != 0L && kind > 58)
                     kind = 58;
                  break;
               case 8:
                  if ((0x100000001000000ULL & l) != 0L)
                     { jjCheckNAdd(9); }
                  break;
               case 9:
                  if ((0x7e0000007eULL & l) == 0L)
                     break;
                  if (kind > 10)
                     kind = 10;
                  { jjCheckNAddTwoStates(9, 5); }
                  break;
               case 11:
               case 12:
                  if ((0x7fffffe87fffffeULL & l) == 0L)
                     break;
                  if (kind > 56)
                     kind = 56;
                  { jjCheckNAdd(12); }
                  break;
               default : break;
            }
         } while(i != startsAt);
      }
      else
      {
         int i2 = (curChar & 0xff) >> 6;
         unsigned long long l2 = 1ULL << (curChar & 077);
         do
         {
            switch(jjstateSet[--i])
            {
               case 1:
                  if ((jjbitVec0[i2] & l2) == 0L)
                     break;
                  if (kind > 6)
                     kind = 6;
                  jjstateSet[jjnewStateCnt++] = 1;
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
      if ((i = jjnewStateCnt), (jjnewStateCnt = startsAt), (i == (startsAt = 13 - startsAt)))
         return curPos;
      if (input_stream->endOfInput()) { return curPos; }
      curChar = input_stream->readChar();
   }
}

 int  MiniJavaParserTokenManager::jjMoveStringLiteralDfa0_1(){
   switch(curChar)
   {
      case 42:
         return jjMoveStringLiteralDfa1_1(0x100ULL);
      default :
         return 1;
   }
}

 int  MiniJavaParserTokenManager::jjMoveStringLiteralDfa1_1(unsigned long long active0){
   if (input_stream->endOfInput()) {
      return 1;
   }
   curChar = input_stream->readChar();
   switch(curChar)
   {
      case 47:
         if ((active0 & 0x100ULL) != 0L)
            return jjStopAtPos(1, 8);
         break;
      default :
         return 2;
   }
   return 2;
}

/** Token literal values. */

Token * MiniJavaParserTokenManager::jjFillToken(){
   Token *t;
   JJString curTokenImage;
   int beginLine   = -1;
   int endLine     = -1;
   int beginColumn = -1;
   int endColumn   = -1;
   JJString im = jjstrLiteralImages[jjmatchedKind];
   curTokenImage = (im.length() == 0) ? input_stream->GetImage() : im;
   if (input_stream->getTrackLineColumn()) {
     beginLine = input_stream->getBeginLine();
     beginColumn = input_stream->getBeginColumn();
     endLine = input_stream->getEndLine();
     endColumn = input_stream->getEndColumn();
   }
   t = Token::newToken(jjmatchedKind, curTokenImage);
   t->specialToken = nullptr;
   t->next = nullptr;

   if (input_stream->getTrackLineColumn()) {
   t->beginLine = beginLine;
   t->endLine = endLine;
   t->beginColumn = beginColumn;
   t->endColumn = endColumn;
   }

   return t;
}
const int defaultLexState = 0;
/** Get the next Token. */

Token * MiniJavaParserTokenManager::getNextToken(){
  Token *matchedToken = nullptr;
  int curPos = 0;

  for (;;)
  {
   EOFLoop: 
   if (input_stream->endOfInput())
   {
      jjmatchedKind = 0;
      jjmatchedPos = -1;
      matchedToken = jjFillToken();
      return matchedToken;
   }
   curChar = input_stream->BeginToken();

   switch(curLexState)
   {
     case 0:
       { input_stream->backup(0);
          while (curChar <= 32 && (0x100003600ULL & (1ULL << curChar)) != 0L)
       {
       if (input_stream->endOfInput()) { goto EOFLoop; }
       curChar = input_stream->BeginToken();
       }
       }
       jjmatchedKind = 0x7fffffff;
       jjmatchedPos = 0;
       curPos = jjMoveStringLiteralDfa0_0();
       break;
     case 1:
       jjmatchedKind = 0x7fffffff;
       jjmatchedPos = 0;
       curPos = jjMoveStringLiteralDfa0_1();
       if (jjmatchedPos == 0 && jjmatchedKind > 9)
       {
          jjmatchedKind = 9;
       }
       break;
   }
     if (jjmatchedKind != 0x7fffffff)
     {
        if (jjmatchedPos + 1 < curPos)
           input_stream->backup(curPos - jjmatchedPos - 1);
        if ((jjtoToken[jjmatchedKind >> 6] & (1ULL << (jjmatchedKind & 077))) != 0L)
        {
           matchedToken = jjFillToken();
       if (jjnewLexState[jjmatchedKind] != -1)
         curLexState = jjnewLexState[jjmatchedKind];
           return matchedToken;
        }
        else
        {
         if (jjnewLexState[jjmatchedKind] != -1)
           curLexState = jjnewLexState[jjmatchedKind];
           goto EOFLoop;
        }
     }
     int error_line = input_stream->getEndLine();
     int error_column = input_stream->getEndColumn();
     JJString error_after;
     bool EOFSeen = false;
     if (input_stream->endOfInput()) {
        EOFSeen = true;
        error_after = curPos <= 1 ? EMPTY : input_stream->GetImage();
        if (curChar == '\n' || curChar == '\r') {
           error_line++;
           error_column = 0;
        }
        else
           error_column++;
     }
     if (!EOFSeen) {
        error_after = curPos <= 1 ? EMPTY : input_stream->GetImage();
     }
     errorHandler->lexicalError(EOFSeen, curLexState, error_line, error_column, error_after, curChar, this);
  }
}

  /** Reinitialise parser. */
  void MiniJavaParserTokenManager::ReInit(JAVACC_CHARSTREAM *stream, int lexState) {
    clear();
    jjmatchedPos = jjnewStateCnt = 0;
    curLexState = lexState;
    input_stream = stream;
    ReInitRounds();
    debugStream = stdout; // init
    SwitchTo(lexState);
    errorHandler = new TokenManagerErrorHandler();
  }

  void MiniJavaParserTokenManager::ReInitRounds() {
    int i;
    jjround = 0x80000001;
    for (i = 13; i-- > 0;)
      jjrounds[i] = 0x80000000;
  }

  /** Switch to specified lex state. */
  void MiniJavaParserTokenManager::SwitchTo(int lexState) {
    if (lexState >= 2 || lexState < 0) {
      JJString message;
#ifdef WIDE_CHAR
      message += L"Error: Ignoring invalid lexical state : ";
      message += lexState; message += L". State unchanged.";
#else
      message += "Error: Ignoring invalid lexical state : ";
      message += lexState; message += ". State unchanged.";
#endif
      throw new TokenMgrError(message, INVALID_LEXICAL_STATE);
    } else
      curLexState = lexState;
  }

  /** Constructor. */
  MiniJavaParserTokenManager::MiniJavaParserTokenManager (JAVACC_CHARSTREAM *stream, int lexState)
  {
    input_stream = nullptr;
    ReInit(stream, lexState);
  }

  // Destructor
  MiniJavaParserTokenManager::~MiniJavaParserTokenManager () {
    clear();
  }

  // clear
  void MiniJavaParserTokenManager::clear() {
    //Since input_stream was generated outside of TokenManager
    //TokenManager should not take care of deleting it
    //if (input_stream) delete input_stream;
    if (errorHandler) delete errorHandler, errorHandler = nullptr;    
  }


