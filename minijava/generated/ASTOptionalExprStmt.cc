/* Generated By:JJTree: Do not edit this line. ASTOptionalExprStmt.cc Version 7.0 */
/* JavaCCOptions:MULTI=true,NODE_USES_PARSER=false,VISITOR=true,TRACK_TOKENS=false,NODE_PREFIX=AST,NODE_EXTENDS=,NODE_FACTORY=,SUPPORT_CLASS_VISIBILITY_PUBLIC=true */
#include "ASTOptionalExprStmt.h"
#include "MiniJavaParserVisitor.h"

  
  ASTOptionalExprStmt::ASTOptionalExprStmt(int id) : SimpleNode(id) {
  }
  ASTOptionalExprStmt::ASTOptionalExprStmt(MiniJavaParser *parser, int id) : SimpleNode(parser, id) {
  }
  ASTOptionalExprStmt::~ASTOptionalExprStmt() {
  }

  /** Accept the visitor. **/
  void* ASTOptionalExprStmt::jjtAccept(MiniJavaParserVisitor *visitor, void* data) const {
    return 
    visitor->visit(this, data);
  }

