/* MiniJavaParser.cc */
#include "MiniJavaParser.h"
#include "TokenMgrError.h"

  /** Constructor with user supplied TokenManager. */




void MiniJavaParser::Program() {
    if (!hasError) {
    MainClass();
    }
    if (!hasError) {
    while (!hasError) {
      if (jj_2_1(4)) {
        ;
      } else {
        goto end_label_1;
      }
      if (!hasError) {
      ClassDecl();
      }
    }
    end_label_1: ;
    }
    if (!hasError) {
    jj_consume_token(0);
    }
}


void MiniJavaParser::MainClass() {
    if (!hasError) {
    jj_consume_token(CLASS);
    }
    if (!hasError) {
    jj_consume_token(IDENTIFIER);
    }
    if (!hasError) {
    jj_consume_token(LBRACE);
    }
    if (!hasError) {
    jj_consume_token(PUBLIC);
    }
    if (!hasError) {
    jj_consume_token(STATIC);
    }
    if (!hasError) {
    jj_consume_token(VOID);
    }
    if (!hasError) {
    jj_consume_token(MAIN);
    }
    if (!hasError) {
    jj_consume_token(LPAREN);
    }
    if (!hasError) {
    jj_consume_token(STRING);
    }
    if (!hasError) {
    jj_consume_token(LBRACKET);
    }
    if (!hasError) {
    jj_consume_token(RBRACKET);
    }
    if (!hasError) {
    jj_consume_token(IDENTIFIER);
    }
    if (!hasError) {
    jj_consume_token(RPAREN);
    }
    if (!hasError) {
    jj_consume_token(LBRACE);
    }
    if (!hasError) {
    Statement();
    }
    if (!hasError) {
    jj_consume_token(RBRACE);
    }
    if (!hasError) {
    jj_consume_token(RBRACE);
    }
}


void MiniJavaParser::ClassDecl() {
    if (!hasError) {
    jj_consume_token(CLASS);
    }
    if (!hasError) {
    jj_consume_token(IDENTIFIER);
    }
    if (!hasError) {
    if (jj_2_2(4)) {
      if (!hasError) {
      jj_consume_token(EXTENDS);
      }
      if (!hasError) {
      jj_consume_token(IDENTIFIER);
      }
    } else {
      ;
    }
    }
    if (!hasError) {
    jj_consume_token(LBRACE);
    }
    if (!hasError) {
    while (!hasError) {
      if (jj_2_3(4)) {
        ;
      } else {
        goto end_label_2;
      }
      if (!hasError) {
      VarDecl();
      }
    }
    end_label_2: ;
    }
    if (!hasError) {
    while (!hasError) {
      if (jj_2_4(4)) {
        ;
      } else {
        goto end_label_3;
      }
      if (!hasError) {
      MethodDecl();
      }
    }
    end_label_3: ;
    }
    if (!hasError) {
    jj_consume_token(RBRACE);
    }
}


void MiniJavaParser::VarDecl() {
    if (!hasError) {
    Type();
    }
    if (!hasError) {
    jj_consume_token(IDENTIFIER);
    }
    if (!hasError) {
    jj_consume_token(SEMICOLON);
    }
}


void MiniJavaParser::MethodDecl() {
    if (!hasError) {
    jj_consume_token(PUBLIC);
    }
    if (!hasError) {
    Type();
    }
    if (!hasError) {
    jj_consume_token(IDENTIFIER);
    }
    if (!hasError) {
    jj_consume_token(LPAREN);
    }
    if (!hasError) {
    FormalList();
    }
    if (!hasError) {
    jj_consume_token(RPAREN);
    }
    if (!hasError) {
    jj_consume_token(LBRACE);
    }
    if (!hasError) {
    while (!hasError) {
      if (jj_2_5(4)) {
        ;
      } else {
        goto end_label_4;
      }
      if (!hasError) {
      VarDecl();
      }
    }
    end_label_4: ;
    }
    if (!hasError) {
    while (!hasError) {
      if (jj_2_6(4)) {
        ;
      } else {
        goto end_label_5;
      }
      if (!hasError) {
      Statement();
      }
    }
    end_label_5: ;
    }
    if (!hasError) {
    jj_consume_token(RETURN);
    }
    if (!hasError) {
    Exp();
    }
    if (!hasError) {
    jj_consume_token(SEMICOLON);
    }
    if (!hasError) {
    jj_consume_token(RBRACE);
    }
}


