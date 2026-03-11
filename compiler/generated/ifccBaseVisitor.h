
// Generated from ifcc.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "ifccVisitor.h"


/**
 * This class provides an empty implementation of ifccVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  ifccBaseVisitor : public ifccVisitor {
public:

  virtual std::any visitAxiom(ifccParser::AxiomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProg(ifccParser::ProgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReturnStmt(ifccParser::ReturnStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclaration(ifccParser::DeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignment(ifccParser::AssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstExpr(ifccParser::ConstExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArrayExpr(ifccParser::ArrayExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParExpr(ifccParser::ParExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMultExpr(ifccParser::MultExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVarExpr(ifccParser::VarExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAddExpr(ifccParser::AddExprContext *ctx) override {
    return visitChildren(ctx);
  }


};

