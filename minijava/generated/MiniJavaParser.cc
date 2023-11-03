/* MiniJavaParser.cc */
#include "MiniJavaParser.h"
#include "TokenMgrError.h"
#include "SimpleNode.h"
  unsigned int jj_la1_0[] = {
0x10000,0x400000,0xc000,0x20000,0x6f800400,0x0,0xc000,0xc000,0x0,0xc000,0x6f800400,0x6f80c400,0x6f80c400,0x7800400,0x7800400,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x7800400,0x0,0x3800400,0x7800400,0x0,0x7800400,0x0,0xc000,0x1800400,0x0,};
  unsigned int jj_la1_1[] = {
0x0,0x0,0x1000000,0x0,0x1000117,0x200,0x1000000,0x1000000,0x40,0x0,0x1000117,0x1000117,0x1000117,0x1000011,0x1000011,0x800,0x800000,0x400000,0x3000,0x3000,0x3c000,0x3c000,0xc0000,0xc0000,0x300000,0x300000,0x1000011,0x450,0x1000010,0x1000011,0x450,0x1000011,0x50,0x1000000,0x0,0x200,};

  /** Constructor with user supplied TokenManager. */




ASTRoot       * MiniJavaParser::Program() {
#if !defined ERROR_RET_Program
#define ERROR_RET_Program NULL
#endif
#define __ERROR_RET__ ERROR_RET_Program
/*@bgen(jjtree) Root */
  ASTRoot *jjtn000 = new ASTRoot(JJTROOT);
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
assert(false);

#undef __ERROR_RET__

}


void MiniJavaParser::MainClass() {
#if !defined ERROR_RET_MainClass
#define ERROR_RET_MainClass 
#endif
#define __ERROR_RET__ ERROR_RET_MainClass

ASTMainClass *jjtn001 = new ASTMainClass(JJTMAINCLASS);
    bool jjtc001 = true;
    jjtree.openNodeScope(jjtn001);
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

#undef __ERROR_RET__

}