void MiniJavaParser::FormalList() {
    if (!hasError) {
    if (jj_2_8(4)) {
      if (!hasError) {
      Type();
      }
      if (!hasError) {
      jj_consume_token(IDENTIFIER);
      }
      if (!hasError) {
      while (!hasError) {
        if (jj_2_7(4)) {
          ;
        } else {
          goto end_label_6;
        }
        if (!hasError) {
        FormalRest();
        }
      }
      end_label_6: ;
      }
    } else {
      ;
    }
    }
}


void MiniJavaParser::FormalRest() {
    if (!hasError) {
    jj_consume_token(COMMA);
    }
    if (!hasError) {
    Type();
    }
    if (!hasError) {
    jj_consume_token(IDENTIFIER);
    }
}


void MiniJavaParser::Type() {
    if (!hasError) {
    if (jj_2_9(4)) {
      if (!hasError) {
      jj_consume_token(INT);
      }
      if (!hasError) {
      jj_consume_token(LBRACKET);
      }
      if (!hasError) {
      jj_consume_token(RBRACKET);
      }
    } else if (jj_2_10(4)) {
      if (!hasError) {
      jj_consume_token(BOOLEAN);
      }
    } else if (jj_2_11(4)) {
      if (!hasError) {
      jj_consume_token(INT);
      }
    } else if (jj_2_12(4)) {
      if (!hasError) {
      jj_consume_token(IDENTIFIER);
      }
    } else {
      jj_consume_token(-1);
      errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
    }
    }
}


void MiniJavaParser::Statement() {
    if (jj_2_14(4)) {
      if (!hasError) {
      jj_consume_token(LBRACE);
      }
      if (!hasError) {
      while (!hasError) {
        if (jj_2_13(4)) {
          ;
        } else {
          goto end_label_7;
        }
        if (!hasError) {
        Statement();
        }
      }
      end_label_7: ;
      }
      if (!hasError) {
      jj_consume_token(RBRACE);
      }
    } else if (jj_2_15(4)) {
      if (!hasError) {
      jj_consume_token(IF);
      }
      if (!hasError) {
      jj_consume_token(LPAREN);
      }
      if (!hasError) {
      Exp();
      }
      if (!hasError) {
      jj_consume_token(RPAREN);
      }
      if (!hasError) {
      Statement();
      }
      if (!hasError) {
      jj_consume_token(ELSE);
      }
      if (!hasError) {
      Statement();
      }
    } else if (jj_2_16(4)) {
      if (!hasError) {
      jj_consume_token(WHILE);
      }
      if (!hasError) {
      jj_consume_token(LPAREN);
      }
      if (!hasError) {
      Exp();
      }
      if (!hasError) {
      jj_consume_token(RPAREN);
      }
      if (!hasError) {
      Statement();
      }
    } else if (jj_2_17(4)) {
      if (!hasError) {
      jj_consume_token(SYSTEM_OUT_PRINTLN);
      }
      if (!hasError) {
      jj_consume_token(LPAREN);
      }
      if (!hasError) {
      Exp();
      }
      if (!hasError) {
      jj_consume_token(RPAREN);
      }
      if (!hasError) {
      jj_consume_token(SEMICOLON);
      }
    } else if (jj_2_18(4)) {
      if (!hasError) {
      jj_consume_token(IDENTIFIER);
      }
      if (!hasError) {
      jj_consume_token(ASSIGN);
      }
      if (!hasError) {
      Exp();
      }
      if (!hasError) {
      jj_consume_token(SEMICOLON);
      }
    } else if (jj_2_19(4)) {
      if (!hasError) {
      jj_consume_token(IDENTIFIER);
      }
      if (!hasError) {
      jj_consume_token(LBRACKET);
      }
      if (!hasError) {
      Exp();
      }
      if (!hasError) {
      jj_consume_token(RBRACKET);
      }
      if (!hasError) {
      jj_consume_token(ASSIGN);
      }
      if (!hasError) {
      Exp();
      }
      if (!hasError) {
      jj_consume_token(SEMICOLON);
      }
    } else {
      jj_consume_token(-1);
      errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
    }
}


