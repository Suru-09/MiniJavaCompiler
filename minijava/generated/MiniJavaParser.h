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
SimpleNode          * Program();
void MainClass();
void ClassDecl();
void VarDecl();
void MethodDecl();
void FormalList();
void FormalRest();
void Type();
void SimpleType();
void Statement();
void BlockStatement();
void IfStatement();
void WhileStatement();
void PrintStatement();
void EmptyStatement();
void ExpressionInStatement();
void Exp();
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
void ExpList();
 inline bool jj_2_1(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_1() || jj_done);
 { jj_save(0, xla); }
  }

 inline bool jj_2_2(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_2() || jj_done);
 { jj_save(1, xla); }
  }

 inline bool jj_3R_UnaryExp_277_3_33()
 {
    if (jj_done) return true;
    if (jj_3R_PrimaryExp_283_3_34()) return true;
    return false;
  }

 inline bool jj_3R_UnaryExp_276_3_32()
 {
    if (jj_done) return true;
    if (jj_scan_token(NOT)) return true;
    return false;
  }

 inline bool jj_3R_UnaryExp_276_3_31()
 {
    if (jj_done) return true;
    Token * xsp;
    xsp = jj_scanpos;
    if (jj_3R_UnaryExp_276_3_32()) {
    jj_scanpos = xsp;
    if (jj_3R_UnaryExp_277_3_33()) return true;
    }
    return false;
  }

 inline bool jj_3R_Literal_323_1_38()
 {
    if (jj_done) return true;
    Token * xsp;
    xsp = jj_scanpos;
    if (jj_scan_token(6)) {
    jj_scanpos = xsp;
    if (jj_scan_token(19)) {
    jj_scanpos = xsp;
    if (jj_scan_token(20)) return true;
    }
    }
    return false;
  }

 inline bool jj_3R_SimpleType_179_3_24()
 {
    if (jj_done) return true;
    Token * xsp;
    xsp = jj_scanpos;
    if (jj_scan_token(10)) {
    jj_scanpos = xsp;
    if (jj_scan_token(11)) return true;
    }
    return false;
  }

 inline bool jj_3R_AllocateMemory_317_5_21()
 {
    if (jj_done) return true;
    if (jj_3R_SimpleType_179_3_24()) return true;
    return false;
  }

 inline bool jj_3R_AllocateMemory_315_5_20()
 {
    if (jj_done) return true;
    if (jj_scan_token(IDENTIFIER)) return true;
    return false;
  }

 inline bool jj_3R_MulExp_268_3_30()
 {
    if (jj_done) return true;
    if (jj_3R_UnaryExp_276_3_31()) return true;
    return false;
  }

 inline bool jj_3R_AllocateMemory_313_3_16()
 {
    if (jj_done) return true;
    if (jj_scan_token(NEW)) return true;
    Token * xsp;
    xsp = jj_scanpos;
    if (jj_3R_AllocateMemory_315_5_20()) {
    jj_scanpos = xsp;
    if (jj_3R_AllocateMemory_317_5_21()) return true;
    }
    return false;
  }

 inline bool jj_3R_AddExp_262_3_29()
 {
    if (jj_done) return true;
    if (jj_3R_MulExp_268_3_30()) return true;
    return false;
  }

 inline bool jj_3R_AfterPrimary_307_3_19()
 {
    if (jj_done) return true;
    if (jj_scan_token(LPAREN)) return true;
    if (jj_3R_ExpList_332_3_23()) return true;
    return false;
  }

 inline bool jj_3R_AfterPrimary_305_3_18()
 {
    if (jj_done) return true;
    if (jj_scan_token(DOT)) return true;
    if (jj_scan_token(IDENTIFIER)) return true;
    return false;
  }

 inline bool jj_3R_RelExp_256_3_28()
 {
    if (jj_done) return true;
    if (jj_3R_AddExp_262_3_29()) return true;
    return false;
  }

 inline bool jj_3R_AfterPrimary_303_3_17()
 {
    if (jj_done) return true;
    if (jj_scan_token(LBRACKET)) return true;
    if (jj_3R_Exp_233_3_22()) return true;
    return false;
  }

 inline bool jj_3R_AfterPrimary_303_3_15()
 {
    if (jj_done) return true;
    Token * xsp;
    xsp = jj_scanpos;
    if (jj_3R_AfterPrimary_303_3_17()) {
    jj_scanpos = xsp;
    if (jj_3R_AfterPrimary_305_3_18()) {
    jj_scanpos = xsp;
    if (jj_3R_AfterPrimary_307_3_19()) return true;
    }
    }
    return false;
  }

 inline bool jj_3_1()
 {
    if (jj_done) return true;
    if (jj_3R_AfterPrimary_303_3_15()) return true;
    return false;
  }

 inline bool jj_3R_EqNeqExp_250_3_27()
 {
    if (jj_done) return true;
    if (jj_3R_RelExp_256_3_28()) return true;
    return false;
  }

 inline bool jj_3_2()
 {
    if (jj_done) return true;
    if (jj_3R_AllocateMemory_313_3_16()) return true;
    return false;
  }

 inline bool jj_3R_BeforePrimay_294_3_37()
 {
    if (jj_done) return true;
    if (jj_scan_token(LPAREN)) return true;
    return false;
  }

 inline bool jj_3R_AndExp_244_3_26()
 {
    if (jj_done) return true;
    if (jj_3R_EqNeqExp_250_3_27()) return true;
    return false;
  }

 inline bool jj_3R_BeforePrimay_290_3_36()
 {
    if (jj_done) return true;
    if (jj_3R_Literal_323_1_38()) return true;
    return false;
  }

 inline bool jj_3R_BeforePrimay_288_3_35()
 {
    if (jj_done) return true;
    Token * xsp;
    xsp = jj_scanpos;
    if (jj_scan_token(52)) {
    jj_scanpos = xsp;
    if (jj_3R_BeforePrimay_290_3_36()) {
    jj_scanpos = xsp;
    if (jj_scan_token(21)) {
    jj_scanpos = xsp;
    if (jj_3R_BeforePrimay_294_3_37()) {
    jj_scanpos = xsp;
    if (jj_3_2()) return true;
    }
    }
    }
    }
    return false;
  }

 inline bool jj_3R_OrExp_238_3_25()
 {
    if (jj_done) return true;
    if (jj_3R_AndExp_244_3_26()) return true;
    return false;
  }

 inline bool jj_3R_ExpList_332_3_23()
 {
    if (jj_done) return true;
    if (jj_3R_Exp_233_3_22()) return true;
    return false;
  }

 inline bool jj_3R_PrimaryExp_283_3_34()
 {
    if (jj_done) return true;
    if (jj_3R_BeforePrimay_288_3_35()) return true;
    return false;
  }

 inline bool jj_3R_Exp_233_3_22()
 {
    if (jj_done) return true;
    if (jj_3R_OrExp_238_3_25()) return true;
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
  JJCalls       jj_2_rtns[3];
  bool          jj_rescan;
  int           jj_gc;
  Token        *jj_scanpos, *jj_lastpos;
  int           jj_la;
  /** Whether we are looking ahead. */
  bool          jj_lookingAhead;
  bool          jj_semLA;
  int           jj_gen;
  int           jj_la1[31];
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
  bool trace = true; // trace enabled if true

public:
  bool trace_enabled();
  void enable_tracing();
  void disable_tracing();
  void trace_call(const char *s);
  void trace_return(const char *s);
  void trace_token(Token *t, const char *where);
  void trace_scan(Token *t1, int t2);
  void jj_rescan_token();
  void jj_save(int index, int xla);


  JJTMiniJavaParserState jjtree;
private:
  bool jj_done;
};
#endif
