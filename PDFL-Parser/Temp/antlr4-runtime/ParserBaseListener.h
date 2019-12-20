
// Generated from Parser.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "ParserListener.h"


/**
 * This class provides an empty implementation of ParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  ParserBaseListener : public ParserListener {
public:

  virtual void enterPgm(Parser::PgmContext * /*ctx*/) override { }
  virtual void exitPgm(Parser::PgmContext * /*ctx*/) override { }

  virtual void enterExpr_list(Parser::Expr_listContext * /*ctx*/) override { }
  virtual void exitExpr_list(Parser::Expr_listContext * /*ctx*/) override { }

  virtual void enterExpr(Parser::ExprContext * /*ctx*/) override { }
  virtual void exitExpr(Parser::ExprContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