void MiniJavaParser::ClassDecl() {
#if !defined ERROR_RET_ClassDecl
#define ERROR_RET_ClassDecl 
#endif
#define __ERROR_RET__ ERROR_RET_ClassDecl
/*@bgen(jjtree) #ClassDecl(> 1) */
  ASTClassDecl *jjtn000 = new ASTClassDecl(JJTCLASSDECL);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
    try {
      jj_consume_token(CLASS);
          { if (hasError) { return __ERROR_RET__; } }
      
      Identifier();
          { if (hasError) { return __ERROR_RET__; } }
      
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case EXTENDS:{
ASTInheritance *jjtn001 = new ASTInheritance(JJTINHERITANCE);
      bool jjtc001 = true;
      jjtree.openNodeScope(jjtn001);
        try {
          jj_consume_token(EXTENDS);
              { if (hasError) { return __ERROR_RET__; } }
          
          Identifier();
              { if (hasError) { return __ERROR_RET__; } }
          
        } catch ( ...) {
if (jjtc001) {
        jjtree.clearNodeScope(jjtn001);
        jjtc001 = false;
      } else {
        jjtree.popNode();
      }
        }
if (jjtc001) {
        jjtree.closeNodeScope(jjtn001,  1);
      }
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
      jjtree.closeNodeScope(jjtn000, jjtree.nodeArity() > 1);
    }

#undef __ERROR_RET__

}


void MiniJavaParser::VarDecl() {
#if !defined ERROR_RET_VarDecl
#define ERROR_RET_VarDecl 
#endif
#define __ERROR_RET__ ERROR_RET_VarDecl

ASTVarDecl *jjtn001 = new ASTVarDecl(JJTVARDECL);
    bool jjtc001 = true;
    jjtree.openNodeScope(jjtn001);
    try {
      Type();
          { if (hasError) { return __ERROR_RET__; } }
      
      Identifier();
          { if (hasError) { return __ERROR_RET__; } }
      
      jj_consume_token(SEMICOLON);
          { if (hasError) { return __ERROR_RET__; } }
      
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

#undef __ERROR_RET__

}


void MiniJavaParser::MethodDecl() {
#if !defined ERROR_RET_MethodDecl
#define ERROR_RET_MethodDecl 
#endif
#define __ERROR_RET__ ERROR_RET_MethodDecl
/*@bgen(jjtree) #MethodDeclNode(> 2) */
  ASTMethodDeclNode *jjtn000 = new ASTMethodDeclNode(JJTMETHODDECLNODE);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
    try {
      jj_consume_token(PUBLIC);
          { if (hasError) { return __ERROR_RET__; } }
      
      Type();
          { if (hasError) { return __ERROR_RET__; } }
      
ASTMethodIDNode *jjtn001 = new ASTMethodIDNode(JJTMETHODIDNODE);
    bool jjtc001 = true;
    jjtree.openNodeScope(jjtn001);
      try {
        Identifier();
            { if (hasError) { return __ERROR_RET__; } }
        
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
      jj_consume_token(LPAREN);
          { if (hasError) { return __ERROR_RET__; } }
      
      ArgsList();
          { if (hasError) { return __ERROR_RET__; } }
      
      jj_consume_token(RPAREN);
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
        case NOT:
        case RETURN:
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
        Statement();
            { if (hasError) { return __ERROR_RET__; } }
        
      }
      end_label_4: ;
    } catch ( ...) {
if (jjtc000) {
      jjtree.clearNodeScope(jjtn000);
      jjtc000 = false;
    } else {
      jjtree.popNode();
    }
    }
if (jjtc000) {
      jjtree.closeNodeScope(jjtn000, jjtree.nodeArity() > 2);
    }

#undef __ERROR_RET__

}


void MiniJavaParser::ArgsList() {
#if !defined ERROR_RET_ArgsList
#define ERROR_RET_ArgsList 
#endif
#define __ERROR_RET__ ERROR_RET_ArgsList

ASTArgsList *jjtn001 = new ASTArgsList(JJTARGSLIST);
    bool jjtc001 = true;
    jjtree.openNodeScope(jjtn001);
    try {
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case INT:
      case BOOLEAN:
      case IDENTIFIER:{
        Type();
            { if (hasError) { return __ERROR_RET__; } }
        
        Identifier();
            { if (hasError) { return __ERROR_RET__; } }
        
        while (!hasError) {
          switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
          case COMMA:{
            ;
            break;
            }
          default:
            jj_la1[5] = jj_gen;
            goto end_label_5;
          }
          FormalRest();
              { if (hasError) { return __ERROR_RET__; } }
          
        }
        end_label_5: ;
        break;
        }
      default:
        jj_la1[6] = jj_gen;
        ;
      }
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

#undef __ERROR_RET__

}


void MiniJavaParser::FormalRest() {
#if !defined ERROR_RET_FormalRest
#define ERROR_RET_FormalRest 
#endif
#define __ERROR_RET__ ERROR_RET_FormalRest

    jj_consume_token(COMMA);
        { if (hasError) { return __ERROR_RET__; } }
    
    Type();
        { if (hasError) { return __ERROR_RET__; } }
    
    Identifier();
        { if (hasError) { return __ERROR_RET__; } }
    

#undef __ERROR_RET__

}


void MiniJavaParser::Type() {
#if !defined ERROR_RET_Type
#define ERROR_RET_Type 
#endif
#define __ERROR_RET__ ERROR_RET_Type
/*@bgen(jjtree) TypeNode */
  ASTTypeNode *jjtn000 = new ASTTypeNode(JJTTYPENODE);
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
        Identifier();
            { if (hasError) { return __ERROR_RET__; } }
        
        break;
        }
      default:
        jj_la1[7] = jj_gen;
        jj_consume_token(-1);
        errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;return __ERROR_RET__;
        
      }
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case LBRACKET:{
        ArrayDecl();
            { if (hasError) { return __ERROR_RET__; } }
        
        break;
        }
      default:
        jj_la1[8] = jj_gen;
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

#undef __ERROR_RET__

}