void MiniJavaParser::Exp() {
    if (!hasError) {
    AndExp();
    }
    if (!hasError) {
    while (!hasError) {
      if (jj_2_20(4)) {
        ;
      } else {
        goto end_label_8;
      }
      if (!hasError) {
      jj_consume_token(OR);
      }
      if (!hasError) {
      AndExp();
      }
    }
    end_label_8: ;
    }
}


void MiniJavaParser::AndExp() {
    if (!hasError) {
    EqNeqExp();
    }
    if (!hasError) {
    while (!hasError) {
      if (jj_2_21(4)) {
        ;
      } else {
        goto end_label_9;
      }
      if (!hasError) {
      jj_consume_token(AND);
      }
      if (!hasError) {
      EqNeqExp();
      }
    }
    end_label_9: ;
    }
}


void MiniJavaParser::EqNeqExp() {
    if (!hasError) {
    RelExp();
    }
    if (!hasError) {
    while (!hasError) {
      if (jj_2_22(4)) {
        ;
      } else {
        goto end_label_10;
      }
      if (!hasError) {
      if (jj_2_23(4)) {
        if (!hasError) {
        jj_consume_token(EQ);
        }
      } else if (jj_2_24(4)) {
        if (!hasError) {
        jj_consume_token(NEQ);
        }
      } else {
        jj_consume_token(-1);
        errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
      }
      }
      if (!hasError) {
      RelExp();
      }
    }
    end_label_10: ;
    }
}


void MiniJavaParser::RelExp() {
    if (!hasError) {
    AddExp();
    }
    if (!hasError) {
    while (!hasError) {
      if (jj_2_25(4)) {
        ;
      } else {
        goto end_label_11;
      }
      if (!hasError) {
      if (jj_2_26(4)) {
        if (!hasError) {
        jj_consume_token(LT);
        }
      } else if (jj_2_27(4)) {
        if (!hasError) {
        jj_consume_token(LTE);
        }
      } else if (jj_2_28(4)) {
        if (!hasError) {
        jj_consume_token(GT);
        }
      } else if (jj_2_29(4)) {
        if (!hasError) {
        jj_consume_token(GTE);
        }
      } else {
        jj_consume_token(-1);
        errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
      }
      }
      if (!hasError) {
      AddExp();
      }
    }
    end_label_11: ;
    }
}


void MiniJavaParser::AddExp() {
    if (!hasError) {
    MulExp();
    }
    if (!hasError) {
    while (!hasError) {
      if (jj_2_30(4)) {
        ;
      } else {
        goto end_label_12;
      }
      if (!hasError) {
      if (jj_2_31(4)) {
        if (!hasError) {
        jj_consume_token(PLUS);
        }
      } else if (jj_2_32(4)) {
        if (!hasError) {
        jj_consume_token(MINUS);
        }
      } else {
        jj_consume_token(-1);
        errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
      }
      }
      if (!hasError) {
      MulExp();
      }
    }
    end_label_12: ;
    }
}


