
// Generated from Parser.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "Parser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by Parser.
 */
class  ParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterPgm(Parser::PgmContext *ctx) = 0;
  virtual void exitPgm(Parser::PgmContext *ctx) = 0;

  virtual void enterExpr_list(Parser::Expr_listContext *ctx) = 0;
  virtual void exitExpr_list(Parser::Expr_listContext *ctx) = 0;

  virtual void enterExpr(Parser::ExprContext *ctx) = 0;
  virtual void exitExpr(Parser::ExprContext *ctx) = 0;


};