void MiniJavaParser::ArrayDecl() {
#if !defined ERROR_RET_ArrayDecl
#define ERROR_RET_ArrayDecl 
#endif
#define __ERROR_RET__ ERROR_RET_ArrayDecl
/*@bgen(jjtree) ArrayDeclNode */
  ASTArrayDeclNode *jjtn000 = new ASTArrayDeclNode(JJTARRAYDECLNODE);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
    try {
      jj_consume_token(LBRACKET);
          { if (hasError) { return __ERROR_RET__; } }
      
      jj_consume_token(RBRACKET);
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

#undef __ERROR_RET__

}


void MiniJavaParser::SimpleType() {
#if !defined ERROR_RET_SimpleType
#define ERROR_RET_SimpleType 
#endif
#define __ERROR_RET__ ERROR_RET_SimpleType
Token* t = NULL;/*@bgen(jjtree) SimpleTypeNode */
  ASTSimpleTypeNode *jjtn000 = new ASTSimpleTypeNode(JJTSIMPLETYPENODE);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
    try {
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case INT:{
        t = jj_consume_token(INT);
            { if (hasError) { return __ERROR_RET__; } }
        
        break;
        }
      case BOOLEAN:{
        t = jj_consume_token(BOOLEAN);
            { if (hasError) { return __ERROR_RET__; } }
        
        break;
        }
      default:
        jj_la1[9] = jj_gen;
        jj_consume_token(-1);
        errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;return __ERROR_RET__;
        
      }
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

#undef __ERROR_RET__

}


void MiniJavaParser::Statement() {
#if !defined ERROR_RET_Statement
#define ERROR_RET_Statement 
#endif
#define __ERROR_RET__ ERROR_RET_Statement

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
    case NOT:
    case LPAREN:
    case SEMICOLON:
    case IDENTIFIER:{
      OptionalExprStmt();
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
    case RETURN:{
      ReturnStatement();
          { if (hasError) { return __ERROR_RET__; } }
      
      break;
      }
    default:
      jj_la1[10] = jj_gen;
      jj_consume_token(-1);
      errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;return __ERROR_RET__;
      
    }

#undef __ERROR_RET__

}


void MiniJavaParser::BlockStatement() {
#if !defined ERROR_RET_BlockStatement
#define ERROR_RET_BlockStatement 
#endif
#define __ERROR_RET__ ERROR_RET_BlockStatement
/*@bgen(jjtree) BlockStatementNode */
  ASTBlockStatementNode *jjtn000 = new ASTBlockStatementNode(JJTBLOCKSTATEMENTNODE);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
    try {
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
        case NOT:
        case RETURN:
        case LBRACE:
        case LPAREN:
        case SEMICOLON:
        case IDENTIFIER:{
          ;
          break;
          }
        default:
          jj_la1[11] = jj_gen;
          goto end_label_6;
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
        case NOT:
        case RETURN:
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
          jj_la1[12] = jj_gen;
          jj_consume_token(-1);
          errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;return __ERROR_RET__;
          
        }
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

#undef __ERROR_RET__

}


void MiniJavaParser::ReturnStatement() {
#if !defined ERROR_RET_ReturnStatement
#define ERROR_RET_ReturnStatement 
#endif
#define __ERROR_RET__ ERROR_RET_ReturnStatement
/*@bgen(jjtree) ReturnStatementNode */
  ASTReturnStatementNode *jjtn000 = new ASTReturnStatementNode(JJTRETURNSTATEMENTNODE);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
    try {
      jj_consume_token(RETURN);
          { if (hasError) { return __ERROR_RET__; } }
      
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case INTEGER_LITERAL:
      case TRUE:
      case FALSE:
      case THIS:
      case NEW:
      case NOT:
      case LPAREN:
      case IDENTIFIER:{
        Exp();
            { if (hasError) { return __ERROR_RET__; } }
        
        break;
        }
      default:
        jj_la1[13] = jj_gen;
        ;
      }
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

#undef __ERROR_RET__

}


void MiniJavaParser::IfStatement() {
#if !defined ERROR_RET_IfStatement
#define ERROR_RET_IfStatement 
#endif
#define __ERROR_RET__ ERROR_RET_IfStatement
/*@bgen(jjtree) IfStatementNode */
  ASTIfStatementNode *jjtn000 = new ASTIfStatementNode(JJTIFSTATEMENTNODE);
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

#undef __ERROR_RET__

}


void MiniJavaParser::WhileStatement() {
#if !defined ERROR_RET_WhileStatement
#define ERROR_RET_WhileStatement 
#endif
#define __ERROR_RET__ ERROR_RET_WhileStatement
/*@bgen(jjtree) WhileStatement */
  ASTWhileStatement *jjtn000 = new ASTWhileStatement(JJTWHILESTATEMENT);
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

#undef __ERROR_RET__

}


void MiniJavaParser::PrintStatement() {
#if !defined ERROR_RET_PrintStatement
#define ERROR_RET_PrintStatement 
#endif
#define __ERROR_RET__ ERROR_RET_PrintStatement
/*@bgen(jjtree) PrintStatement */
  ASTPrintStatement *jjtn000 = new ASTPrintStatement(JJTPRINTSTATEMENT);
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

#undef __ERROR_RET__

}


void MiniJavaParser::OptionalExprStmt() {
#if !defined ERROR_RET_OptionalExprStmt
#define ERROR_RET_OptionalExprStmt 
#endif
#define __ERROR_RET__ ERROR_RET_OptionalExprStmt
/*@bgen(jjtree) OptionalExprStmt */
  ASTOptionalExprStmt *jjtn000 = new ASTOptionalExprStmt(JJTOPTIONALEXPRSTMT);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
    try {
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case INTEGER_LITERAL:
      case TRUE:
      case FALSE:
      case THIS:
      case NEW:
      case NOT:
      case LPAREN:
      case IDENTIFIER:{
        Exp();
            { if (hasError) { return __ERROR_RET__; } }
        
        break;
        }
      default:
        jj_la1[14] = jj_gen;
        ;
      }
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

#undef __ERROR_RET__

}


void MiniJavaParser::Exp() {
#if !defined ERROR_RET_Exp
#define ERROR_RET_Exp 
#endif
#define __ERROR_RET__ ERROR_RET_Exp

    AssignExp();
        { if (hasError) { return __ERROR_RET__; } }
    

#undef __ERROR_RET__

}


void MiniJavaParser::AssignExp() {
#if !defined ERROR_RET_AssignExp
#define ERROR_RET_AssignExp 
#endif
#define __ERROR_RET__ ERROR_RET_AssignExp

    OrExp();
        { if (hasError) { return __ERROR_RET__; } }
    
    while (!hasError) {
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case ASSIGN:{
        ;
        break;
        }
      default:
        jj_la1[15] = jj_gen;
        goto end_label_7;
      }
ASTAssignNode *jjtn001 = new ASTAssignNode(JJTASSIGNNODE);
        bool jjtc001 = true;
        jjtree.openNodeScope(jjtn001);
      try {
        jj_consume_token(ASSIGN);
            { if (hasError) { return __ERROR_RET__; } }
        
        OrExp();
            { if (hasError) { return __ERROR_RET__; } }
        
      } catch ( ...) {
if (jjtc001) {
          jjtree.clearNodeScope(jjtn001);
          jjtc001 = false;
        } else {
          jjtree.popNode();
        }
      }
if (jjtc001) {
          jjtree.closeNodeScope(jjtn001,  2);
        }
    }
    end_label_7: ;

#undef __ERROR_RET__

}


