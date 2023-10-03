/* MiniJavaParser.cc */
#include "MiniJavaParser.h"
#include "TokenMgrError.h"
#include "SimpleNode.h"

  /** Constructor with user supplied TokenManager. */




ASTRoot       * MiniJavaParser::Program() {
#if !defined ERROR_RET_Program
#define ERROR_RET_Program NULL
#endif
#define __ERROR_RET__ ERROR_RET_Program

    JJEnter<std::function<void()>> jjenter([this]() {trace_call  ("Program"); });
    JJExit <std::function<void()>> jjexit ([this]() {trace_return("Program"); });
    try {
/*@bgen(jjtree) Root */
  ASTRoot *jjtn000 = new ASTRoot(JJTROOT);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
      try {
        MainClass();
            { if (hasError) { return __ERROR_RET__; } }
        
        while (!hasError) {
          if (jj_2_1(2)) {
            ;
          } else {
            goto end_label_1;
          }
          ClassDecl();
              { if (hasError) { return __ERROR_RET__; } }
          
        }
        end_label_1: ;
        jj_consume_token(0);
            { if (hasError) { return __ERROR_RET__; } }
        
jjtree.closeNodeScope(jjtn000, true);
    jjtc000 = false;
return jjtn000;
      } catch ( ...) {
if (jjtc000) {
      jjtree.clearNodeScope(jjtn000);
      jjtc000 = false;
    } else {
      jjtree.popNode();
    }
      }
if (jjtc000) {
      jjtree.closeNodeScope(jjtn000, true);
    }
    } catch(...) { }
assert(false);

#undef __ERROR_RET__

}


void MiniJavaParser::MainClass() {
#if !defined ERROR_RET_MainClass
#define ERROR_RET_MainClass 
#endif
#define __ERROR_RET__ ERROR_RET_MainClass

    JJEnter<std::function<void()>> jjenter([this]() {trace_call  ("MainClass"); });
    JJExit <std::function<void()>> jjexit ([this]() {trace_return("MainClass"); });
    try {

      jj_consume_token(CLASS);
          { if (hasError) { return __ERROR_RET__; } }
      
      Identifier();
          { if (hasError) { return __ERROR_RET__; } }
      
      jj_consume_token(LBRACE);
          { if (hasError) { return __ERROR_RET__; } }
      
      jj_consume_token(PUBLIC);
          { if (hasError) { return __ERROR_RET__; } }
      
      jj_consume_token(STATIC);
          { if (hasError) { return __ERROR_RET__; } }
      
      jj_consume_token(VOID);
          { if (hasError) { return __ERROR_RET__; } }
      
      jj_consume_token(MAIN);
          { if (hasError) { return __ERROR_RET__; } }
      
      jj_consume_token(LPAREN);
          { if (hasError) { return __ERROR_RET__; } }
      
      jj_consume_token(STRING);
          { if (hasError) { return __ERROR_RET__; } }
      
      jj_consume_token(LBRACKET);
          { if (hasError) { return __ERROR_RET__; } }
      
      jj_consume_token(RBRACKET);
          { if (hasError) { return __ERROR_RET__; } }
      
      Identifier();
          { if (hasError) { return __ERROR_RET__; } }
      
      jj_consume_token(RPAREN);
          { if (hasError) { return __ERROR_RET__; } }
      
      jj_consume_token(LBRACE);
          { if (hasError) { return __ERROR_RET__; } }
      
      Statement();
          { if (hasError) { return __ERROR_RET__; } }
      
      jj_consume_token(RBRACE);
          { if (hasError) { return __ERROR_RET__; } }
      
      jj_consume_token(RBRACE);
          { if (hasError) { return __ERROR_RET__; } }
      
    } catch(...) { }

#undef __ERROR_RET__

}


void MiniJavaParser::ClassDecl() {
#if !defined ERROR_RET_ClassDecl
#define ERROR_RET_ClassDecl 
#endif
#define __ERROR_RET__ ERROR_RET_ClassDecl

    JJEnter<std::function<void()>> jjenter([this]() {trace_call  ("ClassDecl"); });
    JJExit <std::function<void()>> jjexit ([this]() {trace_return("ClassDecl"); });
    try {

      jj_consume_token(CLASS);
          { if (hasError) { return __ERROR_RET__; } }
      
      Identifier();
          { if (hasError) { return __ERROR_RET__; } }
      
      if (jj_2_2(2)) {
        jj_consume_token(EXTENDS);
            { if (hasError) { return __ERROR_RET__; } }
        
        Identifier();
            { if (hasError) { return __ERROR_RET__; } }
        
      } else {
        ;
      }
      jj_consume_token(LBRACE);
          { if (hasError) { return __ERROR_RET__; } }
      
      while (!hasError) {
        if (jj_2_3(2)) {
          ;
        } else {
          goto end_label_2;
        }
        VarDecl();
            { if (hasError) { return __ERROR_RET__; } }
        
      }
      end_label_2: ;
      while (!hasError) {
        if (jj_2_4(2)) {
          ;
        } else {
          goto end_label_3;
        }
        MethodDecl();
            { if (hasError) { return __ERROR_RET__; } }
        
      }
      end_label_3: ;
      jj_consume_token(RBRACE);
          { if (hasError) { return __ERROR_RET__; } }
      
    } catch(...) { }

#undef __ERROR_RET__

}


