#ifndef __EVALUATOR_VISITOR__H__
#define __EVALUATOR_VISITOR__H__

#include <iostream>
#include <filesystem>
#include <fstream>
#include <stack>

#include "PrefixParserVisitor.h"

namespace visitors {

class EvaluatorVisitor : public PrefixParserVisitor {
public:
  void* visit(const SimpleNode *node, void* data);
  void* visit(const ASTRoot *node, void* data);
  void* visit(const ASTExpression *node, void* data);
  void* visit(const ASTTerm *node, void* data);
  void* visit(const ASTFactor *node, void* data);
  void* visit(const ASTIntegerConstant *node, void* data);

private:
    void visitChildrenAndAddEdges(const SimpleNode* node);
    
    void processOperator(char op);
    std::stack<int64_t> valueStack;

public:
    explicit EvaluatorVisitor();
    virtual ~EvaluatorVisitor() = default;

    int64_t getValue() const;
};

}   // namespace visitors

#endif // __EVALUATOR_VISITOR__H__