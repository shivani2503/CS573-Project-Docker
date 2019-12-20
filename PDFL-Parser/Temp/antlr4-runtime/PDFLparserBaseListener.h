
// Generated from PDFLparser.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "PDFLparserListener.h"


/**
 * This class provides an empty implementation of PDFLparserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  PDFLparserBaseListener : public PDFLparserListener {
public:

  virtual void enterPgm(PDFLparser::PgmContext * /*ctx*/) override { }
  virtual void exitPgm(PDFLparser::PgmContext * /*ctx*/) override { }

  virtual void enterExpr_list(PDFLparser::Expr_listContext * /*ctx*/) override { }
  virtual void exitExpr_list(PDFLparser::Expr_listContext * /*ctx*/) override { }

  virtual void enterExpr(PDFLparser::ExprContext * /*ctx*/) override { }
  virtual void exitExpr(PDFLparser::ExprContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

