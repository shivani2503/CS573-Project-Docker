
// Generated from PDFLparser.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "PDFLparser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by PDFLparser.
 */
class  PDFLparserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterPgm(PDFLparser::PgmContext *ctx) = 0;
  virtual void exitPgm(PDFLparser::PgmContext *ctx) = 0;

  virtual void enterExpr_list(PDFLparser::Expr_listContext *ctx) = 0;
  virtual void exitExpr_list(PDFLparser::Expr_listContext *ctx) = 0;

  virtual void enterExpr(PDFLparser::ExprContext *ctx) = 0;
  virtual void exitExpr(PDFLparser::ExprContext *ctx) = 0;


};

