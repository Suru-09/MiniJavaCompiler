/* Generated By:JJTree: Do not edit this line. ASTArgsList.cc Version 7.0 */
/* JavaCCOptions:MULTI=true,NODE_USES_PARSER=false,VISITOR=true,TRACK_TOKENS=false,NODE_PREFIX=AST,NODE_EXTENDS=,NODE_FACTORY=,SUPPORT_CLASS_VISIBILITY_PUBLIC=true */
#include "ASTArgsList.h"
#include "MiniJavaParserVisitor.h"

  
  ASTArgsList::ASTArgsList(int id) : SimpleNode(id) {
  }
  ASTArgsList::ASTArgsList(MiniJavaParser *parser, int id) : SimpleNode(parser, id) {
  }
  ASTArgsList::~ASTArgsList() {
  }

  /** Accept the visitor. **/
  void* ASTArgsList::jjtAccept(MiniJavaParserVisitor *visitor, void* data) const {
    return 
    visitor->visit(this, data);
  }

