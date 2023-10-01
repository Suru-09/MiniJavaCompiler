#ifndef MINIJAVAPARSER_H
#define MINIJAVAPARSER_H
#include "JavaCC.h"
#include "CharStream.h"
#include "Token.h"
#include "TokenManager.h"
#include "MiniJavaParserConstants.h"
#include "ErrorHandler.h"
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
void Program();
void MainClass();
void ClassDecl();
void VarDecl();
void MethodDecl();
void FormalList();
void FormalRest();
void Type();
void Statement();
void Exp();
void AndExp();
void EqNeqExp();
void RelExp();
void AddExp();
void MulExp();
void UnaryExp();
void AccessorExp();
void PrimaryExp();
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

 inline bool jj_2_3(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_3() || jj_done);
 { jj_save(2, xla); }
  }

 inline bool jj_2_4(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_4() || jj_done);
 { jj_save(3, xla); }
  }

 inline bool jj_2_5(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_5() || jj_done);
 { jj_save(4, xla); }
  }

 inline bool jj_2_6(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_6() || jj_done);
 { jj_save(5, xla); }
  }

 inline bool jj_2_7(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_7() || jj_done);
 { jj_save(6, xla); }
  }

 inline bool jj_2_8(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_8() || jj_done);
 { jj_save(7, xla); }
  }

 inline bool jj_2_9(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_9() || jj_done);
 { jj_save(8, xla); }
  }

 inline bool jj_2_10(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_10() || jj_done);
 { jj_save(9, xla); }
  }

 inline bool jj_2_11(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_11() || jj_done);
 { jj_save(10, xla); }
  }

 inline bool jj_2_12(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_12() || jj_done);
 { jj_save(11, xla); }
  }

 inline bool jj_2_13(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_13() || jj_done);
 { jj_save(12, xla); }
  }

 inline bool jj_2_14(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_14() || jj_done);
 { jj_save(13, xla); }
  }

 inline bool jj_2_15(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_15() || jj_done);
 { jj_save(14, xla); }
  }

 inline bool jj_2_16(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_16() || jj_done);
 { jj_save(15, xla); }
  }

 inline bool jj_2_17(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_17() || jj_done);
 { jj_save(16, xla); }
  }

 inline bool jj_2_18(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_18() || jj_done);
 { jj_save(17, xla); }
  }

 inline bool jj_2_19(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_19() || jj_done);
 { jj_save(18, xla); }
  }

 inline bool jj_2_20(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_20() || jj_done);
 { jj_save(19, xla); }
  }

 inline bool jj_2_21(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_21() || jj_done);
 { jj_save(20, xla); }
  }

 inline bool jj_2_22(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_22() || jj_done);
 { jj_save(21, xla); }
  }

 inline bool jj_2_23(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_23() || jj_done);
 { jj_save(22, xla); }
  }

 inline bool jj_2_24(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_24() || jj_done);
 { jj_save(23, xla); }
  }

 inline bool jj_2_25(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_25() || jj_done);
 { jj_save(24, xla); }
  }

 inline bool jj_2_26(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_26() || jj_done);
 { jj_save(25, xla); }
  }

 inline bool jj_2_27(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_27() || jj_done);
 { jj_save(26, xla); }
  }

 inline bool jj_2_28(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_28() || jj_done);
 { jj_save(27, xla); }
  }

 inline bool jj_2_29(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_29() || jj_done);
 { jj_save(28, xla); }
  }

 inline bool jj_2_30(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_30() || jj_done);
 { jj_save(29, xla); }
  }

 inline bool jj_2_31(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_31() || jj_done);
 { jj_save(30, xla); }
  }

 inline bool jj_2_32(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_32() || jj_done);
 { jj_save(31, xla); }
  }

 inline bool jj_2_33(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_33() || jj_done);
 { jj_save(32, xla); }
  }

 inline bool jj_2_34(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_34() || jj_done);
 { jj_save(33, xla); }
  }

 inline bool jj_2_35(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_35() || jj_done);
 { jj_save(34, xla); }
  }

 inline bool jj_2_36(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_36() || jj_done);
 { jj_save(35, xla); }
  }

 inline bool jj_2_37(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_37() || jj_done);
 { jj_save(36, xla); }
  }

 inline bool jj_2_38(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_38() || jj_done);
 { jj_save(37, xla); }
  }

 inline bool jj_2_39(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_39() || jj_done);
 { jj_save(38, xla); }
  }

 inline bool jj_2_40(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_40() || jj_done);
 { jj_save(39, xla); }
  }

 inline bool jj_2_41(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_41() || jj_done);
 { jj_save(40, xla); }
  }

 inline bool jj_2_42(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_42() || jj_done);
 { jj_save(41, xla); }
  }

 inline bool jj_2_43(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_43() || jj_done);
 { jj_save(42, xla); }
  }

 inline bool jj_2_44(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_44() || jj_done);
 { jj_save(43, xla); }
  }

 inline bool jj_2_45(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_45() || jj_done);
 { jj_save(44, xla); }
  }

 inline bool jj_2_46(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_46() || jj_done);
 { jj_save(45, xla); }
  }

 inline bool jj_2_47(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_47() || jj_done);
 { jj_save(46, xla); }
  }

 inline bool jj_2_48(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_48() || jj_done);
 { jj_save(47, xla); }
  }

 inline bool jj_2_49(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_49() || jj_done);
 { jj_save(48, xla); }
  }

 inline bool jj_2_50(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_50() || jj_done);
 { jj_save(49, xla); }
  }

 inline bool jj_2_51(int xla)
 {
    jj_la = xla; jj_lastpos = jj_scanpos = token;
    jj_done = false;
    return (!jj_3_51() || jj_done);
 { jj_save(50, xla); }
  }

 inline bool jj_3R_Exp_182_3_21()
 {
    if (jj_done) return true;
    if (jj_3R_AndExp_188_3_22()) return true;
    Token * xsp;
    while (true) {
      xsp = jj_scanpos;
      if (jj_3_20()) { jj_scanpos = xsp; break; }
    }
    return false;
  }

 inline bool jj_3_19()
 {
    if (jj_done) return true;
    if (jj_scan_token(IDENTIFIER)) return true;
    if (jj_scan_token(LBRACKET)) return true;
    if (jj_3R_Exp_182_3_21()) return true;
    if (jj_scan_token(RBRACKET)) return true;
    return false;
  }

 inline bool jj_3_18()
 {
    if (jj_done) return true;
    if (jj_scan_token(IDENTIFIER)) return true;
    if (jj_scan_token(ASSIGN)) return true;
    if (jj_3R_Exp_182_3_21()) return true;
    if (jj_scan_token(SEMICOLON)) return true;
    return false;
  }

 inline bool jj_3_17()
 {
    if (jj_done) return true;
    if (jj_scan_token(SYSTEM_OUT_PRINTLN)) return true;
    if (jj_scan_token(LPAREN)) return true;
    if (jj_3R_Exp_182_3_21()) return true;
    if (jj_scan_token(RPAREN)) return true;
    return false;
  }

 inline bool jj_3_16()
 {
    if (jj_done) return true;
    if (jj_scan_token(WHILE)) return true;
    if (jj_scan_token(LPAREN)) return true;
    if (jj_3R_Exp_182_3_21()) return true;
    if (jj_scan_token(RPAREN)) return true;
    return false;
  }

 inline bool jj_3_15()
 {
    if (jj_done) return true;
    if (jj_scan_token(IF)) return true;
    if (jj_scan_token(LPAREN)) return true;
    if (jj_3R_Exp_182_3_21()) return true;
    if (jj_scan_token(RPAREN)) return true;
    return false;
  }

 inline bool jj_3_13()
 {
    if (jj_done) return true;
    if (jj_3R_Statement_169_3_18()) return true;
    return false;
  }

 inline bool jj_3_7()
 {
    if (jj_done) return true;
    if (jj_3R_FormalRest_152_3_19()) return true;
    return false;
  }

 inline bool jj_3R_Statement_169_3_18()
 {
    if (jj_done) return true;
    Token * xsp;
    xsp = jj_scanpos;
    if (jj_3_14()) {
    jj_scanpos = xsp;
    if (jj_3_15()) {
    jj_scanpos = xsp;
    if (jj_3_16()) {
    jj_scanpos = xsp;
    if (jj_3_17()) {
    jj_scanpos = xsp;
    if (jj_3_18()) {
    jj_scanpos = xsp;
    if (jj_3_19()) return true;
    }
    }
    }
    }
    }
    return false;
  }

 inline bool jj_3_14()
 {
    if (jj_done) return true;
    if (jj_scan_token(LBRACE)) return true;
    Token * xsp;
    while (true) {
      xsp = jj_scanpos;
      if (jj_3_13()) { jj_scanpos = xsp; break; }
    }
    if (jj_scan_token(RBRACE)) return true;
    return false;
  }

 inline bool jj_3_12()
 {
    if (jj_done) return true;
    if (jj_scan_token(IDENTIFIER)) return true;
    return false;
  }

 inline bool jj_3_51()
 {
    if (jj_done) return true;
    if (jj_scan_token(COMMA)) return true;
    if (jj_3R_Exp_182_3_21()) return true;
    return false;
  }

 inline bool jj_3_11()
 {
    if (jj_done) return true;
    if (jj_scan_token(INT)) return true;
    return false;
  }

 inline bool jj_3_10()
 {
    if (jj_done) return true;
    if (jj_scan_token(BOOLEAN)) return true;
    return false;
  }

 inline bool jj_3_9()
 {
    if (jj_done) return true;
    if (jj_scan_token(INT)) return true;
    if (jj_scan_token(LBRACKET)) return true;
    if (jj_scan_token(RBRACKET)) return true;
    return false;
  }

 inline bool jj_3R_Type_158_1_20()
 {
    if (jj_done) return true;
    Token * xsp;
    xsp = jj_scanpos;
    if (jj_3_9()) {
    jj_scanpos = xsp;
    if (jj_3_10()) {
    jj_scanpos = xsp;
    if (jj_3_11()) {
    jj_scanpos = xsp;
    if (jj_3_12()) return true;
    }
    }
    }
    return false;
  }

 inline bool jj_3R_FormalRest_152_3_19()
 {
    if (jj_done) return true;
    if (jj_scan_token(COMMA)) return true;
    if (jj_3R_Type_158_1_20()) return true;
    if (jj_scan_token(IDENTIFIER)) return true;
    return false;
  }

 inline bool jj_3_8()
 {
    if (jj_done) return true;
    if (jj_3R_Type_158_1_20()) return true;
    if (jj_scan_token(IDENTIFIER)) return true;
    Token * xsp;
    while (true) {
      xsp = jj_scanpos;
      if (jj_3_7()) { jj_scanpos = xsp; break; }
    }
    return false;
  }

 inline bool jj_3_50()
 {
    if (jj_done) return true;
    if (jj_scan_token(IDENTIFIER)) return true;
    if (jj_scan_token(DOT)) return true;
    if (jj_scan_token(IDENTIFIER)) return true;
    if (jj_scan_token(LPAREN)) return true;
    return false;
  }

 inline bool jj_3_49()
 {
    if (jj_done) return true;
    if (jj_scan_token(IDENTIFIER)) return true;
    if (jj_scan_token(LBRACKET)) return true;
    if (jj_3R_Exp_182_3_21()) return true;
    if (jj_scan_token(RBRACKET)) return true;
    return false;
  }

 inline bool jj_3_48()
 {
    if (jj_done) return true;
    if (jj_scan_token(LPAREN)) return true;
    if (jj_3R_Exp_182_3_21()) return true;
    if (jj_scan_token(RPAREN)) return true;
    return false;
  }

 inline bool jj_3_47()
 {
    if (jj_done) return true;
    if (jj_scan_token(NEW)) return true;
    if (jj_scan_token(IDENTIFIER)) return true;
    if (jj_scan_token(LPAREN)) return true;
    if (jj_scan_token(RPAREN)) return true;
    return false;
  }

 inline bool jj_3_2()
 {
    if (jj_done) return true;
    if (jj_scan_token(EXTENDS)) return true;
    if (jj_scan_token(IDENTIFIER)) return true;
    return false;
  }

 inline bool jj_3_46()
 {
    if (jj_done) return true;
    if (jj_scan_token(NEW)) return true;
    if (jj_scan_token(INT)) return true;
    if (jj_scan_token(LBRACKET)) return true;
    if (jj_3R_Exp_182_3_21()) return true;
    return false;
  }

 inline bool jj_3_45()
 {
    if (jj_done) return true;
    if (jj_scan_token(THIS)) return true;
    return false;
  }

 inline bool jj_3_44()
 {
    if (jj_done) return true;
    if (jj_scan_token(IDENTIFIER)) return true;
    return false;
  }

 inline bool jj_3_35()
 {
    if (jj_done) return true;
    if (jj_scan_token(DIV)) return true;
    return false;
  }

 inline bool jj_3_43()
 {
    if (jj_done) return true;
    if (jj_scan_token(FALSE)) return true;
    return false;
  }

 inline bool jj_3_6()
 {
    if (jj_done) return true;
    if (jj_3R_Statement_169_3_18()) return true;
    return false;
  }

 inline bool jj_3_29()
 {
    if (jj_done) return true;
    if (jj_scan_token(GTE)) return true;
    return false;
  }

 inline bool jj_3_42()
 {
    if (jj_done) return true;
    if (jj_scan_token(TRUE)) return true;
    return false;
  }

 inline bool jj_3_5()
 {
    if (jj_done) return true;
    if (jj_3R_VarDecl_130_3_16()) return true;
    return false;
  }

 inline bool jj_3R_PrimaryExp_233_3_29()
 {
    if (jj_done) return true;
    Token * xsp;
    xsp = jj_scanpos;
    if (jj_3_41()) {
    jj_scanpos = xsp;
    if (jj_3_42()) {
    jj_scanpos = xsp;
    if (jj_3_43()) {
    jj_scanpos = xsp;
    if (jj_3_44()) {
    jj_scanpos = xsp;
    if (jj_3_45()) {
    jj_scanpos = xsp;
    if (jj_3_46()) {
    jj_scanpos = xsp;
    if (jj_3_47()) {
    jj_scanpos = xsp;
    if (jj_3_48()) {
    jj_scanpos = xsp;
    if (jj_3_49()) {
    jj_scanpos = xsp;
    if (jj_3_50()) return true;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    return false;
  }

 inline bool jj_3_41()
 {
    if (jj_done) return true;
    if (jj_scan_token(INTEGER_LITERAL)) return true;
    return false;
  }

 inline bool jj_3R_MethodDecl_136_3_17()
 {
    if (jj_done) return true;
    if (jj_scan_token(PUBLIC)) return true;
    if (jj_3R_Type_158_1_20()) return true;
    if (jj_scan_token(IDENTIFIER)) return true;
    if (jj_scan_token(LPAREN)) return true;
    return false;
  }

 inline bool jj_3_28()
 {
    if (jj_done) return true;
    if (jj_scan_token(GT)) return true;
    return false;
  }

 inline bool jj_3_32()
 {
    if (jj_done) return true;
    if (jj_scan_token(MINUS)) return true;
    return false;
  }

 inline bool jj_3_40()
 {
    if (jj_done) return true;
    if (jj_3R_PrimaryExp_233_3_29()) return true;
    return false;
  }

 inline bool jj_3_34()
 {
    if (jj_done) return true;
    if (jj_scan_token(MULT)) return true;
    return false;
  }

 inline bool jj_3_39()
 {
    if (jj_done) return true;
    if (jj_3R_PrimaryExp_233_3_29()) return true;
    if (jj_scan_token(DOT)) return true;
    if (jj_scan_token(IDENTIFIER)) return true;
    if (jj_scan_token(LPAREN)) return true;
    return false;
  }

 inline bool jj_3R_AccessorExp_225_3_28()
 {
    if (jj_done) return true;
    Token * xsp;
    xsp = jj_scanpos;
    if (jj_3_38()) {
    jj_scanpos = xsp;
    if (jj_3_39()) {
    jj_scanpos = xsp;
    if (jj_3_40()) return true;
    }
    }
    return false;
  }

 inline bool jj_3R_VarDecl_130_3_16()
 {
    if (jj_done) return true;
    if (jj_3R_Type_158_1_20()) return true;
    if (jj_scan_token(IDENTIFIER)) return true;
    if (jj_scan_token(SEMICOLON)) return true;
    return false;
  }

 inline bool jj_3_38()
 {
    if (jj_done) return true;
    if (jj_3R_PrimaryExp_233_3_29()) return true;
    if (jj_scan_token(DOT)) return true;
    if (jj_scan_token(LENGTH)) return true;
    return false;
  }

 inline bool jj_3_33()
 {
    if (jj_done) return true;
    Token * xsp;
    xsp = jj_scanpos;
    if (jj_3_34()) {
    jj_scanpos = xsp;
    if (jj_3_35()) return true;
    }
    if (jj_3R_UnaryExp_218_3_27()) return true;
    return false;
  }

 inline bool jj_3_4()
 {
    if (jj_done) return true;
    if (jj_3R_MethodDecl_136_3_17()) return true;
    return false;
  }

 inline bool jj_3_27()
 {
    if (jj_done) return true;
    if (jj_scan_token(LTE)) return true;
    return false;
  }

 inline bool jj_3_37()
 {
    if (jj_done) return true;
    if (jj_3R_AccessorExp_225_3_28()) return true;
    return false;
  }

 inline bool jj_3_3()
 {
    if (jj_done) return true;
    if (jj_3R_VarDecl_130_3_16()) return true;
    return false;
  }

 inline bool jj_3_31()
 {
    if (jj_done) return true;
    if (jj_scan_token(PLUS)) return true;
    return false;
  }

 inline bool jj_3R_UnaryExp_218_3_27()
 {
    if (jj_done) return true;
    Token * xsp;
    xsp = jj_scanpos;
    if (jj_3_36()) {
    jj_scanpos = xsp;
    if (jj_3_37()) return true;
    }
    return false;
  }

 inline bool jj_3_36()
 {
    if (jj_done) return true;
    if (jj_scan_token(NOT)) return true;
    if (jj_3R_AccessorExp_225_3_28()) return true;
    return false;
  }

 inline bool jj_3_30()
 {
    if (jj_done) return true;
    Token * xsp;
    xsp = jj_scanpos;
    if (jj_3_31()) {
    jj_scanpos = xsp;
    if (jj_3_32()) return true;
    }
    if (jj_3R_MulExp_212_3_26()) return true;
    return false;
  }

 inline bool jj_3R_ClassDecl_121_3_15()
 {
    if (jj_done) return true;
    if (jj_scan_token(CLASS)) return true;
    if (jj_scan_token(IDENTIFIER)) return true;
    Token * xsp;
    xsp = jj_scanpos;
    if (jj_3_2()) jj_scanpos = xsp;
    if (jj_scan_token(LBRACE)) return true;
    while (true) {
      xsp = jj_scanpos;
      if (jj_3_3()) { jj_scanpos = xsp; break; }
    }
    while (true) {
      xsp = jj_scanpos;
      if (jj_3_4()) { jj_scanpos = xsp; break; }
    }
    if (jj_scan_token(RBRACE)) return true;
    return false;
  }

 inline bool jj_3_24()
 {
    if (jj_done) return true;
    if (jj_scan_token(NEQ)) return true;
    return false;
  }

 inline bool jj_3_26()
 {
    if (jj_done) return true;
    if (jj_scan_token(LT)) return true;
    return false;
  }

 inline bool jj_3R_MulExp_212_3_26()
 {
    if (jj_done) return true;
    if (jj_3R_UnaryExp_218_3_27()) return true;
    Token * xsp;
    while (true) {
      xsp = jj_scanpos;
      if (jj_3_33()) { jj_scanpos = xsp; break; }
    }
    return false;
  }

 inline bool jj_3_25()
 {
    if (jj_done) return true;
    Token * xsp;
    xsp = jj_scanpos;
    if (jj_3_26()) {
    jj_scanpos = xsp;
    if (jj_3_27()) {
    jj_scanpos = xsp;
    if (jj_3_28()) {
    jj_scanpos = xsp;
    if (jj_3_29()) return true;
    }
    }
    }
    if (jj_3R_AddExp_206_3_25()) return true;
    return false;
  }

 inline bool jj_3_23()
 {
    if (jj_done) return true;
    if (jj_scan_token(EQ)) return true;
    return false;
  }

 inline bool jj_3R_AddExp_206_3_25()
 {
    if (jj_done) return true;
    if (jj_3R_MulExp_212_3_26()) return true;
    Token * xsp;
    while (true) {
      xsp = jj_scanpos;
      if (jj_3_30()) { jj_scanpos = xsp; break; }
    }
    return false;
  }

 inline bool jj_3_22()
 {
    if (jj_done) return true;
    Token * xsp;
    xsp = jj_scanpos;
    if (jj_3_23()) {
    jj_scanpos = xsp;
    if (jj_3_24()) return true;
    }
    if (jj_3R_RelExp_200_3_24()) return true;
    return false;
  }

 inline bool jj_3_1()
 {
    if (jj_done) return true;
    if (jj_3R_ClassDecl_121_3_15()) return true;
    return false;
  }

 inline bool jj_3_21()
 {
    if (jj_done) return true;
    if (jj_scan_token(AND)) return true;
    if (jj_3R_EqNeqExp_194_3_23()) return true;
    return false;
  }

 inline bool jj_3R_RelExp_200_3_24()
 {
    if (jj_done) return true;
    if (jj_3R_AddExp_206_3_25()) return true;
    Token * xsp;
    while (true) {
      xsp = jj_scanpos;
      if (jj_3_25()) { jj_scanpos = xsp; break; }
    }
    return false;
  }

 inline bool jj_3R_EqNeqExp_194_3_23()
 {
    if (jj_done) return true;
    if (jj_3R_RelExp_200_3_24()) return true;
    Token * xsp;
    while (true) {
      xsp = jj_scanpos;
      if (jj_3_22()) { jj_scanpos = xsp; break; }
    }
    return false;
  }

 inline bool jj_3_20()
 {
    if (jj_done) return true;
    if (jj_scan_token(OR)) return true;
    if (jj_3R_AndExp_188_3_22()) return true;
    return false;
  }

 inline bool jj_3R_AndExp_188_3_22()
 {
    if (jj_done) return true;
    if (jj_3R_EqNeqExp_194_3_23()) return true;
    Token * xsp;
    while (true) {
      xsp = jj_scanpos;
      if (jj_3_21()) { jj_scanpos = xsp; break; }
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
  JJCalls       jj_2_rtns[52];
  bool          jj_rescan;
  int           jj_gc;
  Token        *jj_scanpos, *jj_lastpos;
  int           jj_la;
  /** Whether we are looking ahead. */
  bool          jj_lookingAhead;
  bool          jj_semLA;
  int           jj_gen;
  int           jj_la1[1];
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


private:
  bool jj_done;
};
#endif