void MiniJavaParser::OrExp() {
#if !defined ERROR_RET_OrExp
#define ERROR_RET_OrExp 
#endif
#define __ERROR_RET__ ERROR_RET_OrExp

    AndExp();
        { if (hasError) { return __ERROR_RET__; } }
    
    while (!hasError) {
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case OR:{
        ;
        break;
        }
      default:
        jj_la1[16] = jj_gen;
        goto end_label_8;
      }
ASTOrNode *jjtn001 = new ASTOrNode(JJTORNODE);
        bool jjtc001 = true;
        jjtree.openNodeScope(jjtn001);
      try {
        jj_consume_token(OR);
            { if (hasError) { return __ERROR_RET__; } }
        
        AndExp();
            { if (hasError) { return __ERROR_RET__; } }
        
      } catch ( ...) {
if (jjtc001) {
          jjtree.clearNodeScope(jjtn001);
          jjtc001 = false;
        } else {
          jjtree.popNode();
        }
      }
if (jjtc001) {
          jjtree.closeNodeScope(jjtn001,  2);
        }
    }
    end_label_8: ;

#undef __ERROR_RET__

}


void MiniJavaParser::AndExp() {
#if !defined ERROR_RET_AndExp
#define ERROR_RET_AndExp 
#endif
#define __ERROR_RET__ ERROR_RET_AndExp

    EqNeqExp();
        { if (hasError) { return __ERROR_RET__; } }
    
    while (!hasError) {
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case AND:{
        ;
        break;
        }
      default:
        jj_la1[17] = jj_gen;
        goto end_label_9;
      }
ASTAndNode *jjtn001 = new ASTAndNode(JJTANDNODE);
        bool jjtc001 = true;
        jjtree.openNodeScope(jjtn001);
      try {
        jj_consume_token(AND);
            { if (hasError) { return __ERROR_RET__; } }
        
        EqNeqExp();
            { if (hasError) { return __ERROR_RET__; } }
        
      } catch ( ...) {
if (jjtc001) {
          jjtree.clearNodeScope(jjtn001);
          jjtc001 = false;
        } else {
          jjtree.popNode();
        }
      }
if (jjtc001) {
          jjtree.closeNodeScope(jjtn001,  2);
        }
    }
    end_label_9: ;