void MiniJavaParser::VarDecl() {
#if !defined ERROR_RET_VarDecl
#define ERROR_RET_VarDecl 
#endif
#define __ERROR_RET__ ERROR_RET_VarDecl

    JJEnter<std::function<void()>> jjenter([this]() {trace_call  ("VarDecl"); });
    JJExit <std::function<void()>> jjexit ([this]() {trace_return("VarDecl"); });
    try {

      Type();
          { if (hasError) { return __ERROR_RET__; } }
      
      Identifier();
          { if (hasError) { return __ERROR_RET__; } }
      
      jj_consume_token(SEMICOLON);
          { if (hasError) { return __ERROR_RET__; } }
      
    } catch(...) { }

#undef __ERROR_RET__

}


void MiniJavaParser::MethodDecl() {
#if !defined ERROR_RET_MethodDecl
#define ERROR_RET_MethodDecl 
#endif
#define __ERROR_RET__ ERROR_RET_MethodDecl

    JJEnter<std::function<void()>> jjenter([this]() {trace_call  ("MethodDecl"); });
    JJExit <std::function<void()>> jjexit ([this]() {trace_return("MethodDecl"); });
    try {

      jj_consume_token(PUBLIC);
          { if (hasError) { return __ERROR_RET__; } }
      
      Type();
          { if (hasError) { return __ERROR_RET__; } }
      
      Identifier();
          { if (hasError) { return __ERROR_RET__; } }
      
      jj_consume_token(LPAREN);
          { if (hasError) { return __ERROR_RET__; } }
      
      ArgsList();
          { if (hasError) { return __ERROR_RET__; } }
      
      jj_consume_token(RPAREN);
          { if (hasError) { return __ERROR_RET__; } }
      
      jj_consume_token(LBRACE);
          { if (hasError) { return __ERROR_RET__; } }
      
      while (!hasError) {
        if (jj_2_5(2)) {
          ;
        } else {
          goto end_label_4;
        }
        if (jj_2_6(2)) {
          Statement();
              { if (hasError) { return __ERROR_RET__; } }
          
        } else if (jj_2_7(2)) {
          VarDecl();
              { if (hasError) { return __ERROR_RET__; } }
          
        } else {
          jj_consume_token(-1);
          errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;return __ERROR_RET__;
          
        }
      }
      end_label_4: ;
      jj_consume_token(RETURN);
          { if (hasError) { return __ERROR_RET__; } }
      
      Exp();
          { if (hasError) { return __ERROR_RET__; } }
      
      jj_consume_token(SEMICOLON);
          { if (hasError) { return __ERROR_RET__; } }
      
      jj_consume_token(RBRACE);
          { if (hasError) { return __ERROR_RET__; } }
      
    } catch(...) { }

#undef __ERROR_RET__

}


void MiniJavaParser::ArgsList() {
#if !defined ERROR_RET_ArgsList
#define ERROR_RET_ArgsList 
#endif
#define __ERROR_RET__ ERROR_RET_ArgsList

    JJEnter<std::function<void()>> jjenter([this]() {trace_call  ("ArgsList"); });
    JJExit <std::function<void()>> jjexit ([this]() {trace_return("ArgsList"); });
    try {

      if (jj_2_9(2)) {
        Type();
            { if (hasError) { return __ERROR_RET__; } }
        
        Identifier();
            { if (hasError) { return __ERROR_RET__; } }
        
        while (!hasError) {
          if (jj_2_8(2)) {
            ;
          } else {
            goto end_label_5;
          }
          FormalRest();
              { if (hasError) { return __ERROR_RET__; } }
          
        }
        end_label_5: ;
      } else {
        ;
      }
    } catch(...) { }

#undef __ERROR_RET__

}


void MiniJavaParser::FormalRest() {
#if !defined ERROR_RET_FormalRest
#define ERROR_RET_FormalRest 
#endif
#define __ERROR_RET__ ERROR_RET_FormalRest

    JJEnter<std::function<void()>> jjenter([this]() {trace_call  ("FormalRest"); });
    JJExit <std::function<void()>> jjexit ([this]() {trace_return("FormalRest"); });
    try {

      jj_consume_token(COMMA);
          { if (hasError) { return __ERROR_RET__; } }
      
      Type();
          { if (hasError) { return __ERROR_RET__; } }
      
      Identifier();
          { if (hasError) { return __ERROR_RET__; } }
      
    } catch(...) { }

#undef __ERROR_RET__

}


