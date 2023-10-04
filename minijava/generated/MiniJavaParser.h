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
void SimpleType();
void Statement();
void BlockStatement();
void IfStatement();
void WhileStatement();
void PrintStatement();
void EmptyStatement();
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

 inline bool jj_2_2(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_2() || jj_done);
 { jj_save(1, xla); }
  }

 inline bool jj_3_1()
 {
    if (jj_done) return true;
    if (jj_3R_AfterPrimary_326_3_16()) return true;
    return false;
  }

 inline bool jj_3R_Identifier_370_3_24()
 {
    if (jj_done) return true;
    if (jj_scan_token(IDENTIFIER)) return true;
    return false;
  }

 inline bool jj_3R_EqNeqExp_273_5_30()
 {
    if (jj_done) return true;
    if (jj_3R_RelExp_279_5_31()) return true;
    return false;
  }

 inline bool jj_3_2()
 {
    if (jj_done) return true;
    if (jj_3R_AllocateMemory_336_3_17()) return true;
    return false;
  }

 inline bool jj_3R_BeforePrimay_317_3_41()
 {
    if (jj_done) return true;
    if (jj_scan_token(LPAREN)) return true;
    return false;
  }

 inline bool jj_3R_AndExp_267_5_29()
 {
    if (jj_done) return true;
    if (jj_3R_EqNeqExp_273_5_30()) return true;
    return false;
  }

 inline bool jj_3R_BeforePrimay_313_3_40()
 {
    if (jj_done) return true;
    if (jj_3R_Literal_349_3_42()) return true;
    return false;
  }

 inline bool jj_3R_Literal_359_3_45()
 {
    if (jj_done) return true;
    if (jj_scan_token(FALSE)) return true;
    return false;
  }

 inline bool jj_3R_BeforePrimay_311_3_39()
 {
    if (jj_done) return true;
    if (jj_3R_Identifier_370_3_24()) return true;
    return false;
  }

 inline bool jj_3R_BeforePrimay_311_3_38()
 {
    if (jj_done) return true;
    Token * xsp;
    xsp = jj_scanpos;
    if (jj_3R_BeforePrimay_311_3_39()) {
    jj_scanpos = xsp;
    if (jj_3R_BeforePrimay_313_3_40()) {
    jj_scanpos = xsp;
    if (jj_scan_token(25)) {
    jj_scanpos = xsp;
    if (jj_3R_BeforePrimay_317_3_41()) {
    jj_scanpos = xsp;
    if (jj_3_2()) return true;
    }
    }
    }
    }
    return false;
  }

 inline bool jj_3R_OrExp_261_5_28()
 {
    if (jj_done) return true;
    if (jj_3R_AndExp_267_5_29()) return true;
    return false;
  }

 inline bool jj_3R_Literal_354_3_44()
 {
    if (jj_done) return true;
    if (jj_scan_token(TRUE)) return true;
    return false;
  }

 inline bool jj_3R_PrimaryExp_306_3_37()
 {
    if (jj_done) return true;
    if (jj_3R_BeforePrimay_311_3_38()) return true;
    return false;
  }

 inline bool jj_3R_AssignExp_254_5_27()
 {
    if (jj_done) return true;
    if (jj_3R_OrExp_261_5_28()) return true;
    return false;
  }

 inline bool jj_3R_Literal_349_3_43()
 {
    if (jj_done) return true;
    if (jj_scan_token(INTEGER_LITERAL)) return true;
    return false;
  }

 inline bool jj_3R_Literal_349_3_42()
 {
    if (jj_done) return true;
    Token * xsp;
    xsp = jj_scanpos;
    if (jj_3R_Literal_349_3_43()) {
    jj_scanpos = xsp;
    if (jj_3R_Literal_354_3_44()) {
    jj_scanpos = xsp;
    if (jj_3R_Literal_359_3_45()) return true;
    }
    }
    return false;
  }

 inline bool jj_3R_UnaryExp_299_3_36()
 {
    if (jj_done) return true;
    if (jj_3R_PrimaryExp_306_3_37()) return true;
    return false;
  }

 inline bool jj_3R_UnaryExp_298_3_35()
 {
    if (jj_done) return true;
    if (jj_scan_token(NOT)) return true;
    return false;
  }

 inline bool jj_3R_UnaryExp_297_3_34()
 {
    if (jj_done) return true;
    Token * xsp;
    xsp = jj_scanpos;
    if (jj_3R_UnaryExp_298_3_35()) {
    jj_scanpos = xsp;
    if (jj_3R_UnaryExp_299_3_36()) return true;
    }
    return false;
  }

 inline bool jj_3R_Exp_249_3_23()
 {
    if (jj_done) return true;
    if (jj_3R_AssignExp_254_5_27()) return true;
    return false;
  }

 inline bool jj_3R_AllocateMemory_340_5_22()
 {
    if (jj_done) return true;
    if (jj_3R_SimpleType_195_3_26()) return true;
    return false;
  }

 inline bool jj_3R_MulExp_291_5_33()
 {
    if (jj_done) return true;
    if (jj_3R_UnaryExp_297_3_34()) return true;
    return false;
  }

 inline bool jj_3R_AllocateMemory_338_5_21()
 {
    if (jj_done) return true;
    if (jj_3R_Identifier_370_3_24()) return true;
    return false;
  }

 inline bool jj_3R_SimpleType_195_3_26()
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

 inline bool jj_3R_AllocateMemory_336_3_17()
 {
    if (jj_done) return true;
    if (jj_scan_token(NEW)) return true;
    Token * xsp;
    xsp = jj_scanpos;
    if (jj_3R_AllocateMemory_338_5_21()) {
    jj_scanpos = xsp;
    if (jj_3R_AllocateMemory_340_5_22()) return true;
    }
    return false;
  }

 inline bool jj_3R_AddExp_285_5_32()
 {
    if (jj_done) return true;
    if (jj_3R_MulExp_291_5_33()) return true;
    return false;
  }

 inline bool jj_3R_ExpList_378_3_25()
 {
    if (jj_done) return true;
    if (jj_3R_Exp_249_3_23()) return true;
    return false;
  }

 inline bool jj_3R_AfterPrimary_330_3_20()
 {
    if (jj_done) return true;
    if (jj_scan_token(LPAREN)) return true;
    if (jj_3R_ExpList_378_3_25()) return true;
    return false;
  }

 inline bool jj_3R_RelExp_279_5_31()
 {
    if (jj_done) return true;
    if (jj_3R_AddExp_285_5_32()) return true;
    return false;
  }

 inline bool jj_3R_AfterPrimary_328_3_19()
 {
    if (jj_done) return true;
    if (jj_scan_token(DOT)) return true;
    if (jj_3R_Identifier_370_3_24()) return true;
    return false;
  }

 inline bool jj_3R_AfterPrimary_326_3_18()
 {
    if (jj_done) return true;
    if (jj_scan_token(LBRACKET)) return true;
    if (jj_3R_Exp_249_3_23()) return true;
    return false;
  }

 inline bool jj_3R_AfterPrimary_326_3_16()
 {
    if (jj_done) return true;
    Token * xsp;
    xsp = jj_scanpos;
    if (jj_3R_AfterPrimary_326_3_18()) {
    jj_scanpos = xsp;
    if (jj_3R_AfterPrimary_328_3_19()) {
    jj_scanpos = xsp;
    if (jj_3R_AfterPrimary_330_3_20()) return true;
    }
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
  JJCalls       jj_2_rtns[3];
  bool          jj_rescan;
  int           jj_gc;
  Token        *jj_scanpos, *jj_lastpos;
  int           jj_la;
  /** Whether we are looking ahead. */
  bool          jj_lookingAhead;
  bool          jj_semLA;
  int           jj_gen;
  int           jj_la1[32];
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
