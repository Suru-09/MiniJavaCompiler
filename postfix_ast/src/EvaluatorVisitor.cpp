#include "EvaluatorVisitor.h"

#include <string>

namespace visitors {

EvaluatorVisitor::EvaluatorVisitor()
{}

void EvaluatorVisitor::visitChildrenAndAddEdges(const SimpleNode* node) {
    for(int cIdx = 0; cIdx < node->jjtGetNumChildren(); ++cIdx)
    {
        void* returnedNodeCount = node->jjtGetChild(cIdx)->jjtAccept(this, nullptr);
    }
}

void EvaluatorVisitor::processOperator(char op) {
    assert(valueStack.size() >= 2);
    int64_t operand2 = valueStack.top();
    valueStack.pop();

    int64_t operand1 = valueStack.top();
    valueStack.pop();

    std::cout << "Processing " << op << " for operand2: " << operand2 << " & operand1: " << operand1 << "\n";

    switch (op) {
        case '+':
            valueStack.push(operand1 + operand2);
            break;
        case '*':
            valueStack.push(operand1 * operand2);
            break;
        default:
            break;
    }
}

int64_t EvaluatorVisitor::getValue() const {
    if (!valueStack.empty()) {
        return valueStack.top();
    } else {
        return 0;
    }
}

void* EvaluatorVisitor::visit(const SimpleNode *node, void* data) {
    visitChildrenAndAddEdges(node);
    return data;
}

void* EvaluatorVisitor::visit(const ASTRoot *node, void* data) {
    visitChildrenAndAddEdges(node);
    return data;
}

void* EvaluatorVisitor::visit(const ASTExpression *node, void* data) {
    auto numChildren = node->jjtGetNumChildren();
    for(int cIdx = 0; cIdx < numChildren; ++cIdx)
    {
        void* returnedNodeCount = node->jjtGetChild(cIdx)->jjtAccept(this, nullptr);
        if(valueStack.size() >= 2) {
            processOperator('+');
        }
    }
    return data;
}

void* EvaluatorVisitor::visit(const ASTTerm *node, void* data) {
    auto numChildren = node->jjtGetNumChildren();
    for(int cIdx = 0; cIdx < numChildren; ++cIdx)
    {
        void* returnedNodeCount = node->jjtGetChild(cIdx)->jjtAccept(this, nullptr);
        if(valueStack.size() >= 2) {
            processOperator('*');
        }
    }
   
    return data;
}

void* EvaluatorVisitor::visit(const ASTFactor *node, void* data) {
    visitChildrenAndAddEdges(node);
    return data;
}

void* EvaluatorVisitor::visit(const ASTIntegerConstant *node, void* data) {
    visitChildrenAndAddEdges(node);
    valueStack.push(stoi(node->toString()));
    return data;
}

}