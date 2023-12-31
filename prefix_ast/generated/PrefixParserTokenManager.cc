/* PrefixParserTokenManager.cc */
#include "PrefixParserTokenManager.h"
#include "TokenMgrError.h"
#include "SimpleNode.h"
static const int jjnextStates[] = {
   4, 6, 2, 
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
static JJChar jjstrLiteralChars_9[] = {0x2b, 0};

static JJChar jjstrLiteralChars_10[] = {0x2a, 0};
static JJChar jjstrLiteralChars_11[] = {0x28, 0};

static JJChar jjstrLiteralChars_12[] = {0x29, 0};
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
};

/** Lexer state names. */
static const JJChar lexStateNames_arr_0[] = 
{0x44, 0x45, 0x46, 0x41, 0x55, 0x4c, 0x54, 0};
static const JJString lexStateNames[] = {
lexStateNames_arr_0, 
};
static const unsigned long long jjtoToken[] = {
   0x1e03ULL, 
};
static const unsigned long long jjtoSkip[] = {
   0x1e0ULL, 
};

  void  PrefixParserTokenManager::setDebugStream(FILE *ds){ debugStream = ds; }

 int PrefixParserTokenManager::jjStopStringLiteralDfa_0(int pos, unsigned long long active0){
   switch (pos)
   {
      default :
         return -1;
   }
}

int  PrefixParserTokenManager::jjStartNfa_0(int pos, unsigned long long active0){
   return jjMoveNfa_0(jjStopStringLiteralDfa_0(pos, active0), pos + 1);
}

 int  PrefixParserTokenManager::jjStopAtPos(int pos, int kind){
   jjmatchedKind = kind;
   jjmatchedPos = pos;
   return pos + 1;
}

 int  PrefixParserTokenManager::jjMoveStringLiteralDfa0_0(){
   switch(curChar)
   {
      case 40:
         return jjStopAtPos(0, 11);
      case 41:
         return jjStopAtPos(0, 12);
      case 42:
         return jjStopAtPos(0, 10);
      case 43:
         return jjStopAtPos(0, 9);
      default :
         return jjMoveNfa_0(0, 0);
   }
}

int PrefixParserTokenManager::jjMoveNfa_0(int startState, int curPos){
   int startsAt = 0;
   jjnewStateCnt = 7;
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
               case 0:
                  if ((0x3fe000000000000ULL & l) != 0L)
                  {
                     if (kind > 1)
                        kind = 1;
                     { jjCheckNAddTwoStates(1, 2); }
                  }
                  else if (curChar == 48)
                  {
                     if (kind > 1)
                        kind = 1;
                     { jjCheckNAddStates(0, 2); }
                  }
                  break;
               case 1:
                  if ((0x3ff000000000000ULL & l) == 0L)
                     break;
                  if (kind > 1)
                     kind = 1;
                  { jjCheckNAddTwoStates(1, 2); }
                  break;
               case 3:
                  if (curChar != 48)
                     break;
                  if (kind > 1)
                     kind = 1;
                  { jjCheckNAddStates(0, 2); }
                  break;
               case 5:
                  if ((0x3ff000000000000ULL & l) == 0L)
                     break;
                  if (kind > 1)
                     kind = 1;
                  { jjCheckNAddTwoStates(5, 2); }
                  break;
               case 6:
                  if ((0xff000000000000ULL & l) == 0L)
                     break;
                  if (kind > 1)
                     kind = 1;
                  { jjCheckNAddTwoStates(6, 2); }
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
                  if ((0x100000001000ULL & l) != 0L)
                     kind = 1;
                  break;
               case 4:
                  if ((0x100000001000000ULL & l) != 0L)
                     { jjCheckNAdd(5); }
                  break;
               case 5:
                  if ((0x7e0000007eULL & l) == 0L)
                     break;
                  kind = 1;
                  { jjCheckNAddTwoStates(5, 2); }
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
      if ((i = jjnewStateCnt), (jjnewStateCnt = startsAt), (i == (startsAt = 7 - startsAt)))
         return curPos;
      if (input_stream->endOfInput()) { return curPos; }
      curChar = input_stream->readChar();
   }
}

/** Token literal values. */

Token * PrefixParserTokenManager::jjFillToken(){
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

Token * PrefixParserTokenManager::getNextToken(){
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
      while (curChar <= 32 && (0x100002600ULL & (1ULL << curChar)) != 0L)
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
  void PrefixParserTokenManager::ReInit(JAVACC_CHARSTREAM *stream, int lexState) {
    clear();
    jjmatchedPos = jjnewStateCnt = 0;
    curLexState = lexState;
    input_stream = stream;
    ReInitRounds();
    debugStream = stdout; // init
    SwitchTo(lexState);
    errorHandler = new TokenManagerErrorHandler();
  }

  void PrefixParserTokenManager::ReInitRounds() {
    int i;
    jjround = 0x80000001;
    for (i = 7; i-- > 0;)
      jjrounds[i] = 0x80000000;
  }

  /** Switch to specified lex state. */
  void PrefixParserTokenManager::SwitchTo(int lexState) {
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
  PrefixParserTokenManager::PrefixParserTokenManager (JAVACC_CHARSTREAM *stream, int lexState)
  {
    input_stream = nullptr;
    ReInit(stream, lexState);
  }

  // Destructor
  PrefixParserTokenManager::~PrefixParserTokenManager () {
    clear();
  }

  // clear
  void PrefixParserTokenManager::clear() {
    //Since input_stream was generated outside of TokenManager
    //TokenManager should not take care of deleting it
    //if (input_stream) delete input_stream;
    if (errorHandler) delete errorHandler, errorHandler = nullptr;    
  }


