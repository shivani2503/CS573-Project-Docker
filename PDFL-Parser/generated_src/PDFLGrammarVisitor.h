
// Generated from PDFLGrammar.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "PDFLGrammarParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by PDFLGrammarParser.
 */
class  PDFLGrammarVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by PDFLGrammarParser.
   */
    virtual antlrcpp::Any visitPgm(PDFLGrammarParser::PgmContext *context) = 0;

    virtual antlrcpp::Any visitExpr_list(PDFLGrammarParser::Expr_listContext *context) = 0;

    virtual antlrcpp::Any visitDense_expr(PDFLGrammarParser::Dense_exprContext *context) = 0;

    virtual antlrcpp::Any visitConstraint_list(PDFLGrammarParser::Constraint_listContext *context) = 0;

    virtual antlrcpp::Any visitConstraint(PDFLGrammarParser::ConstraintContext *context) = 0;

    virtual antlrcpp::Any visitAlpha_numeric(PDFLGrammarParser::Alpha_numericContext *context) = 0;

    virtual antlrcpp::Any visitRelation_operator(PDFLGrammarParser::Relation_operatorContext *context) = 0;


};

