#pragma once


#include "antlr4-runtime.h"
#include "generated/ifccBaseVisitor.h"


class  CodeGenVisitor : public ifccBaseVisitor {
	public:
        CodeGenVisitor(std::map<std::string, int> symbolTable) : symbolTable(symbolTable) {}
        virtual antlrcpp::Any visitProg(ifccParser::ProgContext *ctx) override ;
        virtual antlrcpp::Any visitDeclaration(ifccParser::DeclarationContext *ctx) override ;
        virtual antlrcpp::Any visitReturnStmt(ifccParser::ReturnStmtContext *ctx) override ;
        virtual antlrcpp::Any visitAssignment(ifccParser::AssignmentContext *ctx) override ;
        virtual antlrcpp::Any visitParExpr(ifccParser::ParExprContext *ctx) override ;
        virtual antlrcpp::Any visitAddExpr(ifccParser::AddExprContext *ctx) override ;
        virtual antlrcpp::Any visitMultExpr(ifccParser::MultExprContext *ctx) override ;
        virtual antlrcpp::Any visitVarExpr(ifccParser::VarExprContext *ctx) override ;
        virtual antlrcpp::Any visitConstExpr(ifccParser::ConstExprContext *ctx) override ;
        virtual antlrcpp::Any visitArrayExpr(ifccParser::ArrayExprContext *ctx) override;
        protected:
        std::map<std::string, int> symbolTable;
};

