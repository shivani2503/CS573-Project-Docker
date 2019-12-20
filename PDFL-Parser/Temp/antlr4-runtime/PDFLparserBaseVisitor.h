
// Generated from PDFLparser.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "PDFLparserVisitor.h"


/**
 * This class provides an empty implementation of PDFLparserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  PDFLparserBaseVisitor : public PDFLparserVisitor {
public:

  virtual antlrcpp::Any visitPgm(PDFLparser::PgmContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_list(PDFLparser::Expr_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr(PDFLparser::ExprContext *ctx) override {
    return visitChildren(ctx);
  }


};