void MiniJavaParser::Type() {
#if !defined ERROR_RET_Type
#define ERROR_RET_Type 
#endif
#define __ERROR_RET__ ERROR_RET_Type

    JJEnter<std::function<void()>> jjenter([this]() {trace_call  ("Type"); });
    JJExit <std::function<void()>> jjexit ([this]() {trace_return("Type"); });
    try {

      if (jj_2_10(2)) {
        SimpleType();
            { if (hasError) { return __ERROR_RET__; } }
        
      } else if (jj_2_11(2)) {
        Identifier();
            { if (hasError) { return __ERROR_RET__; } }
        
      } else {
        jj_consume_token(-1);
        errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;return __ERROR_RET__;
        
      }
      if (jj_2_12(2)) {
        jj_consume_token(LBRACKET);
            { if (hasError) { return __ERROR_RET__; } }
        
        jj_consume_token(RBRACKET);
            { if (hasError) { return __ERROR_RET__; } }
        
      } else {
        ;
      }
    } catch(...) { }

#undef __ERROR_RET__

}


void MiniJavaParser::SimpleType() {
#if !defined ERROR_RET_SimpleType
#define ERROR_RET_SimpleType 
#endif
#define __ERROR_RET__ ERROR_RET_SimpleType

    JJEnter<std::function<void()>> jjenter([this]() {trace_call  ("SimpleType"); });
    JJExit <std::function<void()>> jjexit ([this]() {trace_return("SimpleType"); });
    try {

      if (jj_2_13(2)) {
        jj_consume_token(INT);
            { if (hasError) { return __ERROR_RET__; } }
        
      } else if (jj_2_14(2)) {
        jj_consume_token(BOOLEAN);
            { if (hasError) { return __ERROR_RET__; } }
        
      } else {
        jj_consume_token(-1);
        errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;return __ERROR_RET__;
        
      }
    } catch(...) { }

#undef __ERROR_RET__

}


void MiniJavaParser::Statement() {
#if !defined ERROR_RET_Statement
#define ERROR_RET_Statement 
#endif
#define __ERROR_RET__ ERROR_RET_Statement

    JJEnter<std::function<void()>> jjenter([this]() {trace_call  ("Statement"); });
    JJExit <std::function<void()>> jjexit ([this]() {trace_return("Statement"); });
    try {

      if (jj_2_15(2)) {
        BlockStatement();
            { if (hasError) { return __ERROR_RET__; } }
        
      } else if (jj_2_16(2)) {
        ExpressionInStatement();
            { if (hasError) { return __ERROR_RET__; } }
        
        jj_consume_token(SEMICOLON);
            { if (hasError) { return __ERROR_RET__; } }
        
      } else if (jj_2_17(2)) {
        IfStatement();
            { if (hasError) { return __ERROR_RET__; } }
        
      } else if (jj_2_18(2)) {
        WhileStatement();
            { if (hasError) { return __ERROR_RET__; } }
        
      } else if (jj_2_19(2)) {
        PrintStatement();
            { if (hasError) { return __ERROR_RET__; } }
        
      } else if (jj_2_20(2)) {
        EmptyStatement();
            { if (hasError) { return __ERROR_RET__; } }
        
      } else {
        jj_consume_token(-1);
        errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;return __ERROR_RET__;
        
      }
    } catch(...) { }

#undef __ERROR_RET__

}


void MiniJavaParser::BlockStatement() {
#if !defined ERROR_RET_BlockStatement
#define ERROR_RET_BlockStatement 
#endif
#define __ERROR_RET__ ERROR_RET_BlockStatement

    JJEnter<std::function<void()>> jjenter([this]() {trace_call  ("BlockStatement"); });
    JJExit <std::function<void()>> jjexit ([this]() {trace_return("BlockStatement"); });
    try {

      jj_consume_token(LBRACE);
          { if (hasError) { return __ERROR_RET__; } }
      
      while (!hasError) {
        if (jj_2_21(2)) {
          ;
        } else {
          goto end_label_6;
        }
        Statement();
            { if (hasError) { return __ERROR_RET__; } }
        
      }
      end_label_6: ;
      jj_consume_token(RBRACE);
          { if (hasError) { return __ERROR_RET__; } }
      
    } catch(...) { }

#undef __ERROR_RET__

}


void MiniJavaParser::IfStatement() {
#if !defined ERROR_RET_IfStatement
#define ERROR_RET_IfStatement 
#endif
#define __ERROR_RET__ ERROR_RET_IfStatement

    JJEnter<std::function<void()>> jjenter([this]() {trace_call  ("IfStatement"); });
    JJExit <std::function<void()>> jjexit ([this]() {trace_return("IfStatement"); });
    try {

      jj_consume_token(IF);
          { if (hasError) { return __ERROR_RET__; } }
      
      jj_consume_token(LPAREN);
          { if (hasError) { return __ERROR_RET__; } }
      
      Exp();
          { if (hasError) { return __ERROR_RET__; } }
      
      jj_consume_token(RPAREN);
          { if (hasError) { return __ERROR_RET__; } }
      
      Statement();
          { if (hasError) { return __ERROR_RET__; } }
      
      jj_consume_token(ELSE);
          { if (hasError) { return __ERROR_RET__; } }
      
      Statement();
          { if (hasError) { return __ERROR_RET__; } }
      
    } catch(...) { }

#undef __ERROR_RET__

}


