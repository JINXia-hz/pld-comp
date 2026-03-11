#pragma once

#include "antlr4-runtime.h"
#include "generated/ifccBaseVisitor.h"
#include <map>
#include <string>

class StaticVisitor : public ifccBaseVisitor {
public:
    virtual antlrcpp::Any visitDeclaration(ifccParser::DeclarationContext *ctx) override;
    virtual antlrcpp::Any visitVarExpr(ifccParser::VarExprContext *ctx) override;
    virtual antlrcpp::Any visitAssignment(ifccParser::AssignmentContext *ctx) override;
    virtual antlrcpp::Any visitArrayExpr(ifccParser::ArrayExprContext *ctx) override;
    std::map<std::string, int> getSymbolTable() { return symbolTable; }
    virtual antlrcpp::Any visitIfStmt(ifccParser::IfStmtContext *ctx) override;
    virtual antlrcpp::Any visitBlocStmt(ifccParser::BlocStmtContext *ctx) override;

protected:
    std::map<std::string, int> symbolTable;
    int currentOffset = 0;
};