void MiniJavaParser::MulExp() {
    if (!hasError) {
    UnaryExp();
    }
    if (!hasError) {
    while (!hasError) {
      if (jj_2_33(4)) {
        ;
      } else {
        goto end_label_13;
      }
      if (!hasError) {
      if (jj_2_34(4)) {
        if (!hasError) {
        jj_consume_token(MULT);
        }
      } else if (jj_2_35(4)) {
        if (!hasError) {
        jj_consume_token(DIV);
        }
      } else {
        jj_consume_token(-1);
        errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
      }
      }
      if (!hasError) {
      UnaryExp();
      }
    }
    end_label_13: ;
    }
}


void MiniJavaParser::UnaryExp() {
    if (jj_2_36(4)) {
      if (!hasError) {
      jj_consume_token(NOT);
      }
      if (!hasError) {
      AccessorExp();
      }
    } else if (jj_2_37(4)) {
      if (!hasError) {
      AccessorExp();
      }
    } else {
      jj_consume_token(-1);
      errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
    }
}


void MiniJavaParser::AccessorExp() {
    if (jj_2_38(4)) {
      if (!hasError) {
      PrimaryExp();
      }
      if (!hasError) {
      jj_consume_token(DOT);
      }
      if (!hasError) {
      jj_consume_token(LENGTH);
      }
    } else if (jj_2_39(4)) {
      if (!hasError) {
      PrimaryExp();
      }
      if (!hasError) {
      jj_consume_token(DOT);
      }
      if (!hasError) {
      jj_consume_token(IDENTIFIER);
      }
      if (!hasError) {
      jj_consume_token(LPAREN);
      }
      if (!hasError) {
      ExpList();
      }
      if (!hasError) {
      jj_consume_token(RPAREN);
      }
    } else if (jj_2_40(4)) {
      if (!hasError) {
      PrimaryExp();
      }
    } else {
      jj_consume_token(-1);
      errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
    }
}


void MiniJavaParser::PrimaryExp() {
    if (jj_2_41(4)) {
      if (!hasError) {
      jj_consume_token(INTEGER_LITERAL);
      }
    } else if (jj_2_42(4)) {
      if (!hasError) {
      jj_consume_token(TRUE);
      }
    } else if (jj_2_43(4)) {
      if (!hasError) {
      jj_consume_token(FALSE);
      }
    } else if (jj_2_44(4)) {
      if (!hasError) {
      jj_consume_token(IDENTIFIER);
      }
    } else if (jj_2_45(4)) {
      if (!hasError) {
      jj_consume_token(THIS);
      }
    } else if (jj_2_46(4)) {
      if (!hasError) {
      jj_consume_token(NEW);
      }
      if (!hasError) {
      jj_consume_token(INT);
      }
      if (!hasError) {
      jj_consume_token(LBRACKET);
      }
      if (!hasError) {
      Exp();
      }
      if (!hasError) {
      jj_consume_token(RBRACKET);
      }
    } else if (jj_2_47(4)) {
      if (!hasError) {
      jj_consume_token(NEW);
      }
      if (!hasError) {
      jj_consume_token(IDENTIFIER);
      }
      if (!hasError) {
      jj_consume_token(LPAREN);
      }
      if (!hasError) {
      jj_consume_token(RPAREN);
      }
    } else if (jj_2_48(4)) {
      if (!hasError) {
      jj_consume_token(LPAREN);
      }
      if (!hasError) {
      Exp();
      }
      if (!hasError) {
      jj_consume_token(RPAREN);
      }
    } else if (jj_2_49(4)) {
      if (!hasError) {
      jj_consume_token(IDENTIFIER);
      }
      if (!hasError) {
      jj_consume_token(LBRACKET);
      }
      if (!hasError) {
      Exp();
      }
      if (!hasError) {
      jj_consume_token(RBRACKET);
      }
    } else if (jj_2_50(4)) {
      if (!hasError) {
      jj_consume_token(IDENTIFIER);
      }
      if (!hasError) {
      jj_consume_token(DOT);
      }
      if (!hasError) {
      jj_consume_token(IDENTIFIER);
      }
      if (!hasError) {
      jj_consume_token(LPAREN);
      }
      if (!hasError) {
      ExpList();
      }
      if (!hasError) {
      jj_consume_token(RPAREN);
      }
    } else {
      jj_consume_token(-1);
      errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
    }
}


