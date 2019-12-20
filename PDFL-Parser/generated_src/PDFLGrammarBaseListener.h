
// Generated from PDFLGrammar.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "PDFLGrammarListener.h"


/**
 * This class provides an empty implementation of PDFLGrammarListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  PDFLGrammarBaseListener : public PDFLGrammarListener {
public:

  virtual void enterPgm(PDFLGrammarParser::PgmContext * /*ctx*/) override { }
  virtual void exitPgm(PDFLGrammarParser::PgmContext * /*ctx*/) override { }

  virtual void enterExpr_list(PDFLGrammarParser::Expr_listContext * /*ctx*/) override { }
  virtual void exitExpr_list(PDFLGrammarParser::Expr_listContext * /*ctx*/) override { }

  virtual void enterDense_expr(PDFLGrammarParser::Dense_exprContext * /*ctx*/) override { }
  virtual void exitDense_expr(PDFLGrammarParser::Dense_exprContext * /*ctx*/) override { }

  virtual void enterConstraint_list(PDFLGrammarParser::Constraint_listContext * /*ctx*/) override { }
  virtual void exitConstraint_list(PDFLGrammarParser::Constraint_listContext * /*ctx*/) override { }

  virtual void enterConstraint(PDFLGrammarParser::ConstraintContext * /*ctx*/) override { }
  virtual void exitConstraint(PDFLGrammarParser::ConstraintContext * /*ctx*/) override { }

  virtual void enterAlpha_numeric(PDFLGrammarParser::Alpha_numericContext * /*ctx*/) override { }
  virtual void exitAlpha_numeric(PDFLGrammarParser::Alpha_numericContext * /*ctx*/) override { }

  virtual void enterRelation_operator(PDFLGrammarParser::Relation_operatorContext * /*ctx*/) override { }
  virtual void exitRelation_operator(PDFLGrammarParser::Relation_operatorContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

