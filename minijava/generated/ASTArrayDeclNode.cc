/* Generated By:JJTree: Do not edit this line. ASTArrayDeclNode.cc Version 7.0 */
/* JavaCCOptions:MULTI=true,NODE_USES_PARSER=false,VISITOR=true,TRACK_TOKENS=false,NODE_PREFIX=AST,NODE_EXTENDS=,NODE_FACTORY=,SUPPORT_CLASS_VISIBILITY_PUBLIC=true */
#include "ASTArrayDeclNode.h"
#include "MiniJavaParserVisitor.h"

  
  ASTArrayDeclNode::ASTArrayDeclNode(int id) : SimpleNode(id) {
  }
  ASTArrayDeclNode::ASTArrayDeclNode(MiniJavaParser *parser, int id) : SimpleNode(parser, id) {
  }
  ASTArrayDeclNode::~ASTArrayDeclNode() {
  }

  /** Accept the visitor. **/
  void* ASTArrayDeclNode::jjtAccept(MiniJavaParserVisitor *visitor, void* data) const {
    return 
    visitor->visit(this, data);
  }