void MiniJavaParser::ExpList() {
    if (!hasError) {
    Exp();
    }
    if (!hasError) {
    while (!hasError) {
      if (jj_2_51(4)) {
        ;
      } else {
        goto end_label_14;
      }
      if (!hasError) {
      jj_consume_token(COMMA);
      }
      if (!hasError) {
      Exp();
      }
    }
    end_label_14: ;
    }
}


  MiniJavaParser::MiniJavaParser(TokenManager *tokenManager){
    head = nullptr;
    ReInit(tokenManager);
}
MiniJavaParser::~MiniJavaParser()
{
  clear();
}

void MiniJavaParser::ReInit(TokenManager* tokenManager){
    clear();
    errorHandler = new ErrorHandler();
    hasError = false;
    token_source = tokenManager;
    head = token = new Token();
    token->kind = 0;
    token->next = nullptr;
    jj_lookingAhead = false;
    jj_rescan = false;
    jj_done = false;
    jj_scanpos = jj_lastpos = nullptr;
    jj_gc = 0;
    jj_kind = -1;
    indent = 0;
    trace = false;
    jj_ntk = -1;
    jj_gen = 0;
  }


void MiniJavaParser::clear(){
  //Since token manager was generate from outside,
  //parser should not take care of deleting
  //if (token_source) delete token_source;
  if (head) {
    Token *next, *t = head;
    while (t) {
      next = t->next;
      delete t;
      t = next;
    }
  }
  if (errorHandler) {
    delete errorHandler, errorHandler = nullptr;
  }
}


Token * MiniJavaParser::jj_consume_token(int kind)  {
    Token *oldToken;
    if ((oldToken = token)->next != nullptr) token = token->next;
    else token = token->next = token_source->getNextToken();
    jj_ntk = -1;
    if (token->kind == kind) {
      jj_gen++;
      if (++jj_gc > 100) {
        jj_gc = 0;
        for (int i = 0; i < 51; i++) {
          JJCalls *c = &jj_2_rtns[i];
          while (c != nullptr) {
            if (c->gen < jj_gen) c->first = nullptr;
            c = c->next;
          }
        }
      }
      return token;
    }
    token = oldToken;
    jj_kind = kind;
    JJString image = kind >= 0 ? tokenImage[kind] : tokenImage[0];
    errorHandler->handleUnexpectedToken(kind, image.substr(1, image.size() - 2), getToken(1), this);
    hasError = true;
    return token;
  }


bool  MiniJavaParser::jj_scan_token(int kind){
    if (jj_scanpos == jj_lastpos) {
      jj_la--;
      if (jj_scanpos->next == nullptr) {
        jj_lastpos = jj_scanpos = jj_scanpos->next = token_source->getNextToken();
      } else {
        jj_lastpos = jj_scanpos = jj_scanpos->next;
      }
    } else {
      jj_scanpos = jj_scanpos->next;
    }
    if (jj_rescan) {
      int i = 0; Token *tok = token;
      while (tok != nullptr && tok != jj_scanpos) { i++; tok = tok->next; }
      if (tok != nullptr) jj_add_error_token(kind, i);
    }
    if (jj_scanpos->kind != kind) return true;
    if (jj_la == 0 && jj_scanpos == jj_lastpos) { return jj_done = true; }
    return false;
  }


/** Get the next Token. */

Token * MiniJavaParser::getNextToken(){
    if (token->next != nullptr) token = token->next;
    else token = token->next = token_source->getNextToken();
    jj_ntk = -1;
    jj_gen++;
    return token;
  }

/** Get the specific Token. */