#undef __ERROR_RET__

}


void MiniJavaParser::EqNeqExp() {
#if !defined ERROR_RET_EqNeqExp
#define ERROR_RET_EqNeqExp 
#endif
#define __ERROR_RET__ ERROR_RET_EqNeqExp
Token* t = NULL;
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
        jj_la1[18] = jj_gen;
        goto end_label_10;
      }
ASTEqualNotEqualNode *jjtn001 = new ASTEqualNotEqualNode(JJTEQUALNOTEQUALNODE);
        bool jjtc001 = true;
        jjtree.openNodeScope(jjtn001);
      try {
        switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
        case EQ:{
          t = jj_consume_token(EQ);
              { if (hasError) { return __ERROR_RET__; } }
          
          break;
          }
        case NEQ:{
          t = jj_consume_token(NEQ);
              { if (hasError) { return __ERROR_RET__; } }
          
          break;
          }
        default:
          jj_la1[19] = jj_gen;
          jj_consume_token(-1);
          errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;return __ERROR_RET__;
          
        }
jjtn001->setName(t->image);
        RelExp();
            { if (hasError) { return __ERROR_RET__; } }
        
      } catch ( ...) {
if (jjtc001) {
          jjtree.clearNodeScope(jjtn001);
          jjtc001 = false;
        } else {
          jjtree.popNode();
        }
      }
if (jjtc001) {
          jjtree.closeNodeScope(jjtn001,  2);
        }
    }
    end_label_10: ;

#undef __ERROR_RET__

}


void MiniJavaParser::RelExp() {
#if !defined ERROR_RET_RelExp
#define ERROR_RET_RelExp 
#endif
#define __ERROR_RET__ ERROR_RET_RelExp
Token* t = NULL;
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
        jj_la1[20] = jj_gen;
        goto end_label_11;
      }
ASTRelationalNode *jjtn001 = new ASTRelationalNode(JJTRELATIONALNODE);
        bool jjtc001 = true;
        jjtree.openNodeScope(jjtn001);
      try {
        switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
        case LT:{
          t = jj_consume_token(LT);
              { if (hasError) { return __ERROR_RET__; } }
          
          break;
          }
        case LTE:{
          t = jj_consume_token(LTE);
              { if (hasError) { return __ERROR_RET__; } }
          
          break;
          }
        case GT:{
          t = jj_consume_token(GT);
              { if (hasError) { return __ERROR_RET__; } }
          
          break;
          }
        case GTE:{
          t = jj_consume_token(GTE);
              { if (hasError) { return __ERROR_RET__; } }
          
          break;
          }
        default:
          jj_la1[21] = jj_gen;
          jj_consume_token(-1);
          errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;return __ERROR_RET__;
          
        }
