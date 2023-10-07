#ifndef MINIJAVAPARSER_H
#define MINIJAVAPARSER_H
#include "JavaCC.h"
#include "CharStream.h"
#include "Token.h"
#include "TokenManager.h"
#include "MiniJavaParserConstants.h"
#include "JJTMiniJavaParserState.h"
#include "ErrorHandler.h"
#include "MiniJavaParserTree.h"
  struct JJCalls {
    int        gen;
    int        arg;
    JJCalls*   next;
    Token*     first;
    ~JJCalls() { if (next) delete next; }
     JJCalls() { next = nullptr; arg = 0; gen = -1; first = nullptr; }
  };

class MiniJavaParser {
public:
ASTRoot       * Program();
void MainClass();
void ClassDecl();
void VarDecl();
void MethodDecl();
void ArgsList();
void FormalRest();
void Type();
void ArrayDecl();
void SimpleType();
void Statement();
void BlockStatement();
void ReturnStatement();
void IfStatement();
void WhileStatement();
void PrintStatement();
void OptionalExprStmt();
void Exp();
void AssignExp();
void OrExp();
void AndExp();
void EqNeqExp();
void RelExp();
void AddExp();
void MulExp();
void UnaryExp();
void PrimaryExp();
void BeforePrimay();
void AfterPrimary();
void AllocateMemory();
void Literal();
void Identifier();
void ExpList();
 inline bool jj_2_1(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_1() || jj_done);
 { jj_save(0, xla); }
  }

 inline bool jj_3R_Identifier_466_3_19()
 {
    if (jj_done) return true;
    if (jj_scan_token(IDENTIFIER)) return true;
    return false;
  }

 inline bool jj_3_1()
 {
    if (jj_done) return true;
    if (jj_3R_AllocateMemory_427_3_16()) return true;
    return false;
  }

 inline bool jj_3R_AllocateMemory_429_5_17()
 {
    if (jj_done) return true;
    if (jj_3R_Identifier_466_3_19()) return true;
    return false;
  }

 inline bool jj_3R_SimpleType_209_3_20()
 {
    if (jj_done) return true;
    Token * xsp;
    xsp = jj_scanpos;
    if (jj_scan_token(14)) {
    jj_scanpos = xsp;
    if (jj_scan_token(15)) return true;
    }
    return false;
  }

 inline bool jj_3R_AllocateMemory_436_5_18()
 {
    if (jj_done) return true;
    if (jj_3R_SimpleType_209_3_20()) return true;
    return false;
  }

 inline bool jj_3R_AllocateMemory_427_3_16()
 {
    if (jj_done) return true;
    if (jj_scan_token(NEW)) return true;
    Token * xsp;
    xsp = jj_scanpos;
    if (jj_3R_AllocateMemory_429_5_17()) {
    jj_scanpos = xsp;
    if (jj_3R_AllocateMemory_436_5_18()) return true;
    }
    return false;
  }


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
  JJCalls       jj_2_rtns[2];
  bool          jj_rescan;
  int           jj_gc;
  Token        *jj_scanpos, *jj_lastpos;
  int           jj_la;
  /** Whether we are looking ahead. */
  bool          jj_lookingAhead;
  bool          jj_semLA;
  int           jj_gen;
  int           jj_la1[37];
  ErrorHandler *errorHandler = nullptr;

protected: 
  bool          hasError;

  Token *head; 
public: 
  MiniJavaParser(TokenManager *tokenManager);
  virtual ~MiniJavaParser();
void ReInit(TokenManager* tokenManager);
void clear();
Token * jj_consume_token(int kind);
bool  jj_scan_token(int kind);
Token * getNextToken();
Token * getToken(int index);
int jj_ntk_f();
private:
  int jj_kind;
  int **jj_expentries;
  int *jj_expentry;
  void jj_add_error_token(int kind, int pos);
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
  void jj_rescan_token();
  void jj_save(int index, int xla);


  JJTMiniJavaParserState jjtree;
private:
  bool jj_done;
};
#endif