void MiniJavaParser::WhileStatement() {
#if !defined ERROR_RET_WhileStatement
#define ERROR_RET_WhileStatement 
#endif
#define __ERROR_RET__ ERROR_RET_WhileStatement

    JJEnter<std::function<void()>> jjenter([this]() {trace_call  ("WhileStatement"); });
    JJExit <std::function<void()>> jjexit ([this]() {trace_return("WhileStatement"); });
    try {

      jj_consume_token(WHILE);
          { if (hasError) { return __ERROR_RET__; } }
      
      jj_consume_token(LPAREN);
          { if (hasError) { return __ERROR_RET__; } }
      
      Exp();
          { if (hasError) { return __ERROR_RET__; } }
      
      jj_consume_token(RPAREN);
          { if (hasError) { return __ERROR_RET__; } }
      
      Statement();
          { if (hasError) { return __ERROR_RET__; } }
      
    } catch(...) { }

#undef __ERROR_RET__

}


void MiniJavaParser::PrintStatement() {
#if !defined ERROR_RET_PrintStatement
#define ERROR_RET_PrintStatement 
#endif
#define __ERROR_RET__ ERROR_RET_PrintStatement

    JJEnter<std::function<void()>> jjenter([this]() {trace_call  ("PrintStatement"); });
    JJExit <std::function<void()>> jjexit ([this]() {trace_return("PrintStatement"); });
    try {

      jj_consume_token(SYSTEM_OUT_PRINTLN);
          { if (hasError) { return __ERROR_RET__; } }
      
      jj_consume_token(LPAREN);
          { if (hasError) { return __ERROR_RET__; } }
      
      Exp();
          { if (hasError) { return __ERROR_RET__; } }
      
      jj_consume_token(RPAREN);
          { if (hasError) { return __ERROR_RET__; } }
      
      jj_consume_token(SEMICOLON);
          { if (hasError) { return __ERROR_RET__; } }
      
    } catch(...) { }

#undef __ERROR_RET__

}


void MiniJavaParser::EmptyStatement() {
#if !defined ERROR_RET_EmptyStatement
#define ERROR_RET_EmptyStatement 
#endif
#define __ERROR_RET__ ERROR_RET_EmptyStatement

    JJEnter<std::function<void()>> jjenter([this]() {trace_call  ("EmptyStatement"); });
    JJExit <std::function<void()>> jjexit ([this]() {trace_return("EmptyStatement"); });
    try {

      jj_consume_token(SEMICOLON);
          { if (hasError) { return __ERROR_RET__; } }
      
    } catch(...) { }

#undef __ERROR_RET__

}


void MiniJavaParser::ExpressionInStatement() {
#if !defined ERROR_RET_ExpressionInStatement
#define ERROR_RET_ExpressionInStatement 
#endif
#define __ERROR_RET__ ERROR_RET_ExpressionInStatement

    JJEnter<std::function<void()>> jjenter([this]() {trace_call  ("ExpressionInStatement"); });
    JJExit <std::function<void()>> jjexit ([this]() {trace_return("ExpressionInStatement"); });
    try {

      PrimaryExp();
          { if (hasError) { return __ERROR_RET__; } }
      
      jj_consume_token(ASSIGN);
          { if (hasError) { return __ERROR_RET__; } }
      
      OrExp();
          { if (hasError) { return __ERROR_RET__; } }
      
    } catch(...) { }

#undef __ERROR_RET__

}


void MiniJavaParser::Exp() {
#if !defined ERROR_RET_Exp
#define ERROR_RET_Exp 
#endif
#define __ERROR_RET__ ERROR_RET_Exp

    JJEnter<std::function<void()>> jjenter([this]() {trace_call  ("Exp"); });
    JJExit <std::function<void()>> jjexit ([this]() {trace_return("Exp"); });
    try {

ASTAssignNode *jjtn001 = new ASTAssignNode(JJTASSIGNNODE);
    bool jjtc001 = true;
    jjtree.openNodeScope(jjtn001);
      try {
        OrExp();
            { if (hasError) { return __ERROR_RET__; } }
        
        while (!hasError) {
          if (jj_2_22(2)) {
            ;
          } else {
            goto end_label_7;
          }
          jj_consume_token(ASSIGN);
              { if (hasError) { return __ERROR_RET__; } }
          
          OrExp();
              { if (hasError) { return __ERROR_RET__; } }
          
        }
        end_label_7: ;
      } catch ( ...) {
if (jjtc001) {
      jjtree.clearNodeScope(jjtn001);
      jjtc001 = false;
    } else {
      jjtree.popNode();
    }
      }
if (jjtc001) {
      jjtree.closeNodeScope(jjtn001, true);
    }
    } catch(...) { }

#undef __ERROR_RET__

}


