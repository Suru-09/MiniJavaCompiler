/* MiniJavaParser.cc */
#include "MiniJavaParser.h"
#include "TokenMgrError.h"
#include "SimpleNode.h"
  unsigned int jj_la1_0[] = {
0x1000,0x40000,0xc00,0x2000,0x46f80c40,0x46f80c40,0x0,0xc00,0xc00,0x0,0xc00,0x46f80040,0x46f80040,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x10780040,0x380040,0x0,0xc00,0x180040,0x0,};
  unsigned int jj_la1_1[] = {
0x0,0x0,0x100000,0x0,0x100011,0x100011,0x20,0x100000,0x100000,0x4,0x0,0x100011,0x100011,0x80,0x80000,0x40000,0x300,0x300,0x3c00,0x3c00,0xc000,0xc000,0x30000,0x30000,0x100001,0x100001,0x45,0x100000,0x0,0x20,};

  /** Constructor with user supplied TokenManager. */




SimpleNode          * MiniJavaParser::Program() {
#if !defined ERROR_RET_Program
#define ERROR_RET_Program NULL
#endif
#define __ERROR_RET__ ERROR_RET_Program

    JJEnter<std::function<void()>> jjenter([this]() {trace_call  ("Program"); });
    JJExit <std::function<void()>> jjexit ([this]() {trace_return("Program"); });
    try {
/*@bgen(jjtree) Program */
  SimpleNode *jjtn000 = new SimpleNode(JJTPROGRAM);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
      try {
        MainClass();
            { if (hasError) { return __ERROR_RET__; } }
        
        while (!hasError) {
          switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
          case CLASS:{
            ;
            break;
            }
          default:
            jj_la1[0] = jj_gen;
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
/*@bgen(jjtree) MainClass */
  SimpleNode *jjtn000 = new SimpleNode(JJTMAINCLASS);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
      try {
        jj_consume_token(CLASS);
            { if (hasError) { return __ERROR_RET__; } }
        
        jj_consume_token(IDENTIFIER);
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
        
        jj_consume_token(IDENTIFIER);
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


void MiniJavaParser::ClassDecl() {
#if !defined ERROR_RET_ClassDecl
#define ERROR_RET_ClassDecl 
#endif
#define __ERROR_RET__ ERROR_RET_ClassDecl

    JJEnter<std::function<void()>> jjenter([this]() {trace_call  ("ClassDecl"); });
    JJExit <std::function<void()>> jjexit ([this]() {trace_return("ClassDecl"); });
    try {
/*@bgen(jjtree) ClassDecl */
  SimpleNode *jjtn000 = new SimpleNode(JJTCLASSDECL);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
      try {
        jj_consume_token(CLASS);
            { if (hasError) { return __ERROR_RET__; } }
        
        jj_consume_token(IDENTIFIER);
            { if (hasError) { return __ERROR_RET__; } }
        
        switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
        case EXTENDS:{
          jj_consume_token(EXTENDS);
              { if (hasError) { return __ERROR_RET__; } }
          
          jj_consume_token(IDENTIFIER);
              { if (hasError) { return __ERROR_RET__; } }
          
          break;
          }
        default:
          jj_la1[1] = jj_gen;
          ;
        }
        jj_consume_token(LBRACE);
            { if (hasError) { return __ERROR_RET__; } }
        
        while (!hasError) {
          switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
          case INT:
          case BOOLEAN:
          case IDENTIFIER:{
            ;
            break;
            }
          default:
            jj_la1[2] = jj_gen;
            goto end_label_2;
          }
          VarDecl();
              { if (hasError) { return __ERROR_RET__; } }
          
        }
        end_label_2: ;
        while (!hasError) {
          switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
          case PUBLIC:{
            ;
            break;
            }
          default:
            jj_la1[3] = jj_gen;
            goto end_label_3;
          }
          MethodDecl();
              { if (hasError) { return __ERROR_RET__; } }
          
        }
        end_label_3: ;
        jj_consume_token(RBRACE);
            { if (hasError) { return __ERROR_RET__; } }
        
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


void MiniJavaParser::VarDecl() {
#if !defined ERROR_RET_VarDecl
#define ERROR_RET_VarDecl 
#endif
#define __ERROR_RET__ ERROR_RET_VarDecl

    JJEnter<std::function<void()>> jjenter([this]() {trace_call  ("VarDecl"); });
    JJExit <std::function<void()>> jjexit ([this]() {trace_return("VarDecl"); });
    try {
/*@bgen(jjtree) VarDecl */
  SimpleNode *jjtn000 = new SimpleNode(JJTVARDECL);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
      try {
        Type();
            { if (hasError) { return __ERROR_RET__; } }
        
        jj_consume_token(IDENTIFIER);
            { if (hasError) { return __ERROR_RET__; } }
        
        jj_consume_token(SEMICOLON);
            { if (hasError) { return __ERROR_RET__; } }
        
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


void MiniJavaParser::MethodDecl() {
#if !defined ERROR_RET_MethodDecl
#define ERROR_RET_MethodDecl 
#endif
#define __ERROR_RET__ ERROR_RET_MethodDecl

    JJEnter<std::function<void()>> jjenter([this]() {trace_call  ("MethodDecl"); });
    JJExit <std::function<void()>> jjexit ([this]() {trace_return("MethodDecl"); });
    try {
/*@bgen(jjtree) MethodDecl */
  SimpleNode *jjtn000 = new SimpleNode(JJTMETHODDECL);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
      try {
        jj_consume_token(PUBLIC);
            { if (hasError) { return __ERROR_RET__; } }
        
        Type();
            { if (hasError) { return __ERROR_RET__; } }
        
        jj_consume_token(IDENTIFIER);
            { if (hasError) { return __ERROR_RET__; } }
        
        jj_consume_token(LPAREN);
            { if (hasError) { return __ERROR_RET__; } }
        
        FormalList();
            { if (hasError) { return __ERROR_RET__; } }
        
        jj_consume_token(RPAREN);
            { if (hasError) { return __ERROR_RET__; } }
        
        jj_consume_token(LBRACE);
            { if (hasError) { return __ERROR_RET__; } }
        
        while (!hasError) {
          switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
          case INTEGER_LITERAL:
          case INT:
          case BOOLEAN:
          case TRUE:
          case FALSE:
          case THIS:
          case NEW:
          case IF:
          case WHILE:
          case SYSTEM_OUT_PRINTLN:
          case LBRACE:
          case LPAREN:
          case SEMICOLON:
          case IDENTIFIER:{
            ;
            break;
            }
          default:
            jj_la1[4] = jj_gen;
            goto end_label_4;
          }
          switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
          case INTEGER_LITERAL:
          case TRUE:
          case FALSE:
          case THIS:
          case NEW:
          case IF:
          case WHILE:
          case SYSTEM_OUT_PRINTLN:
          case LBRACE:
          case LPAREN:
          case SEMICOLON:
          case IDENTIFIER:{
            Statement();
                { if (hasError) { return __ERROR_RET__; } }
            
            break;
            }
          case INT:
          case BOOLEAN:{
            VarDecl();
                { if (hasError) { return __ERROR_RET__; } }
            
            break;
            }
          default:
            jj_la1[5] = jj_gen;
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


void MiniJavaParser::FormalList() {
#if !defined ERROR_RET_FormalList
#define ERROR_RET_FormalList 
#endif
#define __ERROR_RET__ ERROR_RET_FormalList

    JJEnter<std::function<void()>> jjenter([this]() {trace_call  ("FormalList"); });
    JJExit <std::function<void()>> jjexit ([this]() {trace_return("FormalList"); });
    try {
/*@bgen(jjtree) FormalList */
  SimpleNode *jjtn000 = new SimpleNode(JJTFORMALLIST);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
      try {
        switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
        case INT:
        case BOOLEAN:
        case IDENTIFIER:{
          Type();
              { if (hasError) { return __ERROR_RET__; } }
          
          jj_consume_token(IDENTIFIER);
              { if (hasError) { return __ERROR_RET__; } }
          
          while (!hasError) {
            switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
            case COMMA:{
              ;
              break;
              }
            default:
              jj_la1[6] = jj_gen;
              goto end_label_5;
            }
            FormalRest();
                { if (hasError) { return __ERROR_RET__; } }
            
          }
          end_label_5: ;
          break;
          }
        default:
          jj_la1[7] = jj_gen;
          ;
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


void MiniJavaParser::FormalRest() {
#if !defined ERROR_RET_FormalRest
#define ERROR_RET_FormalRest 
#endif
#define __ERROR_RET__ ERROR_RET_FormalRest

    JJEnter<std::function<void()>> jjenter([this]() {trace_call  ("FormalRest"); });
    JJExit <std::function<void()>> jjexit ([this]() {trace_return("FormalRest"); });
    try {
/*@bgen(jjtree) FormalRest */
  SimpleNode *jjtn000 = new SimpleNode(JJTFORMALREST);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
      try {
        jj_consume_token(COMMA);
            { if (hasError) { return __ERROR_RET__; } }
        
        Type();
            { if (hasError) { return __ERROR_RET__; } }
        
        jj_consume_token(IDENTIFIER);
            { if (hasError) { return __ERROR_RET__; } }
        
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


void MiniJavaParser::Type() {
#if !defined ERROR_RET_Type
#define ERROR_RET_Type 
#endif
#define __ERROR_RET__ ERROR_RET_Type

    JJEnter<std::function<void()>> jjenter([this]() {trace_call  ("Type"); });
    JJExit <std::function<void()>> jjexit ([this]() {trace_return("Type"); });
    try {
/*@bgen(jjtree) Type */
  SimpleNode *jjtn000 = new SimpleNode(JJTTYPE);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
      try {
        switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
        case INT:
        case BOOLEAN:{
          SimpleType();
              { if (hasError) { return __ERROR_RET__; } }
          
          break;
          }
        case IDENTIFIER:{
          jj_consume_token(IDENTIFIER);
              { if (hasError) { return __ERROR_RET__; } }
          
          break;
          }
        default:
          jj_la1[8] = jj_gen;
          jj_consume_token(-1);
          errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;return __ERROR_RET__;
          
        }
        switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
        case LBRACKET:{
          jj_consume_token(LBRACKET);
              { if (hasError) { return __ERROR_RET__; } }
          
          jj_consume_token(RBRACKET);
              { if (hasError) { return __ERROR_RET__; } }
          
          break;
          }
        default:
          jj_la1[9] = jj_gen;
          ;
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


void MiniJavaParser::SimpleType() {
#if !defined ERROR_RET_SimpleType
#define ERROR_RET_SimpleType 
#endif
#define __ERROR_RET__ ERROR_RET_SimpleType

    JJEnter<std::function<void()>> jjenter([this]() {trace_call  ("SimpleType"); });
    JJExit <std::function<void()>> jjexit ([this]() {trace_return("SimpleType"); });
    try {
/*@bgen(jjtree) SimpleType */
  SimpleNode *jjtn000 = new SimpleNode(JJTSIMPLETYPE);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
      try {
        switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
        case INT:{
          jj_consume_token(INT);
              { if (hasError) { return __ERROR_RET__; } }
          
          break;
          }
        case BOOLEAN:{
          jj_consume_token(BOOLEAN);
              { if (hasError) { return __ERROR_RET__; } }
          
          break;
          }
        default:
          jj_la1[10] = jj_gen;
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


void MiniJavaParser::Statement() {
#if !defined ERROR_RET_Statement
#define ERROR_RET_Statement 
#endif
#define __ERROR_RET__ ERROR_RET_Statement

    JJEnter<std::function<void()>> jjenter([this]() {trace_call  ("Statement"); });
    JJExit <std::function<void()>> jjexit ([this]() {trace_return("Statement"); });
    try {
/*@bgen(jjtree) Statement */
  SimpleNode *jjtn000 = new SimpleNode(JJTSTATEMENT);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
      try {
        switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
        case LBRACE:{
          BlockStatement();
              { if (hasError) { return __ERROR_RET__; } }
          
          break;
          }
        case INTEGER_LITERAL:
        case TRUE:
        case FALSE:
        case THIS:
        case NEW:
        case LPAREN:
        case IDENTIFIER:{
          ExpressionInStatement();
              { if (hasError) { return __ERROR_RET__; } }
          
          jj_consume_token(SEMICOLON);
              { if (hasError) { return __ERROR_RET__; } }
          
          break;
          }
        case IF:{
          IfStatement();
              { if (hasError) { return __ERROR_RET__; } }
          
          break;
          }
        case WHILE:{
          WhileStatement();
              { if (hasError) { return __ERROR_RET__; } }
          
          break;
          }
        case SYSTEM_OUT_PRINTLN:{
          PrintStatement();
              { if (hasError) { return __ERROR_RET__; } }
          
          break;
          }
        case SEMICOLON:{
          EmptyStatement();
              { if (hasError) { return __ERROR_RET__; } }
          
          break;
          }
        default:
          jj_la1[11] = jj_gen;
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


void MiniJavaParser::BlockStatement() {
#if !defined ERROR_RET_BlockStatement
#define ERROR_RET_BlockStatement 
#endif
#define __ERROR_RET__ ERROR_RET_BlockStatement

    JJEnter<std::function<void()>> jjenter([this]() {trace_call  ("BlockStatement"); });
    JJExit <std::function<void()>> jjexit ([this]() {trace_return("BlockStatement"); });
    try {
/*@bgen(jjtree) BlockStatement */
  SimpleNode *jjtn000 = new SimpleNode(JJTBLOCKSTATEMENT);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
      try {
        jj_consume_token(LBRACE);
            { if (hasError) { return __ERROR_RET__; } }
        
        while (!hasError) {
          switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
          case INTEGER_LITERAL:
          case TRUE:
          case FALSE:
          case THIS:
          case NEW:
          case IF:
          case WHILE:
          case SYSTEM_OUT_PRINTLN:
          case LBRACE:
          case LPAREN:
          case SEMICOLON:
          case IDENTIFIER:{
            ;
            break;
            }
          default:
            jj_la1[12] = jj_gen;
            goto end_label_6;
          }
          Statement();
              { if (hasError) { return __ERROR_RET__; } }
          
        }
        end_label_6: ;
        jj_consume_token(RBRACE);
            { if (hasError) { return __ERROR_RET__; } }
        
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


void MiniJavaParser::IfStatement() {
#if !defined ERROR_RET_IfStatement
#define ERROR_RET_IfStatement 
#endif
#define __ERROR_RET__ ERROR_RET_IfStatement

    JJEnter<std::function<void()>> jjenter([this]() {trace_call  ("IfStatement"); });
    JJExit <std::function<void()>> jjexit ([this]() {trace_return("IfStatement"); });
    try {
/*@bgen(jjtree) IfStatement */
  SimpleNode *jjtn000 = new SimpleNode(JJTIFSTATEMENT);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
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


void MiniJavaParser::WhileStatement() {
#if !defined ERROR_RET_WhileStatement
#define ERROR_RET_WhileStatement 
#endif
#define __ERROR_RET__ ERROR_RET_WhileStatement

    JJEnter<std::function<void()>> jjenter([this]() {trace_call  ("WhileStatement"); });
    JJExit <std::function<void()>> jjexit ([this]() {trace_return("WhileStatement"); });
    try {
/*@bgen(jjtree) WhileStatement */
  SimpleNode *jjtn000 = new SimpleNode(JJTWHILESTATEMENT);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
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


void MiniJavaParser::PrintStatement() {
#if !defined ERROR_RET_PrintStatement
#define ERROR_RET_PrintStatement 
#endif
#define __ERROR_RET__ ERROR_RET_PrintStatement

    JJEnter<std::function<void()>> jjenter([this]() {trace_call  ("PrintStatement"); });
    JJExit <std::function<void()>> jjexit ([this]() {trace_return("PrintStatement"); });
    try {
/*@bgen(jjtree) PrintStatement */
  SimpleNode *jjtn000 = new SimpleNode(JJTPRINTSTATEMENT);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
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


void MiniJavaParser::EmptyStatement() {
#if !defined ERROR_RET_EmptyStatement
#define ERROR_RET_EmptyStatement 
#endif
#define __ERROR_RET__ ERROR_RET_EmptyStatement

    JJEnter<std::function<void()>> jjenter([this]() {trace_call  ("EmptyStatement"); });
    JJExit <std::function<void()>> jjexit ([this]() {trace_return("EmptyStatement"); });
    try {
/*@bgen(jjtree) EmptyStatement */
  SimpleNode *jjtn000 = new SimpleNode(JJTEMPTYSTATEMENT);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
      try {
        jj_consume_token(SEMICOLON);
            { if (hasError) { return __ERROR_RET__; } }
        
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


void MiniJavaParser::ExpressionInStatement() {
#if !defined ERROR_RET_ExpressionInStatement
#define ERROR_RET_ExpressionInStatement 
#endif
#define __ERROR_RET__ ERROR_RET_ExpressionInStatement

    JJEnter<std::function<void()>> jjenter([this]() {trace_call  ("ExpressionInStatement"); });
    JJExit <std::function<void()>> jjexit ([this]() {trace_return("ExpressionInStatement"); });
    try {
/*@bgen(jjtree) ExpressionInStatement */
  SimpleNode *jjtn000 = new SimpleNode(JJTEXPRESSIONINSTATEMENT);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
      try {
        PrimaryExp();
            { if (hasError) { return __ERROR_RET__; } }
        
        jj_consume_token(ASSIGN);
            { if (hasError) { return __ERROR_RET__; } }
        
        OrExp();
            { if (hasError) { return __ERROR_RET__; } }
        
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


void MiniJavaParser::Exp() {
#if !defined ERROR_RET_Exp
#define ERROR_RET_Exp 
#endif
#define __ERROR_RET__ ERROR_RET_Exp

    JJEnter<std::function<void()>> jjenter([this]() {trace_call  ("Exp"); });
    JJExit <std::function<void()>> jjexit ([this]() {trace_return("Exp"); });
    try {
/*@bgen(jjtree) Exp */
  SimpleNode *jjtn000 = new SimpleNode(JJTEXP);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
      try {
        OrExp();
            { if (hasError) { return __ERROR_RET__; } }
        
        switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
        case ASSIGN:{
          jj_consume_token(ASSIGN);
              { if (hasError) { return __ERROR_RET__; } }
          
          Exp();
              { if (hasError) { return __ERROR_RET__; } }
          
          break;
          }
        default:
          jj_la1[13] = jj_gen;
          ;
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


void MiniJavaParser::OrExp() {
#if !defined ERROR_RET_OrExp
#define ERROR_RET_OrExp 
#endif
#define __ERROR_RET__ ERROR_RET_OrExp

    JJEnter<std::function<void()>> jjenter([this]() {trace_call  ("OrExp"); });
    JJExit <std::function<void()>> jjexit ([this]() {trace_return("OrExp"); });
    try {
/*@bgen(jjtree) OrExp */
  SimpleNode *jjtn000 = new SimpleNode(JJTOREXP);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
      try {
        AndExp();
            { if (hasError) { return __ERROR_RET__; } }
        
        while (!hasError) {
          switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
          case OR:{
            ;
            break;
            }
          default:
            jj_la1[14] = jj_gen;
            goto end_label_7;
          }
          jj_consume_token(OR);
              { if (hasError) { return __ERROR_RET__; } }
          
          AndExp();
              { if (hasError) { return __ERROR_RET__; } }
          
        }
        end_label_7: ;
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


void MiniJavaParser::AndExp() {
#if !defined ERROR_RET_AndExp
#define ERROR_RET_AndExp 
#endif
#define __ERROR_RET__ ERROR_RET_AndExp

    JJEnter<std::function<void()>> jjenter([this]() {trace_call  ("AndExp"); });
    JJExit <std::function<void()>> jjexit ([this]() {trace_return("AndExp"); });
    try {
/*@bgen(jjtree) AndExp */
  SimpleNode *jjtn000 = new SimpleNode(JJTANDEXP);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
      try {
        EqNeqExp();
            { if (hasError) { return __ERROR_RET__; } }
        
        while (!hasError) {
          switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
          case AND:{
            ;
            break;
            }
          default:
            jj_la1[15] = jj_gen;
            goto end_label_8;
          }
          jj_consume_token(AND);
              { if (hasError) { return __ERROR_RET__; } }
          
          EqNeqExp();
              { if (hasError) { return __ERROR_RET__; } }
          
        }
        end_label_8: ;
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


void MiniJavaParser::EqNeqExp() {
#if !defined ERROR_RET_EqNeqExp
#define ERROR_RET_EqNeqExp 
#endif
#define __ERROR_RET__ ERROR_RET_EqNeqExp

    JJEnter<std::function<void()>> jjenter([this]() {trace_call  ("EqNeqExp"); });
    JJExit <std::function<void()>> jjexit ([this]() {trace_return("EqNeqExp"); });
    try {
/*@bgen(jjtree) EqNeqExp */
  SimpleNode *jjtn000 = new SimpleNode(JJTEQNEQEXP);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
      try {
        RelExp();
            { if (hasError) { return __ERROR_RET__; } }
        
        while (!hasError) {
          switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
          case EQ:
          case NEQ:{
            ;
            break;
            }
          default:
            jj_la1[16] = jj_gen;
            goto end_label_9;
          }
          switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
          case EQ:{
            jj_consume_token(EQ);
                { if (hasError) { return __ERROR_RET__; } }
            
            break;
            }
          case NEQ:{
            jj_consume_token(NEQ);
                { if (hasError) { return __ERROR_RET__; } }
            
            break;
            }
          default:
            jj_la1[17] = jj_gen;
            jj_consume_token(-1);
            errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;return __ERROR_RET__;
            
          }
          RelExp();
              { if (hasError) { return __ERROR_RET__; } }
          
        }
        end_label_9: ;
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


void MiniJavaParser::RelExp() {
#if !defined ERROR_RET_RelExp
#define ERROR_RET_RelExp 
#endif
#define __ERROR_RET__ ERROR_RET_RelExp

    JJEnter<std::function<void()>> jjenter([this]() {trace_call  ("RelExp"); });
    JJExit <std::function<void()>> jjexit ([this]() {trace_return("RelExp"); });
    try {
/*@bgen(jjtree) RelExp */
  SimpleNode *jjtn000 = new SimpleNode(JJTRELEXP);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
      try {
        AddExp();
            { if (hasError) { return __ERROR_RET__; } }
        
        while (!hasError) {
          switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
          case LT:
          case LTE:
          case GT:
          case GTE:{
            ;
            break;
            }
          default:
            jj_la1[18] = jj_gen;
            goto end_label_10;
          }
          switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
          case LT:{
            jj_consume_token(LT);
                { if (hasError) { return __ERROR_RET__; } }
            
            break;
            }
          case LTE:{
            jj_consume_token(LTE);
                { if (hasError) { return __ERROR_RET__; } }
            
            break;
            }
          case GT:{
            jj_consume_token(GT);
                { if (hasError) { return __ERROR_RET__; } }
            
            break;
            }
          case GTE:{
            jj_consume_token(GTE);
                { if (hasError) { return __ERROR_RET__; } }
            
            break;
            }
          default:
            jj_la1[19] = jj_gen;
            jj_consume_token(-1);
            errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;return __ERROR_RET__;
            
          }
          AddExp();
              { if (hasError) { return __ERROR_RET__; } }
          
        }
        end_label_10: ;
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


void MiniJavaParser::AddExp() {
#if !defined ERROR_RET_AddExp
#define ERROR_RET_AddExp 
#endif
#define __ERROR_RET__ ERROR_RET_AddExp

    JJEnter<std::function<void()>> jjenter([this]() {trace_call  ("AddExp"); });
    JJExit <std::function<void()>> jjexit ([this]() {trace_return("AddExp"); });
    try {
/*@bgen(jjtree) AddExp */
  SimpleNode *jjtn000 = new SimpleNode(JJTADDEXP);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
      try {
        MulExp();
            { if (hasError) { return __ERROR_RET__; } }
        
        while (!hasError) {
          switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
          case PLUS:
          case MINUS:{
            ;
            break;
            }
          default:
            jj_la1[20] = jj_gen;
            goto end_label_11;
          }
          switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
          case PLUS:{
            jj_consume_token(PLUS);
                { if (hasError) { return __ERROR_RET__; } }
            
            break;
            }
          case MINUS:{
            jj_consume_token(MINUS);
                { if (hasError) { return __ERROR_RET__; } }
            
            break;
            }
          default:
            jj_la1[21] = jj_gen;
            jj_consume_token(-1);
            errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;return __ERROR_RET__;
            
          }
          MulExp();
              { if (hasError) { return __ERROR_RET__; } }
          
        }
        end_label_11: ;
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


void MiniJavaParser::MulExp() {
#if !defined ERROR_RET_MulExp
#define ERROR_RET_MulExp 
#endif
#define __ERROR_RET__ ERROR_RET_MulExp

    JJEnter<std::function<void()>> jjenter([this]() {trace_call  ("MulExp"); });
    JJExit <std::function<void()>> jjexit ([this]() {trace_return("MulExp"); });
    try {
/*@bgen(jjtree) MulExp */
  SimpleNode *jjtn000 = new SimpleNode(JJTMULEXP);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
      try {
        UnaryExp();
            { if (hasError) { return __ERROR_RET__; } }
        
        while (!hasError) {
          switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
          case MULT:
          case DIV:{
            ;
            break;
            }
          default:
            jj_la1[22] = jj_gen;
            goto end_label_12;
          }
          switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
          case MULT:{
            jj_consume_token(MULT);
                { if (hasError) { return __ERROR_RET__; } }
            
            break;
            }
          case DIV:{
            jj_consume_token(DIV);
                { if (hasError) { return __ERROR_RET__; } }
            
            break;
            }
          default:
            jj_la1[23] = jj_gen;
            jj_consume_token(-1);
            errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;return __ERROR_RET__;
            
          }
          UnaryExp();
              { if (hasError) { return __ERROR_RET__; } }
          
        }
        end_label_12: ;
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


void MiniJavaParser::UnaryExp() {
#if !defined ERROR_RET_UnaryExp
#define ERROR_RET_UnaryExp 
#endif
#define __ERROR_RET__ ERROR_RET_UnaryExp

    JJEnter<std::function<void()>> jjenter([this]() {trace_call  ("UnaryExp"); });
    JJExit <std::function<void()>> jjexit ([this]() {trace_return("UnaryExp"); });
    try {
/*@bgen(jjtree) UnaryExp */
  SimpleNode *jjtn000 = new SimpleNode(JJTUNARYEXP);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
      try {
        switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
        case NOT:{
          jj_consume_token(NOT);
              { if (hasError) { return __ERROR_RET__; } }
          
          PrimaryExp();
              { if (hasError) { return __ERROR_RET__; } }
          
          break;
          }
        case INTEGER_LITERAL:
        case TRUE:
        case FALSE:
        case THIS:
        case NEW:
        case LPAREN:
        case IDENTIFIER:{
          PrimaryExp();
              { if (hasError) { return __ERROR_RET__; } }
          
          break;
          }
        default:
          jj_la1[24] = jj_gen;
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


void MiniJavaParser::PrimaryExp() {
#if !defined ERROR_RET_PrimaryExp
#define ERROR_RET_PrimaryExp 
#endif
#define __ERROR_RET__ ERROR_RET_PrimaryExp

    JJEnter<std::function<void()>> jjenter([this]() {trace_call  ("PrimaryExp"); });
    JJExit <std::function<void()>> jjexit ([this]() {trace_return("PrimaryExp"); });
    try {
/*@bgen(jjtree) PrimaryExp */
  SimpleNode *jjtn000 = new SimpleNode(JJTPRIMARYEXP);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
      try {
        BeforePrimay();
            { if (hasError) { return __ERROR_RET__; } }
        
        while (!hasError) {
          if (jj_2_1(2)) {
            ;
          } else {
            goto end_label_13;
          }
          AfterPrimary();
              { if (hasError) { return __ERROR_RET__; } }
          
        }
        end_label_13: ;
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


void MiniJavaParser::BeforePrimay() {
#if !defined ERROR_RET_BeforePrimay
#define ERROR_RET_BeforePrimay 
#endif
#define __ERROR_RET__ ERROR_RET_BeforePrimay

    JJEnter<std::function<void()>> jjenter([this]() {trace_call  ("BeforePrimay"); });
    JJExit <std::function<void()>> jjexit ([this]() {trace_return("BeforePrimay"); });
    try {
/*@bgen(jjtree) BeforePrimay */
  SimpleNode *jjtn000 = new SimpleNode(JJTBEFOREPRIMAY);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
      try {
        switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
        case IDENTIFIER:{
          jj_consume_token(IDENTIFIER);
              { if (hasError) { return __ERROR_RET__; } }
          
          break;
          }
        case INTEGER_LITERAL:
        case TRUE:
        case FALSE:{
          Literal();
              { if (hasError) { return __ERROR_RET__; } }
          
          break;
          }
        case THIS:{
          jj_consume_token(THIS);
              { if (hasError) { return __ERROR_RET__; } }
          
          break;
          }
        case LPAREN:{
          jj_consume_token(LPAREN);
              { if (hasError) { return __ERROR_RET__; } }
          
          Exp();
              { if (hasError) { return __ERROR_RET__; } }
          
          jj_consume_token(RPAREN);
              { if (hasError) { return __ERROR_RET__; } }
          
          break;
          }
        default:
          jj_la1[25] = jj_gen;
          if (jj_2_2(2)) {
            AllocateMemory();
                { if (hasError) { return __ERROR_RET__; } }
            
          } else {
            jj_consume_token(-1);
            errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;return __ERROR_RET__;
            
          }
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


void MiniJavaParser::AfterPrimary() {
#if !defined ERROR_RET_AfterPrimary
#define ERROR_RET_AfterPrimary 
#endif
#define __ERROR_RET__ ERROR_RET_AfterPrimary

    JJEnter<std::function<void()>> jjenter([this]() {trace_call  ("AfterPrimary"); });
    JJExit <std::function<void()>> jjexit ([this]() {trace_return("AfterPrimary"); });
    try {
/*@bgen(jjtree) AfterPrimary */
  SimpleNode *jjtn000 = new SimpleNode(JJTAFTERPRIMARY);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
      try {
        switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
        case LBRACKET:{
          jj_consume_token(LBRACKET);
              { if (hasError) { return __ERROR_RET__; } }
          
          Exp();
              { if (hasError) { return __ERROR_RET__; } }
          
          jj_consume_token(RBRACKET);
              { if (hasError) { return __ERROR_RET__; } }
          
          break;
          }
        case DOT:{
          jj_consume_token(DOT);
              { if (hasError) { return __ERROR_RET__; } }
          
          jj_consume_token(IDENTIFIER);
              { if (hasError) { return __ERROR_RET__; } }
          
          break;
          }
        case LPAREN:{
          jj_consume_token(LPAREN);
              { if (hasError) { return __ERROR_RET__; } }
          
          ExpList();
              { if (hasError) { return __ERROR_RET__; } }
          
          jj_consume_token(RPAREN);
              { if (hasError) { return __ERROR_RET__; } }
          
          break;
          }
        default:
          jj_la1[26] = jj_gen;
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


void MiniJavaParser::AllocateMemory() {
#if !defined ERROR_RET_AllocateMemory
#define ERROR_RET_AllocateMemory 
#endif
#define __ERROR_RET__ ERROR_RET_AllocateMemory

    JJEnter<std::function<void()>> jjenter([this]() {trace_call  ("AllocateMemory"); });
    JJExit <std::function<void()>> jjexit ([this]() {trace_return("AllocateMemory"); });
    try {
/*@bgen(jjtree) AllocateMemory */
  SimpleNode *jjtn000 = new SimpleNode(JJTALLOCATEMEMORY);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
      try {
        jj_consume_token(NEW);
            { if (hasError) { return __ERROR_RET__; } }
        
        switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
        case IDENTIFIER:{
          jj_consume_token(IDENTIFIER);
              { if (hasError) { return __ERROR_RET__; } }
          
          jj_consume_token(LPAREN);
              { if (hasError) { return __ERROR_RET__; } }
          
          jj_consume_token(RPAREN);
              { if (hasError) { return __ERROR_RET__; } }
          
          break;
          }
        case INT:
        case BOOLEAN:{
          SimpleType();
              { if (hasError) { return __ERROR_RET__; } }
          
          break;
          }
        default:
          jj_la1[27] = jj_gen;
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


void MiniJavaParser::Literal() {
#if !defined ERROR_RET_Literal
#define ERROR_RET_Literal 
#endif
#define __ERROR_RET__ ERROR_RET_Literal

    JJEnter<std::function<void()>> jjenter([this]() {trace_call  ("Literal"); });
    JJExit <std::function<void()>> jjexit ([this]() {trace_return("Literal"); });
    try {
/*@bgen(jjtree) Literal */
  SimpleNode *jjtn000 = new SimpleNode(JJTLITERAL);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
      try {
        switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
        case INTEGER_LITERAL:{
          jj_consume_token(INTEGER_LITERAL);
              { if (hasError) { return __ERROR_RET__; } }
          
          break;
          }
        case TRUE:{
          jj_consume_token(TRUE);
              { if (hasError) { return __ERROR_RET__; } }
          
          break;
          }
        case FALSE:{
          jj_consume_token(FALSE);
              { if (hasError) { return __ERROR_RET__; } }
          
          break;
          }
        default:
          jj_la1[28] = jj_gen;
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


void MiniJavaParser::ExpList() {
#if !defined ERROR_RET_ExpList
#define ERROR_RET_ExpList 
#endif
#define __ERROR_RET__ ERROR_RET_ExpList

    JJEnter<std::function<void()>> jjenter([this]() {trace_call  ("ExpList"); });
    JJExit <std::function<void()>> jjexit ([this]() {trace_return("ExpList"); });
    try {
/*@bgen(jjtree) ExpList */
  SimpleNode *jjtn000 = new SimpleNode(JJTEXPLIST);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
      try {
        Exp();
            { if (hasError) { return __ERROR_RET__; } }
        
        while (!hasError) {
          switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
          case COMMA:{
            ;
            break;
            }
          default:
            jj_la1[29] = jj_gen;
            goto end_label_14;
          }
          jj_consume_token(COMMA);
              { if (hasError) { return __ERROR_RET__; } }
          
          Exp();
              { if (hasError) { return __ERROR_RET__; } }
          
        }
        end_label_14: ;
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
    for (int i = 0; i < 30; i++) jj_la1[i] = -1;
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
        for (int i = 0; i < 2; i++) {
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
    for (int i = 0; i < 2; i++) {
      JJCalls *p = &jj_2_rtns[i];
      do {
        if (p->gen > jj_gen) {
          jj_la = p->arg; jj_lastpos = jj_scanpos = p->first;
          switch (i) {
            case 0: jj_3_1(); break;
            case 1: jj_3_2(); break;
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