jjtn001->setName(t->image);
        AddExp();
            { if (hasError) { return __ERROR_RET__; } }
        
      } catch ( ...) {
if (jjtc001) {
          jjtree.clearNodeScope(jjtn001);
          jjtc001 = false;
        } else {
          jjtree.popNode();
        }
      }
if (jjtc001) {
          jjtree.closeNodeScope(jjtn001,  2);
        }
    }
    end_label_11: ;

#undef __ERROR_RET__

}


void MiniJavaParser::AddExp() {
#if !defined ERROR_RET_AddExp
#define ERROR_RET_AddExp 
#endif
#define __ERROR_RET__ ERROR_RET_AddExp
Token* t = NULL;
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
        jj_la1[22] = jj_gen;
        goto end_label_12;
      }
ASTAdditiveNode *jjtn001 = new ASTAdditiveNode(JJTADDITIVENODE);
        bool jjtc001 = true;
        jjtree.openNodeScope(jjtn001);
      try {
        switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
        case PLUS:{
          t = jj_consume_token(PLUS);
              { if (hasError) { return __ERROR_RET__; } }
          
          break;
          }
        case MINUS:{
          t = jj_consume_token(MINUS);
              { if (hasError) { return __ERROR_RET__; } }
          
          break;
          }
        default:
          jj_la1[23] = jj_gen;
          jj_consume_token(-1);
          errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;return __ERROR_RET__;
          
        }
jjtn001->setName(t->image);
        MulExp();
            { if (hasError) { return __ERROR_RET__; } }
        
      } catch ( ...) {
if (jjtc001) {
          jjtree.clearNodeScope(jjtn001);
          jjtc001 = false;
        } else {
          jjtree.popNode();
        }
      }
if (jjtc001) {
          jjtree.closeNodeScope(jjtn001,  2);
        }
    }
    end_label_12: ;

#undef __ERROR_RET__

}


void MiniJavaParser::MulExp() {
#if !defined ERROR_RET_MulExp
#define ERROR_RET_MulExp 
#endif
#define __ERROR_RET__ ERROR_RET_MulExp
Token* t = NULL;
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
        jj_la1[24] = jj_gen;
        goto end_label_13;
      }
ASTMultiplicativeNode *jjtn001 = new ASTMultiplicativeNode(JJTMULTIPLICATIVENODE);
        bool jjtc001 = true;
        jjtree.openNodeScope(jjtn001);
      try {
        switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
        case MULT:{
          t = jj_consume_token(MULT);
              { if (hasError) { return __ERROR_RET__; } }
          
          break;
          }
        case DIV:{
          t = jj_consume_token(DIV);
              { if (hasError) { return __ERROR_RET__; } }
          
          break;
          }
        default:
          jj_la1[25] = jj_gen;
          jj_consume_token(-1);
          errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;return __ERROR_RET__;
          
        }
jjtn001->setName(t->image);
        UnaryExp();
            { if (hasError) { return __ERROR_RET__; } }
        
      } catch ( ...) {
if (jjtc001) {
          jjtree.clearNodeScope(jjtn001);
          jjtc001 = false;
        } else {
          jjtree.popNode();
        }
      }
if (jjtc001) {
          jjtree.closeNodeScope(jjtn001,  2);
        }
    }
    end_label_13: ;

#undef __ERROR_RET__

}