void MiniJavaParser::OrExp() {
#if !defined ERROR_RET_OrExp
#define ERROR_RET_OrExp 
#endif
#define __ERROR_RET__ ERROR_RET_OrExp

    JJEnter<std::function<void()>> jjenter([this]() {trace_call  ("OrExp"); });
    JJExit <std::function<void()>> jjexit ([this]() {trace_return("OrExp"); });
    try {

ASTOrNode *jjtn001 = new ASTOrNode(JJTORNODE);
    bool jjtc001 = true;
    jjtree.openNodeScope(jjtn001);
      try {
        AndExp();
            { if (hasError) { return __ERROR_RET__; } }
        
        while (!hasError) {
          if (jj_2_23(2)) {
            ;
          } else {
            goto end_label_8;
          }
          jj_consume_token(OR);
              { if (hasError) { return __ERROR_RET__; } }
          
          AndExp();
              { if (hasError) { return __ERROR_RET__; } }
          
        }
        end_label_8: ;
      } catch ( ...) {
if (jjtc001) {
      jjtree.clearNodeScope(jjtn001);
      jjtc001 = false;
    } else {
      jjtree.popNode();
    }
      }
if (jjtc001) {
      jjtree.closeNodeScope(jjtn001, true);
    }
    } catch(...) { }

#undef __ERROR_RET__

}


void MiniJavaParser::AndExp() {
#if !defined ERROR_RET_AndExp
#define ERROR_RET_AndExp 
#endif
#define __ERROR_RET__ ERROR_RET_AndExp

    JJEnter<std::function<void()>> jjenter([this]() {trace_call  ("AndExp"); });
    JJExit <std::function<void()>> jjexit ([this]() {trace_return("AndExp"); });
    try {

ASTAndNode *jjtn001 = new ASTAndNode(JJTANDNODE);
    bool jjtc001 = true;
    jjtree.openNodeScope(jjtn001);
      try {
        EqNeqExp();
            { if (hasError) { return __ERROR_RET__; } }
        
        while (!hasError) {
          if (jj_2_24(2)) {
            ;
          } else {
            goto end_label_9;
          }
          jj_consume_token(AND);
              { if (hasError) { return __ERROR_RET__; } }
          
          EqNeqExp();
              { if (hasError) { return __ERROR_RET__; } }
          
        }
        end_label_9: ;
      } catch ( ...) {
if (jjtc001) {
      jjtree.clearNodeScope(jjtn001);
      jjtc001 = false;
    } else {
      jjtree.popNode();
    }
      }
if (jjtc001) {
      jjtree.closeNodeScope(jjtn001, true);
    }
    } catch(...) { }

#undef __ERROR_RET__

}


void MiniJavaParser::EqNeqExp() {
#if !defined ERROR_RET_EqNeqExp
#define ERROR_RET_EqNeqExp 
#endif
#define __ERROR_RET__ ERROR_RET_EqNeqExp

    JJEnter<std::function<void()>> jjenter([this]() {trace_call  ("EqNeqExp"); });
    JJExit <std::function<void()>> jjexit ([this]() {trace_return("EqNeqExp"); });
    try {

ASTEqNeqNode *jjtn001 = new ASTEqNeqNode(JJTEQNEQNODE);
    bool jjtc001 = true;
    jjtree.openNodeScope(jjtn001);
      try {
        RelExp();
            { if (hasError) { return __ERROR_RET__; } }
        
        while (!hasError) {
          if (jj_2_25(2)) {
            ;
          } else {
            goto end_label_10;
          }
          if (jj_2_26(2)) {
            jj_consume_token(EQ);
                { if (hasError) { return __ERROR_RET__; } }
            
          } else if (jj_2_27(2)) {
            jj_consume_token(NEQ);
                { if (hasError) { return __ERROR_RET__; } }
            
          } else {
            jj_consume_token(-1);
            errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;return __ERROR_RET__;
            
          }
          RelExp();
              { if (hasError) { return __ERROR_RET__; } }
          
        }
        end_label_10: ;
      } catch ( ...) {
if (jjtc001) {
      jjtree.clearNodeScope(jjtn001);
      jjtc001 = false;
    } else {
      jjtree.popNode();
    }
      }
if (jjtc001) {
      jjtree.closeNodeScope(jjtn001, true);
    }
    } catch(...) { }

#undef __ERROR_RET__

}


void MiniJavaParser::RelExp() {
#if !defined ERROR_RET_RelExp
#define ERROR_RET_RelExp 
#endif
#define __ERROR_RET__ ERROR_RET_RelExp

    JJEnter<std::function<void()>> jjenter([this]() {trace_call  ("RelExp"); });
    JJExit <std::function<void()>> jjexit ([this]() {trace_return("RelExp"); });
    try {

      AddExp();
          { if (hasError) { return __ERROR_RET__; } }
      
      while (!hasError) {
        if (jj_2_28(2)) {
          ;
        } else {
          goto end_label_11;
        }
        if (jj_2_29(2)) {
          jj_consume_token(LT);
              { if (hasError) { return __ERROR_RET__; } }
          
        } else if (jj_2_30(2)) {
          jj_consume_token(LTE);
              { if (hasError) { return __ERROR_RET__; } }
          
        } else if (jj_2_31(2)) {
          jj_consume_token(GT);
              { if (hasError) { return __ERROR_RET__; } }
          
        } else if (jj_2_32(2)) {
          jj_consume_token(GTE);
              { if (hasError) { return __ERROR_RET__; } }
          
        } else {
          jj_consume_token(-1);
          errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;return __ERROR_RET__;
          
        }
        AddExp();
            { if (hasError) { return __ERROR_RET__; } }
        
      }
      end_label_11: ;
    } catch(...) { }

#undef __ERROR_RET__

}


