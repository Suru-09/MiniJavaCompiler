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
      
      if (jj_2_2(2)) {
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
        if (jj_2_5(2)) {
          ;
        } else {
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
      if (jj_2_7(2)) {
        Type();
            { if (hasError) { return __ERROR_RET__; } }
        
        Identifier();
            { if (hasError) { return __ERROR_RET__; } }
        
        while (!hasError) {
          if (jj_2_6(2)) {
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
      if (jj_2_8(2)) {
        SimpleType();
            { if (hasError) { return __ERROR_RET__; } }
        
      } else if (jj_2_9(2)) {
        Identifier();
            { if (hasError) { return __ERROR_RET__; } }
        
      } else {
        jj_consume_token(-1);
        errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;return __ERROR_RET__;
        
      }
      if (jj_2_10(2)) {
        ArrayDecl();
            { if (hasError) { return __ERROR_RET__; } }
        
      } else {
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
      if (jj_2_11(2)) {
        t = jj_consume_token(INT);
            { if (hasError) { return __ERROR_RET__; } }
        
      } else if (jj_2_12(2)) {
        t = jj_consume_token(BOOLEAN);
            { if (hasError) { return __ERROR_RET__; } }
        
      } else {
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

    if (jj_2_13(2)) {
      OptionalExprStmt();
          { if (hasError) { return __ERROR_RET__; } }
      
    } else if (jj_2_14(2)) {
      BlockStatement();
          { if (hasError) { return __ERROR_RET__; } }
      
    } else if (jj_2_15(2)) {
      IfStatement();
          { if (hasError) { return __ERROR_RET__; } }
      
    } else if (jj_2_16(2)) {
      WhileStatement();
          { if (hasError) { return __ERROR_RET__; } }
      
    } else if (jj_2_17(2)) {
      PrintStatement();
          { if (hasError) { return __ERROR_RET__; } }
      
    } else if (jj_2_18(2)) {
      ReturnStatement();
          { if (hasError) { return __ERROR_RET__; } }
      
    } else {
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
        if (jj_2_19(2)) {
          ;
        } else {
          goto end_label_6;
        }
        if (jj_2_20(2)) {
          Statement();
              { if (hasError) { return __ERROR_RET__; } }
          
        } else if (jj_2_21(2)) {
          VarDecl();
              { if (hasError) { return __ERROR_RET__; } }
          
        } else {
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
      
      if (jj_2_22(2)) {
        Exp();
            { if (hasError) { return __ERROR_RET__; } }
        
      } else {
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
      if (jj_2_23(2)) {
        Exp();
            { if (hasError) { return __ERROR_RET__; } }
        
      } else {
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
      if (jj_2_24(2)) {
        ;
      } else {
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
      if (jj_2_25(2)) {
        ;
      } else {
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
      if (jj_2_26(2)) {
        ;
      } else {
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
      if (jj_2_27(2)) {
        ;
      } else {
        goto end_label_10;
      }
ASTEqualNotEqualNode *jjtn001 = new ASTEqualNotEqualNode(JJTEQUALNOTEQUALNODE);
        bool jjtc001 = true;
        jjtree.openNodeScope(jjtn001);
      try {
        if (jj_2_28(2)) {
          t = jj_consume_token(EQ);
              { if (hasError) { return __ERROR_RET__; } }
          
        } else if (jj_2_29(2)) {
          t = jj_consume_token(NEQ);
              { if (hasError) { return __ERROR_RET__; } }
          
        } else {
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
      if (jj_2_30(2)) {
        ;
      } else {
        goto end_label_11;
      }
ASTRelationalNode *jjtn001 = new ASTRelationalNode(JJTRELATIONALNODE);
        bool jjtc001 = true;
        jjtree.openNodeScope(jjtn001);
      try {
        if (jj_2_31(2)) {
          t = jj_consume_token(LT);
              { if (hasError) { return __ERROR_RET__; } }
          
        } else if (jj_2_32(2)) {
          t = jj_consume_token(LTE);
              { if (hasError) { return __ERROR_RET__; } }
          
        } else if (jj_2_33(2)) {
          t = jj_consume_token(GT);
              { if (hasError) { return __ERROR_RET__; } }
          
        } else if (jj_2_34(2)) {
          t = jj_consume_token(GTE);
              { if (hasError) { return __ERROR_RET__; } }
          
        } else {
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
      if (jj_2_35(2)) {
        ;
      } else {
        goto end_label_12;
      }
ASTAdditiveNode *jjtn001 = new ASTAdditiveNode(JJTADDITIVENODE);
        bool jjtc001 = true;
        jjtree.openNodeScope(jjtn001);
      try {
        if (jj_2_36(2)) {
          t = jj_consume_token(PLUS);
              { if (hasError) { return __ERROR_RET__; } }
          
        } else if (jj_2_37(2)) {
          t = jj_consume_token(MINUS);
              { if (hasError) { return __ERROR_RET__; } }
          
        } else {
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
      if (jj_2_38(2)) {
        ;
      } else {
        goto end_label_13;
      }
ASTMultiplicativeNode *jjtn001 = new ASTMultiplicativeNode(JJTMULTIPLICATIVENODE);
        bool jjtc001 = true;
        jjtree.openNodeScope(jjtn001);
      try {
        if (jj_2_39(2)) {
          t = jj_consume_token(MULT);
              { if (hasError) { return __ERROR_RET__; } }
          
        } else if (jj_2_40(2)) {
          t = jj_consume_token(DIV);
              { if (hasError) { return __ERROR_RET__; } }
          
        } else {
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
    if (jj_2_41(2)) {
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
    } else if (jj_2_42(2)) {
      PrimaryExp();
          { if (hasError) { return __ERROR_RET__; } }
      
    } else {
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
/*@bgen(jjtree) PrimaryExpNode */
  ASTPrimaryExpNode *jjtn000 = new ASTPrimaryExpNode(JJTPRIMARYEXPNODE);
  bool jjtc000 = true;
  jjtree.openNodeScope(jjtn000);
    try {
      BeforePrimay();
          { if (hasError) { return __ERROR_RET__; } }
      
      while (!hasError) {
        if (jj_2_43(3)) {
          ;
        } else {
          goto end_label_14;
        }
        AfterPrimary();
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

#undef __ERROR_RET__

}


void MiniJavaParser::BeforePrimay() {
#if !defined ERROR_RET_BeforePrimay
#define ERROR_RET_BeforePrimay 
#endif
#define __ERROR_RET__ ERROR_RET_BeforePrimay

    if (jj_2_44(2)) {
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
    } else if (jj_2_45(2)) {
      Literal();
          { if (hasError) { return __ERROR_RET__; } }
      
    } else if (jj_2_46(2)) {
      jj_consume_token(THIS);
          { if (hasError) { return __ERROR_RET__; } }
      
    } else if (jj_2_47(2)) {
      jj_consume_token(LPAREN);
          { if (hasError) { return __ERROR_RET__; } }
      
      Exp();
          { if (hasError) { return __ERROR_RET__; } }
      
      jj_consume_token(RPAREN);
          { if (hasError) { return __ERROR_RET__; } }
      
    } else if (jj_2_48(2)) {
      AllocateMemory();
          { if (hasError) { return __ERROR_RET__; } }
      
    } else {
      jj_consume_token(-1);
      errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;return __ERROR_RET__;
      
    }

#undef __ERROR_RET__

}


void MiniJavaParser::AfterPrimary() {
#if !defined ERROR_RET_AfterPrimary
#define ERROR_RET_AfterPrimary 
#endif
#define __ERROR_RET__ ERROR_RET_AfterPrimary

    if (jj_2_52(2)) {
ASTAccessArray *jjtn001 = new ASTAccessArray(JJTACCESSARRAY);
    bool jjtc001 = true;
    jjtree.openNodeScope(jjtn001);
      try {
        jj_consume_token(LBRACKET);
            { if (hasError) { return __ERROR_RET__; } }
        
        Exp();
            { if (hasError) { return __ERROR_RET__; } }
        
        jj_consume_token(RBRACKET);
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
    } else if (jj_2_53(2)) {
ASTFunCall *jjtn004 = new ASTFunCall(JJTFUNCALL);
    bool jjtc004 = true;
    jjtree.openNodeScope(jjtn004);
      try {
        jj_consume_token(DOT);
            { if (hasError) { return __ERROR_RET__; } }
        
        if (jj_2_49(2)) {
ASTAccessIdentifier *jjtn002 = new ASTAccessIdentifier(JJTACCESSIDENTIFIER);
        bool jjtc002 = true;
        jjtree.openNodeScope(jjtn002);
          try {
            Identifier();
                { if (hasError) { return __ERROR_RET__; } }
            
          } catch ( ...) {
if (jjtc002) {
          jjtree.clearNodeScope(jjtn002);
          jjtc002 = false;
        } else {
          jjtree.popNode();
        }
          }
if (jjtc002) {
          jjtree.closeNodeScope(jjtn002, true);
        }
        } else if (jj_2_50(2)) {
ASTAccessLength *jjtn003 = new ASTAccessLength(JJTACCESSLENGTH);
        bool jjtc003 = true;
        jjtree.openNodeScope(jjtn003);
          try {
            jj_consume_token(LENGTH);
                { if (hasError) { return __ERROR_RET__; } }
            
          } catch ( ...) {
if (jjtc003) {
          jjtree.clearNodeScope(jjtn003);
          jjtc003 = false;
        } else {
          jjtree.popNode();
        }
          }
if (jjtc003) {
          jjtree.closeNodeScope(jjtn003, true);
        }
        } else {
          jj_consume_token(-1);
          errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;return __ERROR_RET__;
          
        }
      } catch ( ...) {
if (jjtc004) {
      jjtree.clearNodeScope(jjtn004);
      jjtc004 = false;
    } else {
      jjtree.popNode();
    }
      }
if (jjtc004) {
      jjtree.closeNodeScope(jjtn004, true);
    }
    } else if (jj_2_54(2)) {
ASTFunArgs *jjtn005 = new ASTFunArgs(JJTFUNARGS);
    bool jjtc005 = true;
    jjtree.openNodeScope(jjtn005);
      try {
        jj_consume_token(LPAREN);
            { if (hasError) { return __ERROR_RET__; } }
        
        if (jj_2_51(2)) {
          ExpList();
              { if (hasError) { return __ERROR_RET__; } }
          
        } else {
          ;
        }
        jj_consume_token(RPAREN);
            { if (hasError) { return __ERROR_RET__; } }
        
      } catch ( ...) {
if (jjtc005) {
      jjtree.clearNodeScope(jjtn005);
      jjtc005 = false;
    } else {
      jjtree.popNode();
    }
      }
if (jjtc005) {
      jjtree.closeNodeScope(jjtn005, true);
    }
    } else {
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
    
    if (jj_2_55(2)) {
      Identifier();
          { if (hasError) { return __ERROR_RET__; } }
      
    } else if (jj_2_56(2)) {
      SimpleType();
          { if (hasError) { return __ERROR_RET__; } }
      
    } else {
      jj_consume_token(-1);
      errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;return __ERROR_RET__;
      
    }
    if (jj_2_58(2)) {
ASTAllocateIdentifier *jjtn001 = new ASTAllocateIdentifier(JJTALLOCATEIDENTIFIER);
      bool jjtc001 = true;
      jjtree.openNodeScope(jjtn001);
      try {
        jj_consume_token(LPAREN);
            { if (hasError) { return __ERROR_RET__; } }
        
        if (jj_2_57(2)) {
          ExpList();
              { if (hasError) { return __ERROR_RET__; } }
          
        } else {
          ;
        }
        jj_consume_token(RPAREN);
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
    } else if (jj_2_59(2)) {
ASTAllocateArray *jjtn002 = new ASTAllocateArray(JJTALLOCATEARRAY);
      bool jjtc002 = true;
      jjtree.openNodeScope(jjtn002);
      try {
        jj_consume_token(LBRACKET);
            { if (hasError) { return __ERROR_RET__; } }
        
        jj_consume_token(INTEGER_LITERAL);
            { if (hasError) { return __ERROR_RET__; } }
        
        jj_consume_token(RBRACKET);
            { if (hasError) { return __ERROR_RET__; } }
        
      } catch ( ...) {
if (jjtc002) {
        jjtree.clearNodeScope(jjtn002);
        jjtc002 = false;
      } else {
        jjtree.popNode();
      }
      }
if (jjtc002) {
        jjtree.closeNodeScope(jjtn002, true);
      }
    } else {
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
      if (jj_2_60(2)) {
        t = jj_consume_token(INTEGER_LITERAL);
            { if (hasError) { return __ERROR_RET__; } }
        
jjtree.closeNodeScope(jjtn000, true);
    jjtc000 = false;
jjtn000->setValue(t->image);
      } else if (jj_2_61(2)) {
        t = jj_consume_token(TRUE);
            { if (hasError) { return __ERROR_RET__; } }
        
jjtree.closeNodeScope(jjtn000, true);
    jjtc000 = false;
jjtn000->setValue(t->image);
      } else if (jj_2_62(2)) {
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
      if (jj_2_63(2)) {
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
        for (int i = 0; i < 63; i++) {
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
    for (int i = 0; i < 63; i++) {
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
            case 55: jj_3_56(); break;
            case 56: jj_3_57(); break;
            case 57: jj_3_58(); break;
            case 58: jj_3_59(); break;
            case 59: jj_3_60(); break;
            case 60: jj_3_61(); break;
            case 61: jj_3_62(); break;
            case 62: jj_3_63(); break;
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


