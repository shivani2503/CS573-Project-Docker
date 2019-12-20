
// Generated from Parser.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "ParserVisitor.h"


/**
 * This class provides an empty implementation of ParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  ParserBaseVisitor : public ParserVisitor {
public:

  virtual antlrcpp::Any visitPgm(Parser::PgmContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_list(Parser::Expr_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr(Parser::ExprContext *ctx) override {
    return visitChildren(ctx);
  }


};