void MiniJavaParser::AddExp() {
#if !defined ERROR_RET_AddExp
#define ERROR_RET_AddExp 
#endif
#define __ERROR_RET__ ERROR_RET_AddExp

    JJEnter<std::function<void()>> jjenter([this]() {trace_call  ("AddExp"); });
    JJExit <std::function<void()>> jjexit ([this]() {trace_return("AddExp"); });
    try {

      MulExp();
          { if (hasError) { return __ERROR_RET__; } }
      
      while (!hasError) {
        if (jj_2_33(2)) {
          ;
        } else {
          goto end_label_12;
        }
        if (jj_2_34(2)) {
          jj_consume_token(PLUS);
              { if (hasError) { return __ERROR_RET__; } }
          
        } else if (jj_2_35(2)) {
          jj_consume_token(MINUS);
              { if (hasError) { return __ERROR_RET__; } }
          
        } else {
          jj_consume_token(-1);
          errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;return __ERROR_RET__;
          
        }
        MulExp();
            { if (hasError) { return __ERROR_RET__; } }
        
      }
      end_label_12: ;
    } catch(...) { }

#undef __ERROR_RET__

}


void MiniJavaParser::MulExp() {
#if !defined ERROR_RET_MulExp
#define ERROR_RET_MulExp 
#endif
#define __ERROR_RET__ ERROR_RET_MulExp

    JJEnter<std::function<void()>> jjenter([this]() {trace_call  ("MulExp"); });
    JJExit <std::function<void()>> jjexit ([this]() {trace_return("MulExp"); });
    try {

      UnaryExp();
          { if (hasError) { return __ERROR_RET__; } }
      
      while (!hasError) {
        if (jj_2_36(2)) {
          ;
        } else {
          goto end_label_13;
        }
        if (jj_2_37(2)) {
          jj_consume_token(MULT);
              { if (hasError) { return __ERROR_RET__; } }
          
        } else if (jj_2_38(2)) {
          jj_consume_token(DIV);
              { if (hasError) { return __ERROR_RET__; } }
          
        } else {
          jj_consume_token(-1);
          errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;return __ERROR_RET__;
          
        }
        UnaryExp();
            { if (hasError) { return __ERROR_RET__; } }
        
      }
      end_label_13: ;
    } catch(...) { }

#undef __ERROR_RET__

}


void MiniJavaParser::UnaryExp() {
#if !defined ERROR_RET_UnaryExp
#define ERROR_RET_UnaryExp 
#endif
#define __ERROR_RET__ ERROR_RET_UnaryExp

    JJEnter<std::function<void()>> jjenter([this]() {trace_call  ("UnaryExp"); });
    JJExit <std::function<void()>> jjexit ([this]() {trace_return("UnaryExp"); });
    try {

      if (jj_2_39(2)) {
        jj_consume_token(NOT);
            { if (hasError) { return __ERROR_RET__; } }
        
        PrimaryExp();
            { if (hasError) { return __ERROR_RET__; } }
        
      } else if (jj_2_40(2)) {
        PrimaryExp();
            { if (hasError) { return __ERROR_RET__; } }
        
      } else {
        jj_consume_token(-1);
        errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;return __ERROR_RET__;
        
      }
    } catch(...) { }

#undef __ERROR_RET__

}


void MiniJavaParser::PrimaryExp() {
#if !defined ERROR_RET_PrimaryExp
#define ERROR_RET_PrimaryExp 
#endif
#define __ERROR_RET__ ERROR_RET_PrimaryExp

    JJEnter<std::function<void()>> jjenter([this]() {trace_call  ("PrimaryExp"); });
    JJExit <std::function<void()>> jjexit ([this]() {trace_return("PrimaryExp"); });
    try {

      BeforePrimay();
          { if (hasError) { return __ERROR_RET__; } }
      
      while (!hasError) {
        if (jj_2_41(2)) {
          ;
        } else {
          goto end_label_14;
        }
        AfterPrimary();
            { if (hasError) { return __ERROR_RET__; } }
        
      }
      end_label_14: ;
    } catch(...) { }

#undef __ERROR_RET__

}