void MiniJavaParser::UnaryExp() {
#if !defined ERROR_RET_UnaryExp
#define ERROR_RET_UnaryExp 
#endif
#define __ERROR_RET__ ERROR_RET_UnaryExp
Token* t = NULL;
    switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
    case NOT:{
ASTUnaryNode *jjtn001 = new ASTUnaryNode(JJTUNARYNODE);
    bool jjtc001 = true;
    jjtree.openNodeScope(jjtn001);
      try {
        t = jj_consume_token(NOT);
            { if (hasError) { return __ERROR_RET__; } }
        
jjtn001->setName(t->image);
        PrimaryExp();
            { if (hasError) { return __ERROR_RET__; } }
        
      } catch ( ...) {
if (jjtc001) {
      jjtree.clearNodeScope(jjtn001);
      jjtc001 = false;
    } else {
      jjtree.popNode();
    }
      }
if (jjtc001) {
      jjtree.closeNodeScope(jjtn001,  1);
    }
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
      jj_la1[26] = jj_gen;
      jj_consume_token(-1);
      errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;return __ERROR_RET__;
      
    }

#undef __ERROR_RET__

}


void MiniJavaParser::PrimaryExp() {
#if !defined ERROR_RET_PrimaryExp
#define ERROR_RET_PrimaryExp 
#endif
#define __ERROR_RET__ ERROR_RET_PrimaryExp

    BeforePrimay();
        { if (hasError) { return __ERROR_RET__; } }
    
    while (!hasError) {
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case LPAREN:
      case LBRACKET:
      case DOT:{
        ;
        break;
        }
      default:
        jj_la1[27] = jj_gen;
        goto end_label_14;
      }
      AfterPrimary();
          { if (hasError) { return __ERROR_RET__; } }
      
    }
    end_label_14: ;

#undef __ERROR_RET__

}


void MiniJavaParser::BeforePrimay() {
#if !defined ERROR_RET_BeforePrimay
#define ERROR_RET_BeforePrimay 
#endif
#define __ERROR_RET__ ERROR_RET_BeforePrimay

    switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
    case IDENTIFIER:{
ASTAccessIdentifier *jjtn001 = new ASTAccessIdentifier(JJTACCESSIDENTIFIER);
    bool jjtc001 = true;
    jjtree.openNodeScope(jjtn001);
      try {
        Identifier();
            { if (hasError) { return __ERROR_RET__; } }
        
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
      jj_la1[28] = jj_gen;
      if (jj_2_1(2)) {
        AllocateMemory();
            { if (hasError) { return __ERROR_RET__; } }
        
      } else {
        jj_consume_token(-1);
        errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;return __ERROR_RET__;
        
      }
    }

#undef __ERROR_RET__

}


void MiniJavaParser::AfterPrimary() {
#if !defined ERROR_RET_AfterPrimary
#define ERROR_RET_AfterPrimary 
#endif
#define __ERROR_RET__ ERROR_RET_AfterPrimary

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
      
      Identifier();
          { if (hasError) { return __ERROR_RET__; } }
      
      break;
      }
    case LPAREN:{
      jj_consume_token(LPAREN);
          { if (hasError) { return __ERROR_RET__; } }
      
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case INTEGER_LITERAL:
      case TRUE:
      case FALSE:
      case THIS:
      case NEW:
      case NOT:
      case LPAREN:
      case IDENTIFIER:{
        ExpList();
            { if (hasError) { return __ERROR_RET__; } }
        
        break;
        }
      default:
        jj_la1[29] = jj_gen;
        ;
      }
      jj_consume_token(RPAREN);
          { if (hasError) { return __ERROR_RET__; } }
      
      break;
      }
    default:
      jj_la1[30] = jj_gen;
      jj_consume_token(-1);
      errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;return __ERROR_RET__;
      
    }

#undef __ERROR_RET__

}


