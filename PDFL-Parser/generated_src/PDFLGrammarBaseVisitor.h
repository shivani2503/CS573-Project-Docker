
// Generated from PDFLGrammar.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "PDFLGrammarVisitor.h"


/**
 * This class provides an empty implementation of PDFLGrammarVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  PDFLGrammarBaseVisitor : public PDFLGrammarVisitor {
public:

  virtual antlrcpp::Any visitPgm(PDFLGrammarParser::PgmContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr_list(PDFLGrammarParser::Expr_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDense_expr(PDFLGrammarParser::Dense_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstraint_list(PDFLGrammarParser::Constraint_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstraint(PDFLGrammarParser::ConstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlpha_numeric(PDFLGrammarParser::Alpha_numericContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRelation_operator(PDFLGrammarParser::Relation_operatorContext *ctx) override {
    return visitChildren(ctx);
  }


};

