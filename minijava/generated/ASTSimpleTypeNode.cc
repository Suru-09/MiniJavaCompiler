/* Generated By:JJTree: Do not edit this line. ASTSimpleTypeNode.cc Version 7.0 */
/* JavaCCOptions:MULTI=true,NODE_USES_PARSER=false,VISITOR=true,TRACK_TOKENS=false,NODE_PREFIX=AST,NODE_EXTENDS=,NODE_FACTORY=,SUPPORT_CLASS_VISIBILITY_PUBLIC=true */
#include "ASTSimpleTypeNode.h"
#include "MiniJavaParserVisitor.h"

  
  ASTSimpleTypeNode::ASTSimpleTypeNode(int id) : SimpleNode(id) {
  }
  ASTSimpleTypeNode::ASTSimpleTypeNode(MiniJavaParser *parser, int id) : SimpleNode(parser, id) {
  }
  ASTSimpleTypeNode::~ASTSimpleTypeNode() {
  }

  /** Accept the visitor. **/
  void* ASTSimpleTypeNode::jjtAccept(MiniJavaParserVisitor *visitor, void* data) const {
    return 
    visitor->visit(this, data);
  }

