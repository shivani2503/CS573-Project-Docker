
// Generated from PDFLparser.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "PDFLparser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by PDFLparser.
 */
class  PDFLparserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by PDFLparser.
   */
    virtual antlrcpp::Any visitPgm(PDFLparser::PgmContext *context) = 0;

    virtual antlrcpp::Any visitExpr_list(PDFLparser::Expr_listContext *context) = 0;

    virtual antlrcpp::Any visitExpr(PDFLparser::ExprContext *context) = 0;


};