Token * MiniJavaParser::getToken(int index){
    Token *t = token;
    for (int i = 0; i < index; i++) {
      if (t->next != nullptr) t = t->next;
      else t = t->next = token_source->getNextToken();
    }
    return t;
  }


int MiniJavaParser::jj_ntk_f(){
    if ((jj_nt=token->next) == nullptr)
      return (jj_ntk = (token->next=token_source->getNextToken())->kind);
    else
      return (jj_ntk = jj_nt->kind);
  }


  void MiniJavaParser::jj_add_error_token(int kind, int pos)  {
  }


 void  MiniJavaParser::parseError()   {
      fprintf(stderr, "Parse error at: %d:%d, after token: %s encountered: %s\n", token->beginLine, token->beginColumn, addUnicodeEscapes(token->image).c_str(), addUnicodeEscapes(getToken(1)->image).c_str());
   }


  bool MiniJavaParser::trace_enabled()  {
    return trace;
  }


  void MiniJavaParser::enable_tracing()  {
  }

  void MiniJavaParser::disable_tracing()  {
  }


  void MiniJavaParser::jj_rescan_token(){
    jj_rescan = true;
    for (int i = 0; i < 51; i++) {
      JJCalls *p = &jj_2_rtns[i];
      do {
        if (p->gen > jj_gen) {
          jj_la = p->arg; jj_lastpos = jj_scanpos = p->first;
          switch (i) {
            case 0: jj_3_1(); break;
            case 1: jj_3_2(); break;
            case 2: jj_3_3(); break;
            case 3: jj_3_4(); break;
            case 4: jj_3_5(); break;
            case 5: jj_3_6(); break;
            case 6: jj_3_7(); break;
            case 7: jj_3_8(); break;
            case 8: jj_3_9(); break;
            case 9: jj_3_10(); break;
            case 10: jj_3_11(); break;
            case 11: jj_3_12(); break;
            case 12: jj_3_13(); break;
            case 13: jj_3_14(); break;
            case 14: jj_3_15(); break;
            case 15: jj_3_16(); break;
            case 16: jj_3_17(); break;
            case 17: jj_3_18(); break;
            case 18: jj_3_19(); break;
            case 19: jj_3_20(); break;
            case 20: jj_3_21(); break;
            case 21: jj_3_22(); break;
            case 22: jj_3_23(); break;
            case 23: jj_3_24(); break;
            case 24: jj_3_25(); break;
            case 25: jj_3_26(); break;
            case 26: jj_3_27(); break;
            case 27: jj_3_28(); break;
            case 28: jj_3_29(); break;
            case 29: jj_3_30(); break;
            case 30: jj_3_31(); break;
            case 31: jj_3_32(); break;
            case 32: jj_3_33(); break;
            case 33: jj_3_34(); break;
            case 34: jj_3_35(); break;
            case 35: jj_3_36(); break;
            case 36: jj_3_37(); break;
            case 37: jj_3_38(); break;
            case 38: jj_3_39(); break;
            case 39: jj_3_40(); break;
            case 40: jj_3_41(); break;
            case 41: jj_3_42(); break;
            case 42: jj_3_43(); break;
            case 43: jj_3_44(); break;
            case 44: jj_3_45(); break;
            case 45: jj_3_46(); break;
            case 46: jj_3_47(); break;
            case 47: jj_3_48(); break;
            case 48: jj_3_49(); break;
            case 49: jj_3_50(); break;
            case 50: jj_3_51(); break;
          }
        }
        p = p->next;
      } while (p != nullptr);
    }
    jj_rescan = false;
  }


  void MiniJavaParser::jj_save(int index, int xla){
    JJCalls *p = &jj_2_rtns[index];
    while (p->gen > jj_gen) {
      if (p->next == nullptr) { p = p->next = new JJCalls(); break; }
      p = p->next;
    }
    p->gen = jj_gen + xla - jj_la; p->first = token; p->arg = xla;
  }


