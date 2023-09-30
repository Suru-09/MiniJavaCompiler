/* MiniJavaParserTokenManager.cc */
#include "MiniJavaParserTokenManager.h"
#include "TokenMgrError.h"
static const int jjnextStates[] = {0
};
static JJChar jjstrLiteralChars_0[] = {0};
static JJChar jjstrLiteralChars_1[] = {0};
static JJChar jjstrLiteralChars_2[] = {0};
static JJChar jjstrLiteralChars_3[] = {0};
static JJChar jjstrLiteralChars_4[] = {0};
static JJChar jjstrLiteralChars_5[] = {0};

static JJChar jjstrLiteralChars_6[] = {0x69, 0x6e, 0x74, 0};

static JJChar jjstrLiteralChars_7[] = {0x62, 0x6f, 0x6f, 0x6c, 0x65, 0x61, 0x6e, 0};
static JJChar jjstrLiteralChars_8[] = {0};
static JJChar jjstrLiteralChars_9[] = {0x63, 0x6c, 0x61, 0x73, 0x73, 0};

static JJChar jjstrLiteralChars_10[] = {0x70, 0x75, 0x62, 0x6c, 0x69, 0x63, 0};
static JJChar jjstrLiteralChars_11[] = {0x73, 0x74, 0x61, 0x74, 0x69, 0x63, 0};

static JJChar jjstrLiteralChars_12[] = {0x76, 0x6f, 0x69, 0x64, 0};
static JJChar jjstrLiteralChars_13[] = {0x6d, 0x61, 0x69, 0x6e, 0};

static JJChar jjstrLiteralChars_14[] = {0x53, 0x74, 0x72, 0x69, 0x6e, 0x67, 0};

static JJChar jjstrLiteralChars_15[] = {0x65, 0x78, 0x74, 0x65, 0x6e, 0x64, 0x73, 0};
static JJChar jjstrLiteralChars_16[] = {0x74, 0x72, 0x75, 0x65, 0};

static JJChar jjstrLiteralChars_17[] = {0x66, 0x61, 0x6c, 0x73, 0x65, 0};
static JJChar jjstrLiteralChars_18[] = {0x74, 0x68, 0x69, 0x73, 0};

static JJChar jjstrLiteralChars_19[] = {0x6e, 0x65, 0x77, 0};
static JJChar jjstrLiteralChars_20[] = {0x69, 0x66, 0};

static JJChar jjstrLiteralChars_21[] = {0x65, 0x6c, 0x73, 0x65, 0};
static JJChar jjstrLiteralChars_22[] = {0x77, 0x68, 0x69, 0x6c, 0x65, 0};

static JJChar jjstrLiteralChars_23[] = {0x53, 0x79, 0x73, 0x74, 0x65, 0x6d, 0x2e, 0x6f, 0x75, 0x74, 0x2e, 0x70, 0x72, 0x69, 0x6e, 0x74, 0x6c, 0x6e, 0};
static JJChar jjstrLiteralChars_24[] = {0x6c, 0x65, 0x6e, 0x67, 0x74, 0x68, 0};

static JJChar jjstrLiteralChars_25[] = {0x21, 0};
static JJChar jjstrLiteralChars_26[] = {0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0};

static JJChar jjstrLiteralChars_27[] = {0x7b, 0};
static JJChar jjstrLiteralChars_28[] = {0x7d, 0};

static JJChar jjstrLiteralChars_29[] = {0x28, 0};
static JJChar jjstrLiteralChars_30[] = {0x29, 0};

static JJChar jjstrLiteralChars_31[] = {0x5b, 0};
static JJChar jjstrLiteralChars_32[] = {0x5d, 0};

static JJChar jjstrLiteralChars_33[] = {0x3b, 0};
static JJChar jjstrLiteralChars_34[] = {0x2c, 0};

static JJChar jjstrLiteralChars_35[] = {0x2e, 0};
static JJChar jjstrLiteralChars_36[] = {0x3d, 0};

static JJChar jjstrLiteralChars_37[] = {0x3d, 0x3d, 0};
static JJChar jjstrLiteralChars_38[] = {0x21, 0x3d, 0};

static JJChar jjstrLiteralChars_39[] = {0x3c, 0};
static JJChar jjstrLiteralChars_40[] = {0x3c, 0x3d, 0};

static JJChar jjstrLiteralChars_41[] = {0x3e, 0};
static JJChar jjstrLiteralChars_42[] = {0x3e, 0x3d, 0};

static JJChar jjstrLiteralChars_43[] = {0x2b, 0};
static JJChar jjstrLiteralChars_44[] = {0x2d, 0};

