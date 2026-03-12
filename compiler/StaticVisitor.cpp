#include "StaticVisitor.h"
#include <iostream>

antlrcpp::Any StaticVisitor::visitDeclaration(ifccParser::DeclarationContext *ctx) {
    std::string varName = ctx->VAR()->getText();

    if (symbolTable.find(varName) != symbolTable.end()) {
        std::cerr << "Error: variable " << varName << " already declared." << std::endl;
        exit(1); 
    }

    currentOffset -= 4; 
    symbolTable[varName] = currentOffset; 

    return 0;
}

antlrcpp::Any StaticVisitor::visitVarExpr(ifccParser::VarExprContext *ctx) {
    std::string varName = ctx->VAR()->getText();

    if (symbolTable.find(varName) == symbolTable.end()) {
        std::cerr << "Error: variable " << varName << " used but not declared." << std::endl;
        exit(1);
    }

    return 0;
}

antlrcpp::Any StaticVisitor::visitAssignment(ifccParser::AssignmentContext *ctx) {
    std::string varName = ctx->VAR()->getText();
    if (symbolTable.find(varName) == symbolTable.end()) {
        std::cerr << "Error: variable " << varName << " used before declaration." << std::endl;
        exit(1);
    }
    return this->visit(ctx->expr());
}

antlrcpp::Any StaticVisitor::visitArrayExpr(ifccParser::ArrayExprContext *ctx) {
    std::string varName = ctx->VAR()->getText();
    if (symbolTable.find(varName) == symbolTable.end()) {
        std::cerr << "Error: array " << varName << " undeclared." << std::endl;
        exit(1);
    }
    return 0;
}

antlrcpp::Any StaticVisitor::visitIfStmt(ifccParser::IfStmtContext *ctx) {
    this->visit(ctx->expr());
    this->visit(ctx->thenStmt);
    if (ctx->elseStmt) {
        this->visit(ctx->elseStmt);
    }
    return 0;
}

antlrcpp::Any StaticVisitor::visitBlocStmt(ifccParser::BlocStmtContext *ctx) {
    for (auto stmt : ctx->statements) {
        this->visit(stmt);
    }
    return 0;
}