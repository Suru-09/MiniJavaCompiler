#include "PostfixVisitor.h"

#include <filesystem>
#include <fstream>
#include <iostream>

namespace visitors {

PostfixVisitor::PostfixVisitor()
{
}

void PostfixVisitor::visitChildrenAndAddEdges(const SimpleNode* node) {
    for(int cIdx = 0; cIdx < node->jjtGetNumChildren(); ++cIdx)
    {
        void* returnedNodeCount = node->jjtGetChild(cIdx)->jjtAccept(this, nullptr);
    }
}

void* PostfixVisitor::visit(const SimpleNode *node, void* data) {
    visitChildrenAndAddEdges(node);
    return data;
}

void* PostfixVisitor::visit(const ASTRoot *node, void* data) {
    visitChildrenAndAddEdges(node);
    return data;
}

void* PostfixVisitor::visit(const ASTExpression *node, void* data) {
    auto numChildren = node->jjtGetNumChildren();
    for(int cIdx = 0; cIdx < numChildren; cIdx++)
    {
        void* returnedNodeCount = node->jjtGetChild(cIdx)->jjtAccept(this, nullptr);
        if (cIdx % 2 == 1) {
            std::cout << "+ ";
        }
    }
    if (numChildren % 2 == 1) {
        std::cout << "+ ";
    }
    return data;
}

void* PostfixVisitor::visit(const ASTTerm *node, void* data) {
    auto numChildren = node->jjtGetNumChildren();
    for(int cIdx = 0; cIdx < numChildren; cIdx++)
    {
        void* returnedNodeCount = node->jjtGetChild(cIdx)->jjtAccept(this, nullptr);
        if (cIdx % 2 == 1) {
            std::cout << "* ";
        }
    }
    if (numChildren % 2 == 1) {
        std::cout << "* ";
    }
    return data;
}

void*PostfixVisitor::visit(const ASTFactor *node, void* data) {
    //std::cout << "( ";
    visitChildrenAndAddEdges(node);
    //std::cout << ") ";
    return data;
}

void* PostfixVisitor::visit(const ASTIntegerConstant *node, void* data) {
    visitChildrenAndAddEdges(node);
    std::cout << node->toString() + " ";
    return data;
}


}