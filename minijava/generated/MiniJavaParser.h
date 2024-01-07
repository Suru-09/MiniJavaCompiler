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

 inline bool jj_3R_AssignExp_279_5_24()
 {
    if (jj_done) return true;
    if (jj_3R_OrExp_286_5_27()) return true;
    Token * xsp;
    while (true) {
      xsp = jj_scanpos;
      if (jj_3R_AssignExp_280_7_28()) { jj_scanpos = xsp; break; }
    }
    return false;
  }

 inline bool jj_3R_Identifier_468_3_25()
 {
    if (jj_done) return true;
    if (jj_scan_token(IDENTIFIER)) return true;
    return false;
  }

 inline bool jj_3R_MulExp_366_7_41()
 {
    if (jj_done) return true;
    Token * xsp;
    xsp = jj_scanpos;
    if (jj_scan_token(52)) {
    jj_scanpos = xsp;
    if (jj_scan_token(53)) return true;
    }
    return false;
  }

 inline bool jj_3R_Exp_274_3_20()
 {
    if (jj_done) return true;
    if (jj_3R_AssignExp_279_5_24()) return true;
    return false;
  }

 inline bool jj_3R_MulExp_365_5_38()
 {
    if (jj_done) return true;
    if (jj_3R_UnaryExp_384_3_40()) return true;
    Token * xsp;
    while (true) {
      xsp = jj_scanpos;
      if (jj_3R_MulExp_366_7_41()) { jj_scanpos = xsp; break; }
    }
    return false;
  }

 inline bool jj_3R_Literal_457_3_54()
 {
    if (jj_done) return true;
    if (jj_scan_token(FALSE)) return true;
    return false;
  }

 inline bool jj_3R_Literal_452_3_53()
 {
    if (jj_done) return true;
    if (jj_scan_token(TRUE)) return true;
    return false;
  }

 inline bool jj_3R_AllocateMemory_434_19_56()
 {
    if (jj_done) return true;
    if (jj_3R_SimpleType_211_3_57()) return true;
    return false;
  }

 inline bool jj_3R_Literal_447_3_52()
 {
    if (jj_done) return true;
    if (jj_scan_token(INTEGER_LITERAL)) return true;
    return false;
  }

 inline bool jj_3R_Literal_447_3_50()
 {
    if (jj_done) return true;
    Token * xsp;
    xsp = jj_scanpos;
    if (jj_3R_Literal_447_3_52()) {
    jj_scanpos = xsp;
    if (jj_3R_Literal_452_3_53()) {
    jj_scanpos = xsp;
    if (jj_3R_Literal_457_3_54()) return true;
    }
    }
    return false;
  }

 inline bool jj_3R_AddExp_347_7_39()
 {
    if (jj_done) return true;
    Token * xsp;
    xsp = jj_scanpos;
    if (jj_scan_token(50)) {
    jj_scanpos = xsp;
    if (jj_scan_token(51)) return true;
    }
    return false;
  }

 inline bool jj_3R_AddExp_346_5_36()
 {
    if (jj_done) return true;
    if (jj_3R_MulExp_365_5_38()) return true;
    Token * xsp;
    while (true) {
      xsp = jj_scanpos;
      if (jj_3R_AddExp_347_7_39()) { jj_scanpos = xsp; break; }
    }
    return false;
  }

 inline bool jj_3R_AfterPrimary_427_14_23()
 {
    if (jj_done) return true;
    if (jj_3R_ExpList_476_3_26()) return true;
    return false;
  }

 inline bool jj_3R_AllocateMemory_434_4_55()
 {
    if (jj_done) return true;
    if (jj_3R_Identifier_468_3_25()) return true;
    return false;
  }

 inline bool jj_3R_AllocateMemory_433_3_51()
 {
    if (jj_done) return true;
    if (jj_scan_token(NEW)) return true;
    Token * xsp;
    xsp = jj_scanpos;
    if (jj_3R_AllocateMemory_434_4_55()) {
    jj_scanpos = xsp;
    if (jj_3R_AllocateMemory_434_19_56()) return true;
    }
    return false;
  }

 inline bool jj_3R_AfterPrimary_427_3_19()
 {
    if (jj_done) return true;
    if (jj_scan_token(LPAREN)) return true;
    Token * xsp;
    xsp = jj_scanpos;
    if (jj_3R_AfterPrimary_427_14_23()) jj_scanpos = xsp;
    if (jj_scan_token(RPAREN)) return true;
    return false;
  }

 inline bool jj_3R_AfterPrimary_423_7_22()
 {
    if (jj_done) return true;
    if (jj_scan_token(LENGTH)) return true;
    return false;
  }

 inline bool jj_3R_AfterPrimary_421_7_21()
 {
    if (jj_done) return true;
    if (jj_3R_Identifier_468_3_25()) return true;
    return false;
  }

 inline bool jj_3R_RelExp_325_7_37()
 {
    if (jj_done) return true;
    Token * xsp;
    xsp = jj_scanpos;
    if (jj_scan_token(46)) {
    jj_scanpos = xsp;
    if (jj_scan_token(47)) {
    jj_scanpos = xsp;
    if (jj_scan_token(48)) {
    jj_scanpos = xsp;
    if (jj_scan_token(49)) return true;
    }
    }
    }
    return false;
  }

 inline bool jj_3R_AfterPrimary_420_3_18()
 {
    if (jj_done) return true;
    if (jj_scan_token(DOT)) return true;
    Token * xsp;
    xsp = jj_scanpos;
    if (jj_3R_AfterPrimary_421_7_21()) {
    jj_scanpos = xsp;
    if (jj_3R_AfterPrimary_423_7_22()) return true;
    }
    return false;
  }

 inline bool jj_3R_RelExp_323_5_34()
 {
    if (jj_done) return true;
    if (jj_3R_AddExp_346_5_36()) return true;
    Token * xsp;
    while (true) {
      xsp = jj_scanpos;
      if (jj_3R_RelExp_325_7_37()) { jj_scanpos = xsp; break; }
    }
    return false;
  }

 inline bool jj_3R_AfterPrimary_418_3_16()
 {
    if (jj_done) return true;
    Token * xsp;
    xsp = jj_scanpos;
    if (jj_3R_AfterPrimary_418_3_17()) {
    jj_scanpos = xsp;
    if (jj_3R_AfterPrimary_420_3_18()) {
    jj_scanpos = xsp;
    if (jj_3R_AfterPrimary_427_3_19()) return true;
    }
    }
    return false;
  }

 inline bool jj_3R_AfterPrimary_418_3_17()
 {
    if (jj_done) return true;
    if (jj_scan_token(LBRACKET)) return true;
    if (jj_3R_Exp_274_3_20()) return true;
    if (jj_scan_token(RBRACKET)) return true;
    return false;
  }

 inline bool jj_3_1()
 {
    if (jj_done) return true;
    if (jj_3R_AfterPrimary_418_3_16()) return true;
    return false;
  }

 inline bool jj_3R_BeforePrimay_412_3_49()
 {
    if (jj_done) return true;
    if (jj_3R_AllocateMemory_433_3_51()) return true;
    return false;
  }

 inline bool jj_3R_BeforePrimay_410_3_48()
 {
    if (jj_done) return true;
    if (jj_scan_token(LPAREN)) return true;
    if (jj_3R_Exp_274_3_20()) return true;
    return false;
  }

 inline bool jj_3R_BeforePrimay_406_3_47()
 {
    if (jj_done) return true;
    if (jj_3R_Literal_447_3_50()) return true;
    return false;
  }

 inline bool jj_3R_EqNeqExp_306_7_35()
 {
    if (jj_done) return true;
    Token * xsp;
    xsp = jj_scanpos;
    if (jj_scan_token(44)) {
    jj_scanpos = xsp;
    if (jj_scan_token(45)) return true;
    }
    return false;
  }

 inline bool jj_3R_BeforePrimay_404_3_45()
 {
    if (jj_done) return true;
    Token * xsp;
    xsp = jj_scanpos;
    if (jj_3R_BeforePrimay_404_3_46()) {
    jj_scanpos = xsp;
    if (jj_3R_BeforePrimay_406_3_47()) {
    jj_scanpos = xsp;
    if (jj_scan_token(25)) {
    jj_scanpos = xsp;
    if (jj_3R_BeforePrimay_410_3_48()) {
    jj_scanpos = xsp;
    if (jj_3R_BeforePrimay_412_3_49()) return true;
    }
    }
    }
    }
    return false;
  }

 inline bool jj_3R_BeforePrimay_404_3_46()
 {
    if (jj_done) return true;
    if (jj_3R_Identifier_468_3_25()) return true;
    return false;
  }

 inline bool jj_3R_SimpleType_211_3_57()
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

 inline bool jj_3R_EqNeqExp_304_5_32()
 {
    if (jj_done) return true;
    if (jj_3R_RelExp_323_5_34()) return true;
    Token * xsp;
    while (true) {
      xsp = jj_scanpos;
      if (jj_3R_EqNeqExp_306_7_35()) { jj_scanpos = xsp; break; }
    }
    return false;
  }

 inline bool jj_3R_PrimaryExp_399_2_44()
 {
    if (jj_done) return true;
    if (jj_3R_BeforePrimay_404_3_45()) return true;
    Token * xsp;
    while (true) {
      xsp = jj_scanpos;
      if (jj_3_1()) { jj_scanpos = xsp; break; }
    }
    return false;
  }

 inline bool jj_3R_AndExp_295_7_33()
 {
    if (jj_done) return true;
    if (jj_scan_token(AND)) return true;
    return false;
  }

 inline bool jj_3R_UnaryExp_393_3_43()
 {
    if (jj_done) return true;
    if (jj_3R_PrimaryExp_399_2_44()) return true;
    return false;
  }

 inline bool jj_3R_AndExp_294_5_30()
 {
    if (jj_done) return true;
    if (jj_3R_EqNeqExp_304_5_32()) return true;
    Token * xsp;
    while (true) {
      xsp = jj_scanpos;
      if (jj_3R_AndExp_295_7_33()) { jj_scanpos = xsp; break; }
    }
    return false;
  }

 inline bool jj_3R_ExpList_476_11_29()
 {
    if (jj_done) return true;
    if (jj_scan_token(COMMA)) return true;
    return false;
  }

 inline bool jj_3R_OrExp_287_7_31()
 {
    if (jj_done) return true;
    if (jj_scan_token(OR)) return true;
    return false;
  }

 inline bool jj_3R_UnaryExp_384_3_40()
 {
    if (jj_done) return true;
    Token * xsp;
    xsp = jj_scanpos;
    if (jj_3R_UnaryExp_384_3_42()) {
    jj_scanpos = xsp;
    if (jj_3R_UnaryExp_393_3_43()) return true;
    }
    return false;
  }

 inline bool jj_3R_UnaryExp_384_3_42()
 {
    if (jj_done) return true;
    if (jj_scan_token(NOT)) return true;
    if (jj_3R_PrimaryExp_399_2_44()) return true;
    return false;
  }

 inline bool jj_3R_OrExp_286_5_27()
 {
    if (jj_done) return true;
    if (jj_3R_AndExp_294_5_30()) return true;
    Token * xsp;
    while (true) {
      xsp = jj_scanpos;
      if (jj_3R_OrExp_287_7_31()) { jj_scanpos = xsp; break; }
    }
    return false;
  }

 inline bool jj_3R_ExpList_476_3_26()
 {
    if (jj_done) return true;
    if (jj_3R_Exp_274_3_20()) return true;
    Token * xsp;
    while (true) {
      xsp = jj_scanpos;
      if (jj_3R_ExpList_476_11_29()) { jj_scanpos = xsp; break; }
    }
    return false;
  }

 inline bool jj_3R_AssignExp_280_7_28()
 {
    if (jj_done) return true;
    if (jj_scan_token(ASSIGN)) return true;
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