void MiniJavaParser::AllocateMemory() {
#if !defined ERROR_RET_AllocateMemory
#define ERROR_RET_AllocateMemory 
#endif
#define __ERROR_RET__ ERROR_RET_AllocateMemory

    jj_consume_token(NEW);
        { if (hasError) { return __ERROR_RET__; } }
    
    switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
    case IDENTIFIER:{
      Identifier();
          { if (hasError) { return __ERROR_RET__; } }
      
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case LPAREN:{
        jj_consume_token(LPAREN);
            { if (hasError) { return __ERROR_RET__; } }
        
        switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
        case INTEGER_LITERAL:
        case TRUE:
        case FALSE:
        case THIS:
        case NEW:
        case NOT:
        case LPAREN:
        case IDENTIFIER:{
          ExpList();
              { if (hasError) { return __ERROR_RET__; } }
          
          break;
          }
        default:
          jj_la1[31] = jj_gen;
          ;
        }
        jj_consume_token(RPAREN);
            { if (hasError) { return __ERROR_RET__; } }
        
        break;
        }
      case LBRACKET:{
        jj_consume_token(LBRACKET);
            { if (hasError) { return __ERROR_RET__; } }
        
        jj_consume_token(INTEGER_LITERAL);
            { if (hasError) { return __ERROR_RET__; } }
        
        jj_consume_token(RBRACKET);
            { if (hasError) { return __ERROR_RET__; } }
        
        break;
        }
      default:
        jj_la1[32] = jj_gen;
        jj_consume_token(-1);
        errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;return __ERROR_RET__;
        
      }
      break;
      }
    case INT:
    case BOOLEAN:{
      SimpleType();
          { if (hasError) { return __ERROR_RET__; } }
      
      break;
      }
    default:
      jj_la1[33] = jj_gen;
      jj_consume_token(-1);
      errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;return __ERROR_RET__;
      
    }

#undef __ERROR_RET__

}


void MiniJavaParser::Literal() {
#if !defined ERROR_RET_Literal
#define ERROR_RET_Literal 
#endif
#define __ERROR_RET__ ERROR_RET_Literal
Token* t = NULL;/*@bgen(jjtree) LiteralNode */
  ASTLiteralNode *jjtn000 = new ASTLiteralNode(JJTLITERALNODE);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
    try {
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case INTEGER_LITERAL:{
        t = jj_consume_token(INTEGER_LITERAL);
            { if (hasError) { return __ERROR_RET__; } }
        
jjtree.closeNodeScope(jjtn000, true);
    jjtc000 = false;
jjtn000->setValue(t->image);
        break;
        }
      case TRUE:{
        t = jj_consume_token(TRUE);
            { if (hasError) { return __ERROR_RET__; } }
        
jjtree.closeNodeScope(jjtn000, true);
    jjtc000 = false;
jjtn000->setValue(t->image);
        break;
        }
      case FALSE:{
        t = jj_consume_token(FALSE);
            { if (hasError) { return __ERROR_RET__; } }
        
jjtree.closeNodeScope(jjtn000, true);
    jjtc000 = false;
jjtn000->setValue(t->image);
        break;
        }
      default:
        jj_la1[34] = jj_gen;
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

#undef __ERROR_RET__

}


void MiniJavaParser::Identifier() {
#if !defined ERROR_RET_Identifier
#define ERROR_RET_Identifier 
#endif
#define __ERROR_RET__ ERROR_RET_Identifier
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

#undef __ERROR_RET__

}


void MiniJavaParser::ExpList() {
#if !defined ERROR_RET_ExpList
#define ERROR_RET_ExpList 
#endif
#define __ERROR_RET__ ERROR_RET_ExpList

    Exp();
        { if (hasError) { return __ERROR_RET__; } }
    
    while (!hasError) {
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case COMMA:{
        ;
        break;
        }
      default:
        jj_la1[35] = jj_gen;
        goto end_label_15;
      }
      jj_consume_token(COMMA);
          { if (hasError) { return __ERROR_RET__; } }
      
      Exp();
          { if (hasError) { return __ERROR_RET__; } }
      
    }
    end_label_15: ;

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
    trace = false;
    jj_ntk = -1;
    jjtree.reset();
    jj_gen = 0;
    for (int i = 0; i < 36; i++) jj_la1[i] = -1;
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
        for (int i = 0; i < 1; i++) {
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
    for (int i = 0; i < 1; i++) {
      JJCalls *p = &jj_2_rtns[i];
      do {
        if (p->gen > jj_gen) {
          jj_la = p->arg; jj_lastpos = jj_scanpos = p->first;
          switch (i) {
            case 0: jj_3_1(); break;
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


