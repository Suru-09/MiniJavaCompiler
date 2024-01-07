#ifndef __INFIX_VISITOR__H__
#define __INFIX_VISITOR__H__

#include <iostream>
#include <filesystem>
#include <fstream>

#include "PrefixParserVisitor.h"

namespace visitors {

class InfixVisitor : public PrefixParserVisitor {
public:
  void* visit(const SimpleNode *node, void* data);
  void* visit(const ASTRoot *node, void* data);
  void* visit(const ASTExpression *node, void* data);
  void* visit(const ASTTerm *node, void* data);
  void* visit(const ASTFactor *node, void* data);
  void* visit(const ASTIntegerConstant *node, void* data);

private:
    void visitChildrenAndAddEdges(const SimpleNode* node);

public:
    explicit InfixVisitor();
    virtual ~InfixVisitor() = default;
};


}   // namespace visitors

#endif // __INFIX_VISITOR__H__