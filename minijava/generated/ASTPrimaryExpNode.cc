/* Generated By:JJTree: Do not edit this line. ASTPrimaryExpNode.cc Version 7.0 */
/* JavaCCOptions:MULTI=true,NODE_USES_PARSER=false,VISITOR=true,TRACK_TOKENS=false,NODE_PREFIX=AST,NODE_EXTENDS=,NODE_FACTORY=,SUPPORT_CLASS_VISIBILITY_PUBLIC=true */
#include "ASTPrimaryExpNode.h"
#include "MiniJavaParserVisitor.h"

  
  ASTPrimaryExpNode::ASTPrimaryExpNode(int id) : SimpleNode(id) {
  }
  ASTPrimaryExpNode::ASTPrimaryExpNode(MiniJavaParser *parser, int id) : SimpleNode(parser, id) {
  }
  ASTPrimaryExpNode::~ASTPrimaryExpNode() {
  }

  /** Accept the visitor. **/
  void* ASTPrimaryExpNode::jjtAccept(MiniJavaParserVisitor *visitor, void* data) const {
    return 
    visitor->visit(this, data);
  }

