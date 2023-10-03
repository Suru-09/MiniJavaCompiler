/* Generated By:JavaCC: Do not edit this line. MiniJavaParserVisitor.h Version 7.0.10 */
#ifndef MINIJAVAPARSERVISITOR_H
#define MINIJAVAPARSERVISITOR_H

#include "JavaCC.h"
#include "MiniJavaParserTree.h"
class MiniJavaParserVisitor
{
  public:
  virtual void* visit(const SimpleNode *node, void* data) = 0;
  virtual void* visit(const ASTRoot *node, void* data) = 0;
  virtual void* visit(const ASTAssignNode *node, void* data) = 0;
  virtual void* visit(const ASTOrNode *node, void* data) = 0;
  virtual void* visit(const ASTAndNode *node, void* data) = 0;
  virtual void* visit(const ASTEqNeqNode *node, void* data) = 0;
  virtual void* visit(const ASTLiteralNode *node, void* data) = 0;
  virtual void* visit(const ASTIdentifier *node, void* data) = 0;
  virtual ~MiniJavaParserVisitor() { }
};
class MiniJavaParserDefaultVisitor : public MiniJavaParserVisitor {
public:
  virtual void* defaultVisit(const SimpleNode *node, void* data) = 0;
  virtual void* visit(const SimpleNode *node, void* data) {
    return defaultVisit(node, data);
}
  virtual void* visit(const ASTRoot *node, void* data) {
    return defaultVisit(node, data);
  }
  virtual void* visit(const ASTAssignNode *node, void* data) {
    return defaultVisit(node, data);
  }
  virtual void* visit(const ASTOrNode *node, void* data) {
    return defaultVisit(node, data);
  }
  virtual void* visit(const ASTAndNode *node, void* data) {
    return defaultVisit(node, data);
  }
  virtual void* visit(const ASTEqNeqNode *node, void* data) {
    return defaultVisit(node, data);
  }
  virtual void* visit(const ASTLiteralNode *node, void* data) {
    return defaultVisit(node, data);
  }
  virtual void* visit(const ASTIdentifier *node, void* data) {
    return defaultVisit(node, data);
  }
  ~MiniJavaParserDefaultVisitor() { }
};
#endif
/* JavaCC - OriginalChecksum=1dbfc63744c4a0238eab8ce44882fc6f (do not edit this line) */
