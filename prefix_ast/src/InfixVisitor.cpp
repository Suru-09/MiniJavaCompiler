#include "InfixVisitor.h"

#include <filesystem>
#include <fstream>
#include <iostream>

namespace visitors {

InfixVisitor::InfixVisitor()
{
}

void InfixVisitor::visitChildrenAndAddEdges(const SimpleNode* node) {
    for(int cIdx = 0; cIdx < node->jjtGetNumChildren(); ++cIdx)
    {
        void* returnedNodeCount = node->jjtGetChild(cIdx)->jjtAccept(this, nullptr);
    }
}

void* InfixVisitor::visit(const SimpleNode *node, void* data) {
    visitChildrenAndAddEdges(node);
    return data;
}

void* InfixVisitor::visit(const ASTRoot *node, void* data) {
    visitChildrenAndAddEdges(node);
    return data;
}

void* InfixVisitor::visit(const ASTExpression *node, void* data) {
    auto numChildren = node->jjtGetNumChildren();
    for(int cIdx = 0; cIdx < numChildren; ++cIdx)
    {
        void* returnedNodeCount = node->jjtGetChild(cIdx)->jjtAccept(this, nullptr);
        if (cIdx < numChildren - 1) {
            std::cout << "+ ";
        }
    }
    return data;
}

void* InfixVisitor::visit(const ASTTerm *node, void* data) {
    auto numChildren = node->jjtGetNumChildren();
    for(int cIdx = 0; cIdx < numChildren; ++cIdx)
    {
        void* returnedNodeCount = node->jjtGetChild(cIdx)->jjtAccept(this, nullptr);
        if (cIdx < numChildren - 1) {
            std::cout << "* ";
        }
    }
    return data;
}

void*InfixVisitor::visit(const ASTFactor *node, void* data) {
    std::cout << "( ";
    visitChildrenAndAddEdges(node);
    std::cout << ") ";
    return data;
}

void* InfixVisitor::visit(const ASTIntegerConstant *node, void* data) {
    visitChildrenAndAddEdges(node);
    std::cout << node->toString() + " ";
    return data;
}


}