void MiniJavaParser::BeforePrimay() {
#if !defined ERROR_RET_BeforePrimay
#define ERROR_RET_BeforePrimay 
#endif
#define __ERROR_RET__ ERROR_RET_BeforePrimay

    JJEnter<std::function<void()>> jjenter([this]() {trace_call  ("BeforePrimay"); });
    JJExit <std::function<void()>> jjexit ([this]() {trace_return("BeforePrimay"); });
    try {

      if (jj_2_42(2)) {
        Identifier();
            { if (hasError) { return __ERROR_RET__; } }
        
      } else if (jj_2_43(2)) {
        Literal();
            { if (hasError) { return __ERROR_RET__; } }
        
      } else if (jj_2_44(2)) {
        jj_consume_token(THIS);
            { if (hasError) { return __ERROR_RET__; } }
        
      } else if (jj_2_45(2)) {
        jj_consume_token(LPAREN);
            { if (hasError) { return __ERROR_RET__; } }
        
        Exp();
            { if (hasError) { return __ERROR_RET__; } }
        
        jj_consume_token(RPAREN);
            { if (hasError) { return __ERROR_RET__; } }
        
      } else if (jj_2_46(2)) {
        AllocateMemory();
            { if (hasError) { return __ERROR_RET__; } }
        
      } else {
        jj_consume_token(-1);
        errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;return __ERROR_RET__;
        
      }
    } catch(...) { }

#undef __ERROR_RET__

}


void MiniJavaParser::AfterPrimary() {
#if !defined ERROR_RET_AfterPrimary
#define ERROR_RET_AfterPrimary 
#endif
#define __ERROR_RET__ ERROR_RET_AfterPrimary

    JJEnter<std::function<void()>> jjenter([this]() {trace_call  ("AfterPrimary"); });
    JJExit <std::function<void()>> jjexit ([this]() {trace_return("AfterPrimary"); });
    try {

      if (jj_2_47(2)) {
        jj_consume_token(LBRACKET);
            { if (hasError) { return __ERROR_RET__; } }
        
        Exp();
            { if (hasError) { return __ERROR_RET__; } }
        
        jj_consume_token(RBRACKET);
            { if (hasError) { return __ERROR_RET__; } }
        
      } else if (jj_2_48(2)) {
        jj_consume_token(DOT);
            { if (hasError) { return __ERROR_RET__; } }
        
        Identifier();
            { if (hasError) { return __ERROR_RET__; } }
        
      } else if (jj_2_49(2)) {
        jj_consume_token(LPAREN);
            { if (hasError) { return __ERROR_RET__; } }
        
        ExpList();
            { if (hasError) { return __ERROR_RET__; } }
        
        jj_consume_token(RPAREN);
            { if (hasError) { return __ERROR_RET__; } }
        
      } else {
        jj_consume_token(-1);
        errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;return __ERROR_RET__;
        
      }
    } catch(...) { }

#undef __ERROR_RET__

}


void MiniJavaParser::AllocateMemory() {
#if !defined ERROR_RET_AllocateMemory
#define ERROR_RET_AllocateMemory 
#endif
#define __ERROR_RET__ ERROR_RET_AllocateMemory

    JJEnter<std::function<void()>> jjenter([this]() {trace_call  ("AllocateMemory"); });
    JJExit <std::function<void()>> jjexit ([this]() {trace_return("AllocateMemory"); });
    try {

      jj_consume_token(NEW);
          { if (hasError) { return __ERROR_RET__; } }
      
      if (jj_2_50(2)) {
        Identifier();
            { if (hasError) { return __ERROR_RET__; } }
        
        jj_consume_token(LPAREN);
            { if (hasError) { return __ERROR_RET__; } }
        
        jj_consume_token(RPAREN);
            { if (hasError) { return __ERROR_RET__; } }
        
      } else if (jj_2_51(2)) {
        SimpleType();
            { if (hasError) { return __ERROR_RET__; } }
        
      } else {
        jj_consume_token(-1);
        errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;return __ERROR_RET__;
        
      }
    } catch(...) { }

#undef __ERROR_RET__

}


void MiniJavaParser::Literal() {
#if !defined ERROR_RET_Literal
#define ERROR_RET_Literal 
#endif
#define __ERROR_RET__ ERROR_RET_Literal

    JJEnter<std::function<void()>> jjenter([this]() {trace_call  ("Literal"); });
    JJExit <std::function<void()>> jjexit ([this]() {trace_return("Literal"); });
    try {
Token* t = NULL;/*@bgen(jjtree) LiteralNode */
  ASTLiteralNode *jjtn000 = new ASTLiteralNode(JJTLITERALNODE);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
      try {
        if (jj_2_52(2)) {
          t = jj_consume_token(INTEGER_LITERAL);
              { if (hasError) { return __ERROR_RET__; } }
          
jjtree.closeNodeScope(jjtn000, true);
    jjtc000 = false;
jjtn000->setValue(t->image);
        } else if (jj_2_53(2)) {
          t = jj_consume_token(TRUE);
              { if (hasError) { return __ERROR_RET__; } }
          
jjtree.closeNodeScope(jjtn000, true);
    jjtc000 = false;
jjtn000->setValue(t->image);
        } else if (jj_2_54(2)) {
          t = jj_consume_token(FALSE);
              { if (hasError) { return __ERROR_RET__; } }
          
jjtree.closeNodeScope(jjtn000, true);
    jjtc000 = false;
jjtn000->setValue(t->image);
        } else {
          jj_consume_token(-1);
          errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;return __ERROR_RET__;
          
        }
      } catch ( ...) {
if (jjtc000) {
      jjtree.clearNodeScope(jjtn000);
      jjtc000 = false;
    } else {
      jjtree.popNode();
    }
      }
if (jjtc000) {
      jjtree.closeNodeScope(jjtn000, true);
    }
    } catch(...) { }

#undef __ERROR_RET__

}