static JJChar jjstrLiteralChars_45[] = {0x2a, 0};
static JJChar jjstrLiteralChars_46[] = {0x2f, 0};

static JJChar jjstrLiteralChars_47[] = {0x26, 0x26, 0};
static JJChar jjstrLiteralChars_48[] = {0x7c, 0x7c, 0};
static JJChar jjstrLiteralChars_49[] = {0};
static JJChar jjstrLiteralChars_50[] = {0};
static JJChar jjstrLiteralChars_51[] = {0};
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
};

/** Lexer state names. */
static const JJChar lexStateNames_arr_0[] = 
{0x44, 0x45, 0x46, 0x41, 0x55, 0x4c, 0x54, 0};
static const JJString lexStateNames[] = {
lexStateNames_arr_0, 
};
static const unsigned long long jjtoToken[] = {
   0xfffffffffffc1ULL, 
};
static const unsigned long long jjtoSkip[] = {
   0x3eULL, 
};

  void  MiniJavaParserTokenManager::setDebugStream(FILE *ds){ debugStream = ds; }

 int MiniJavaParserTokenManager::jjStopStringLiteralDfa_0(int pos, unsigned long long active0){
   switch (pos)
   {
      case 0:
         if ((active0 & 0x5fffec0ULL) != 0L)
         {
            jjmatchedKind = 49;
            return 3;
         }
         return -1;
      case 1:
         if ((active0 & 0x100000ULL) != 0L)
            return 3;
         if ((active0 & 0x5effec0ULL) != 0L)
         {
            jjmatchedKind = 49;
            jjmatchedPos = 1;
            return 3;
         }
         return -1;
      case 2:
         if ((active0 & 0x80040ULL) != 0L)
            return 3;
         if ((active0 & 0x5e7fe80ULL) != 0L)
         {
            jjmatchedKind = 49;
            jjmatchedPos = 2;
            return 3;
         }
         return -1;
      case 3:
         if ((active0 & 0x253000ULL) != 0L)
            return 3;
         if ((active0 & 0x5c2ce80ULL) != 0L)
         {
            jjmatchedKind = 49;
            jjmatchedPos = 3;
            return 3;
         }
         return -1;
      case 4:
         if ((active0 & 0x580cc80ULL) != 0L)
         {
            jjmatchedKind = 49;
            jjmatchedPos = 4;
            return 3;
         }
         if ((active0 & 0x420200ULL) != 0L)
            return 3;
         return -1;
      case 5:
         if ((active0 & 0x808080ULL) != 0L)
         {
            jjmatchedKind = 49;
            jjmatchedPos = 5;
            return 3;
         }
         if ((active0 & 0x5004c00ULL) != 0L)
            return 3;
         return -1;
      case 6:
         if ((active0 & 0x800000ULL) != 0L)
         {
            if (jjmatchedPos < 5)
            {
               jjmatchedKind = 49;
               jjmatchedPos = 5;
            }
            return -1;
         }
         if ((active0 & 0x8080ULL) != 0L)
            return 3;
         return -1;
      case 7:
         if ((active0 & 0x800000ULL) != 0L)
         {
            if (jjmatchedPos < 5)
            {
               jjmatchedKind = 49;
               jjmatchedPos = 5;
            }
            return -1;
         }
         return -1;
      case 8:
         if ((active0 & 0x800000ULL) != 0L)
         {
            if (jjmatchedPos < 5)
            {
               jjmatchedKind = 49;
               jjmatchedPos = 5;
            }
            return -1;
         }
         return -1;
      case 9:
         if ((active0 & 0x800000ULL) != 0L)
         {
            if (jjmatchedPos < 5)
            {
               jjmatchedKind = 49;
               jjmatchedPos = 5;
            }
            return -1;
         }
         return -1;
      case 10:
         if ((active0 & 0x800000ULL) != 0L)
         {
            if (jjmatchedPos < 5)
            {
               jjmatchedKind = 49;
               jjmatchedPos = 5;
            }
            return -1;
         }
         return -1;
      case 11:
         if ((active0 & 0x800000ULL) != 0L)
         {
            if (jjmatchedPos < 5)
            {
               jjmatchedKind = 49;
               jjmatchedPos = 5;
            }
            return -1;
         }
         return -1;
      case 12:
         if ((active0 & 0x800000ULL) != 0L)
         {
            if (jjmatchedPos < 5)
            {
               jjmatchedKind = 49;
               jjmatchedPos = 5;
            }
            return -1;
         }
         return -1;
      case 13:
         if ((active0 & 0x800000ULL) != 0L)
         {
            if (jjmatchedPos < 5)
            {
               jjmatchedKind = 49;
               jjmatchedPos = 5;
            }
            return -1;
         }
         return -1;
      case 14:
         if ((active0 & 0x800000ULL) != 0L)
         {
            if (jjmatchedPos < 5)
            {
               jjmatchedKind = 49;
               jjmatchedPos = 5;
            }
            return -1;
         }
         return -1;
      case 15:
         if ((active0 & 0x800000ULL) != 0L)
         {
            if (jjmatchedPos < 5)
            {
               jjmatchedKind = 49;
               jjmatchedPos = 5;
            }
            return -1;
         }
         return -1;
      case 16:
         if ((active0 & 0x800000ULL) != 0L)
         {
            if (jjmatchedPos < 5)
            {
               jjmatchedKind = 49;
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
         jjmatchedKind = 25;
         return jjMoveStringLiteralDfa1_0(0x4000000000ULL);
      case 38:
         return jjMoveStringLiteralDfa1_0(0x800000000000ULL);
      case 40:
         return jjStopAtPos(0, 29);
      case 41:
         return jjStopAtPos(0, 30);
      case 42:
         return jjStopAtPos(0, 45);
      case 43:
         return jjStopAtPos(0, 43);
      case 44:
         return jjStopAtPos(0, 34);
      case 45:
         return jjStopAtPos(0, 44);
      case 46:
         return jjStopAtPos(0, 35);
      case 47:
         return jjStopAtPos(0, 46);
      case 59:
         return jjStopAtPos(0, 33);
      case 60:
         jjmatchedKind = 39;
         return jjMoveStringLiteralDfa1_0(0x10000000000ULL);
      case 61:
         jjmatchedKind = 36;
         return jjMoveStringLiteralDfa1_0(0x2000000000ULL);
      case 62:
         jjmatchedKind = 41;
         return jjMoveStringLiteralDfa1_0(0x40000000000ULL);
      case 83:
         return jjMoveStringLiteralDfa1_0(0x804000ULL);
      case 91:
         return jjStopAtPos(0, 31);
      case 93:
         return jjStopAtPos(0, 32);
      case 98:
         return jjMoveStringLiteralDfa1_0(0x80ULL);
      case 99:
         return jjMoveStringLiteralDfa1_0(0x200ULL);
      case 101:
         return jjMoveStringLiteralDfa1_0(0x208000ULL);
      case 102:
         return jjMoveStringLiteralDfa1_0(0x20000ULL);
      case 105:
         return jjMoveStringLiteralDfa1_0(0x100040ULL);
      case 108:
         return jjMoveStringLiteralDfa1_0(0x1000000ULL);
      case 109:
         return jjMoveStringLiteralDfa1_0(0x2000ULL);
      case 110:
         return jjMoveStringLiteralDfa1_0(0x80000ULL);
      case 112:
         return jjMoveStringLiteralDfa1_0(0x400ULL);
      case 114:
         return jjMoveStringLiteralDfa1_0(0x4000000ULL);
      case 115:
         return jjMoveStringLiteralDfa1_0(0x800ULL);
      case 116:
         return jjMoveStringLiteralDfa1_0(0x50000ULL);
      case 118:
         return jjMoveStringLiteralDfa1_0(0x1000ULL);
      case 119:
         return jjMoveStringLiteralDfa1_0(0x400000ULL);
      case 123:
         return jjStopAtPos(0, 27);
      case 124:
         return jjMoveStringLiteralDfa1_0(0x1000000000000ULL);
      case 125:
         return jjStopAtPos(0, 28);
      default :
         return jjMoveNfa_0(1, 0);
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
         if ((active0 & 0x800000000000ULL) != 0L)
            return jjStopAtPos(1, 47);
         break;
      case 61:
         if ((active0 & 0x2000000000ULL) != 0L)
            return jjStopAtPos(1, 37);
         else if ((active0 & 0x4000000000ULL) != 0L)
            return jjStopAtPos(1, 38);
         else if ((active0 & 0x10000000000ULL) != 0L)
            return jjStopAtPos(1, 40);
         else if ((active0 & 0x40000000000ULL) != 0L)
            return jjStopAtPos(1, 42);
         break;
      case 97:
         return jjMoveStringLiteralDfa2_0(active0, 0x22000ULL);
      case 101:
         return jjMoveStringLiteralDfa2_0(active0, 0x5080000ULL);
      case 102:
         if ((active0 & 0x100000ULL) != 0L)
            return jjStartNfaWithStates_0(1, 20, 3);
         break;
      case 104:
         return jjMoveStringLiteralDfa2_0(active0, 0x440000ULL);
      case 108:
         return jjMoveStringLiteralDfa2_0(active0, 0x200200ULL);
      case 110:
         return jjMoveStringLiteralDfa2_0(active0, 0x40ULL);
      case 111:
         return jjMoveStringLiteralDfa2_0(active0, 0x1080ULL);
      case 114:
         return jjMoveStringLiteralDfa2_0(active0, 0x10000ULL);
      case 116:
         return jjMoveStringLiteralDfa2_0(active0, 0x4800ULL);
      case 117:
         return jjMoveStringLiteralDfa2_0(active0, 0x400ULL);
      case 120:
         return jjMoveStringLiteralDfa2_0(active0, 0x8000ULL);
      case 121:
         return jjMoveStringLiteralDfa2_0(active0, 0x800000ULL);
      case 124:
         if ((active0 & 0x1000000000000ULL) != 0L)
            return jjStopAtPos(1, 48);
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
         return jjMoveStringLiteralDfa3_0(active0, 0xa00ULL);
      case 98:
         return jjMoveStringLiteralDfa3_0(active0, 0x400ULL);
      case 105:
         return jjMoveStringLiteralDfa3_0(active0, 0x443000ULL);
      case 108:
         return jjMoveStringLiteralDfa3_0(active0, 0x20000ULL);
      case 110:
         return jjMoveStringLiteralDfa3_0(active0, 0x1000000ULL);
      case 111:
         return jjMoveStringLiteralDfa3_0(active0, 0x80ULL);
      case 114:
         return jjMoveStringLiteralDfa3_0(active0, 0x4000ULL);
      case 115:
         return jjMoveStringLiteralDfa3_0(active0, 0xa00000ULL);
      case 116:
         if ((active0 & 0x40ULL) != 0L)
            return jjStartNfaWithStates_0(2, 6, 3);
         return jjMoveStringLiteralDfa3_0(active0, 0x4008000ULL);
      case 117:
         return jjMoveStringLiteralDfa3_0(active0, 0x10000ULL);
      case 119:
         if ((active0 & 0x80000ULL) != 0L)
            return jjStartNfaWithStates_0(2, 19, 3);
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
         if ((active0 & 0x1000ULL) != 0L)
            return jjStartNfaWithStates_0(3, 12, 3);
         break;
      case 101:
         if ((active0 & 0x10000ULL) != 0L)
            return jjStartNfaWithStates_0(3, 16, 3);
         else if ((active0 & 0x200000ULL) != 0L)
            return jjStartNfaWithStates_0(3, 21, 3);
         return jjMoveStringLiteralDfa4_0(active0, 0x8000ULL);
      case 103:
         return jjMoveStringLiteralDfa4_0(active0, 0x1000000ULL);
      case 105:
         return jjMoveStringLiteralDfa4_0(active0, 0x4000ULL);
      case 108:
         return jjMoveStringLiteralDfa4_0(active0, 0x400480ULL);
      case 110:
         if ((active0 & 0x2000ULL) != 0L)
            return jjStartNfaWithStates_0(3, 13, 3);
         break;
      case 115:
         if ((active0 & 0x40000ULL) != 0L)
            return jjStartNfaWithStates_0(3, 18, 3);
         return jjMoveStringLiteralDfa4_0(active0, 0x20200ULL);
      case 116:
         return jjMoveStringLiteralDfa4_0(active0, 0x800800ULL);
      case 117:
         return jjMoveStringLiteralDfa4_0(active0, 0x4000000ULL);
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
         if ((active0 & 0x20000ULL) != 0L)
            return jjStartNfaWithStates_0(4, 17, 3);
         else if ((active0 & 0x400000ULL) != 0L)
            return jjStartNfaWithStates_0(4, 22, 3);
         return jjMoveStringLiteralDfa5_0(active0, 0x800080ULL);
      case 105:
         return jjMoveStringLiteralDfa5_0(active0, 0xc00ULL);
      case 110:
         return jjMoveStringLiteralDfa5_0(active0, 0xc000ULL);
      case 114:
         return jjMoveStringLiteralDfa5_0(active0, 0x4000000ULL);
      case 115:
         if ((active0 & 0x200ULL) != 0L)
            return jjStartNfaWithStates_0(4, 9, 3);
         break;
      case 116:
         return jjMoveStringLiteralDfa5_0(active0, 0x1000000ULL);
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
         return jjMoveStringLiteralDfa6_0(active0, 0x80ULL);
      case 99:
         if ((active0 & 0x400ULL) != 0L)
            return jjStartNfaWithStates_0(5, 10, 3);
         else if ((active0 & 0x800ULL) != 0L)
            return jjStartNfaWithStates_0(5, 11, 3);
         break;
      case 100:
         return jjMoveStringLiteralDfa6_0(active0, 0x8000ULL);
      case 103:
         if ((active0 & 0x4000ULL) != 0L)
            return jjStartNfaWithStates_0(5, 14, 3);
         break;
      case 104:
         if ((active0 & 0x1000000ULL) != 0L)
            return jjStartNfaWithStates_0(5, 24, 3);
         break;
      case 109:
         return jjMoveStringLiteralDfa6_0(active0, 0x800000ULL);
      case 110:
         if ((active0 & 0x4000000ULL) != 0L)
            return jjStartNfaWithStates_0(5, 26, 3);
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
         return jjMoveStringLiteralDfa7_0(active0, 0x800000ULL);
      case 110:
         if ((active0 & 0x80ULL) != 0L)
            return jjStartNfaWithStates_0(6, 7, 3);
         break;
      case 115:
         if ((active0 & 0x8000ULL) != 0L)
            return jjStartNfaWithStates_0(6, 15, 3);
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
         return jjMoveStringLiteralDfa8_0(active0, 0x800000ULL);
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
         return jjMoveStringLiteralDfa9_0(active0, 0x800000ULL);
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
         return jjMoveStringLiteralDfa10_0(active0, 0x800000ULL);
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
         return jjMoveStringLiteralDfa11_0(active0, 0x800000ULL);
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
         return jjMoveStringLiteralDfa12_0(active0, 0x800000ULL);
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
         return jjMoveStringLiteralDfa13_0(active0, 0x800000ULL);
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
         return jjMoveStringLiteralDfa14_0(active0, 0x800000ULL);
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
         return jjMoveStringLiteralDfa15_0(active0, 0x800000ULL);
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
         return jjMoveStringLiteralDfa16_0(active0, 0x800000ULL);
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
         return jjMoveStringLiteralDfa17_0(active0, 0x800000ULL);
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
         if ((active0 & 0x800000ULL) != 0L)
            return jjStopAtPos(17, 23);
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
   jjnewStateCnt = 4;
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
               case 1:
                  if ((0x3ff000000000000ULL & l) != 0L)
                  {
                     if (kind > 51)
                        kind = 51;
                  }
                  if ((0x3ff000000000000ULL & l) != 0L)
                  {
                     if (kind > 8)
                        kind = 8;
                     { jjCheckNAdd(0); }
                  }
                  break;
               case 0:
                  if ((0x3ff000000000000ULL & l) == 0L)
                     break;
                  if (kind > 8)
                     kind = 8;
                  { jjCheckNAdd(0); }
                  break;
               case 3:
                  if ((0x3ff000000000000ULL & l) == 0L)
                     break;
                  if (kind > 49)
                     kind = 49;
                  jjstateSet[jjnewStateCnt++] = 3;
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
               case 1:
                  if ((0x7fffffe87fffffeULL & l) != 0L)
                  {
                     if (kind > 49)
                        kind = 49;
                     { jjCheckNAdd(3); }
                  }
                  if ((0x7fffffe87fffffeULL & l) != 0L)
                  {
                     if (kind > 51)
                        kind = 51;
                  }
                  break;
               case 2:
               case 3:
                  if ((0x7fffffe87fffffeULL & l) == 0L)
                     break;
                  if (kind > 49)
                     kind = 49;
                  { jjCheckNAdd(3); }
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
      if ((i = jjnewStateCnt), (jjnewStateCnt = startsAt), (i == (startsAt = 4 - startsAt)))
         return curPos;
      if (input_stream->endOfInput()) { return curPos; }
      curChar = input_stream->readChar();
   }
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
   if (jjmatchedKind != 0x7fffffff)
   {
      if (jjmatchedPos + 1 < curPos)
         input_stream->backup(curPos - jjmatchedPos - 1);
      if ((jjtoToken[jjmatchedKind >> 6] & (1ULL << (jjmatchedKind & 077))) != 0L)
      {
         matchedToken = jjFillToken();
         return matchedToken;
      }
      else
      {
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
    for (i = 4; i-- > 0;)
      jjrounds[i] = 0x80000000;
  }

  /** Switch to specified lex state. */
  void MiniJavaParserTokenManager::SwitchTo(int lexState) {
    if (lexState >= 1 || lexState < 0) {
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


