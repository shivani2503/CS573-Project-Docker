
// Generated from PDFLGrammar.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "PDFLGrammarParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by PDFLGrammarParser.
 */
class  PDFLGrammarListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterPgm(PDFLGrammarParser::PgmContext *ctx) = 0;
  virtual void exitPgm(PDFLGrammarParser::PgmContext *ctx) = 0;

  virtual void enterExpr_list(PDFLGrammarParser::Expr_listContext *ctx) = 0;
  virtual void exitExpr_list(PDFLGrammarParser::Expr_listContext *ctx) = 0;

  virtual void enterDense_expr(PDFLGrammarParser::Dense_exprContext *ctx) = 0;
  virtual void exitDense_expr(PDFLGrammarParser::Dense_exprContext *ctx) = 0;

  virtual void enterConstraint_list(PDFLGrammarParser::Constraint_listContext *ctx) = 0;
  virtual void exitConstraint_list(PDFLGrammarParser::Constraint_listContext *ctx) = 0;

  virtual void enterConstraint(PDFLGrammarParser::ConstraintContext *ctx) = 0;
  virtual void exitConstraint(PDFLGrammarParser::ConstraintContext *ctx) = 0;

  virtual void enterAlpha_numeric(PDFLGrammarParser::Alpha_numericContext *ctx) = 0;
  virtual void exitAlpha_numeric(PDFLGrammarParser::Alpha_numericContext *ctx) = 0;

  virtual void enterRelation_operator(PDFLGrammarParser::Relation_operatorContext *ctx) = 0;
  virtual void exitRelation_operator(PDFLGrammarParser::Relation_operatorContext *ctx) = 0;


};