void MiniJavaParser::Identifier() {
#if !defined ERROR_RET_Identifier
#define ERROR_RET_Identifier 
#endif
#define __ERROR_RET__ ERROR_RET_Identifier

    JJEnter<std::function<void()>> jjenter([this]() {trace_call  ("Identifier"); });
    JJExit <std::function<void()>> jjexit ([this]() {trace_return("Identifier"); });
    try {
Token* t = NULL;/*@bgen(jjtree) Identifier */
  ASTIdentifier *jjtn000 = new ASTIdentifier(JJTIDENTIFIER);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
      try {
        t = jj_consume_token(IDENTIFIER);
            { if (hasError) { return __ERROR_RET__; } }
        
jjtree.closeNodeScope(jjtn000, true);
    jjtc000 = false;
jjtn000->setName(t->image);
      } catch ( ...) {
if (jjtc000) {
      jjtree.clearNodeScope(jjtn000);
      jjtc000 = false;
    } else {
      jjtree.popNode();
    }
      }
if (jjtc000) {
      jjtree.closeNodeScope(jjtn000, true);
    }
    } catch(...) { }

#undef __ERROR_RET__

}


void MiniJavaParser::ExpList() {
#if !defined ERROR_RET_ExpList
#define ERROR_RET_ExpList 
#endif
#define __ERROR_RET__ ERROR_RET_ExpList

    JJEnter<std::function<void()>> jjenter([this]() {trace_call  ("ExpList"); });
    JJExit <std::function<void()>> jjexit ([this]() {trace_return("ExpList"); });
    try {

      Exp();
          { if (hasError) { return __ERROR_RET__; } }
      
      while (!hasError) {
        if (jj_2_55(2)) {
          ;
        } else {
          goto end_label_15;
        }
        jj_consume_token(COMMA);
            { if (hasError) { return __ERROR_RET__; } }
        
        Exp();
            { if (hasError) { return __ERROR_RET__; } }
        
      }
      end_label_15: ;
    } catch(...) { }

#undef __ERROR_RET__

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
    trace = true;
    jj_ntk = -1;
    jjtree.reset();
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
        for (int i = 0; i < 55; i++) {
          JJCalls *c = &jj_2_rtns[i];
          while (c != nullptr) {
            if (c->gen < jj_gen) c->first = nullptr;
            c = c->next;
          }
        }
      }
      trace_token(token, "");
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
      trace_token(token, " (in getNextToken)");
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


  void MiniJavaParser::enable_tracing(){
    trace = true;
}


  void MiniJavaParser::disable_tracing(){
    trace = false;
}


  void MiniJavaParser::trace_call(const char *s)  {
    if (trace_enabled()) {
      for (int i = 0; i < indent; i++) { printf(" "); }
      printf("Call:   %s\n", s);
    }
    indent = indent + 2;
  }


  void MiniJavaParser::trace_return(const char *s)  {
    indent = indent - 2;
    if (trace_enabled()) {
      for (int i = 0; i < indent; i++) { printf(" "); }
      printf("Return: %s\n", s);
    }
  }


  void MiniJavaParser::trace_token(Token *t, const char *where)  {
    if (trace_enabled()) {
      for (int i = 0; i < indent; i++) { printf(" "); }
      printf("Consumed token: <kind: %d(%s), \"%s\"", t->kind, addUnicodeEscapes(tokenImage[t->kind]).c_str(), addUnicodeEscapes(t->image).c_str());
      printf(" at line %d column %d> %s\n", t->beginLine, t->beginColumn, where);
    }
  }


  void MiniJavaParser::trace_scan(Token *t1, int t2)  {
    if (trace_enabled()) {
      for (int i = 0; i < indent; i++) { printf(" "); }
      printf("Visited token: <Kind: %d(%s), \"%s\"", t1->kind, addUnicodeEscapes(tokenImage[t1->kind]).c_str(), addUnicodeEscapes(t1->image).c_str());
      printf(" at line %d column %d>; Expected token: %s\n", t1->beginLine, t1->beginColumn, addUnicodeEscapes(tokenImage[t2]).c_str());
    }
  }


  void MiniJavaParser::jj_rescan_token(){
    jj_rescan = true;
    for (int i = 0; i < 55; i++) {
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
            case 51: jj_3_52(); break;
            case 52: jj_3_53(); break;
            case 53: jj_3_54(); break;
            case 54: jj_3_55(); break;
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


