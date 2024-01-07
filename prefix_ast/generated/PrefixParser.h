#ifndef PREFIXPARSER_H
#define PREFIXPARSER_H
#include "JavaCC.h"
#include "CharStream.h"
#include "Token.h"
#include "TokenManager.h"
#include "PrefixParserConstants.h"
#include "JJTPrefixParserState.h"
#include "ErrorHandler.h"
#include "PrefixParserTree.h"
  struct JJCalls {
    int        gen;
    int        arg;
    JJCalls*   next;
    Token*     first;
    ~JJCalls() { if (next) delete next; }
     JJCalls() { next = nullptr; arg = 0; gen = -1; first = nullptr; }
  };

class PrefixParser {
public:
ASTRoot       * Start();
void Expression();
void Term();
void Factor();
void IntegerConstant();

public: 
  void setErrorHandler(ErrorHandler *eh) {
    if (errorHandler) delete errorHandler;
    errorHandler = eh;
  }

  TokenManager *token_source = nullptr;
  CharStream   *jj_input_stream = nullptr;
  /** Current token. */
  Token        *token = nullptr;
  /** Next token. */
  Token        *jj_nt = nullptr;

private: 
  int           jj_ntk;
  JJCalls       jj_2_rtns[1];
  bool          jj_rescan;
  int           jj_gc;
  Token        *jj_scanpos, *jj_lastpos;
  int           jj_la;
  /** Whether we are looking ahead. */
  bool          jj_lookingAhead;
  bool          jj_semLA;
  int           jj_gen;
  int           jj_la1[4];
  ErrorHandler *errorHandler = nullptr;

protected: 
  bool          hasError;

  Token *head; 
public: 
  PrefixParser(TokenManager *tokenManager);
  virtual ~PrefixParser();
void ReInit(TokenManager* tokenManager);
void clear();
Token * jj_consume_token(int kind);
Token * getNextToken();
Token * getToken(int index);
int jj_ntk_f();
private:
  int jj_kind;
  int **jj_expentries;
  int *jj_expentry;

protected:
  /** Generate ParseException. */
  virtual void  parseError();
private:
  int  indent;	// trace indentation
  bool trace = false; // trace enabled if true

public:
  bool trace_enabled();
  void enable_tracing();
  void disable_tracing();


  JJTPrefixParserState jjtree;
private:
  bool jj_done;
};
#endif
