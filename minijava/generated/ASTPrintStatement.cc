/* Generated By:JJTree: Do not edit this line. ASTPrintStatement.cc Version 7.0 */
/* JavaCCOptions:MULTI=true,NODE_USES_PARSER=false,VISITOR=true,TRACK_TOKENS=false,NODE_PREFIX=AST,NODE_EXTENDS=,NODE_FACTORY=,SUPPORT_CLASS_VISIBILITY_PUBLIC=true */
#include "ASTPrintStatement.h"
#include "MiniJavaParserVisitor.h"

  
  ASTPrintStatement::ASTPrintStatement(int id) : SimpleNode(id) {
  }
  ASTPrintStatement::ASTPrintStatement(MiniJavaParser *parser, int id) : SimpleNode(parser, id) {
  }
  ASTPrintStatement::~ASTPrintStatement() {
  }

  /** Accept the visitor. **/
  void* ASTPrintStatement::jjtAccept(MiniJavaParserVisitor *visitor, void* data) const {
    return 
    visitor->visit(this, data);
  }

