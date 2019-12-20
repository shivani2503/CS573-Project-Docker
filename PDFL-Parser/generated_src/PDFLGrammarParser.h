
// Generated from PDFLGrammar.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  PDFLGrammarParser : public antlr4::Parser {
public:
  enum {
    DIGIT = 1, IDENT = 2, INVALID_IDENT = 3, PLUS = 4, DASH = 5, STAR = 6, 
    LBRACE = 7, RBRACE = 8, LBRACKET = 9, RBRACKET = 10, LPAREN = 11, RPAREN = 12, 
    COMMA = 13, COLON = 14, SEMI = 15, EQ = 16, LT = 17, GT = 18, LTE = 19, 
    GTE = 20, ARROW = 21, AND = 22, SEPARATOR = 23, UNION = 24, INVERSE = 25, 
    EXISTS = 26, OR = 27, WAND = 28, WS = 29, ID = 30, INT = 31, UMINUS = 32, 
    QUOTES = 33
  };

  enum {
    RulePgm = 0, RuleExpr_list = 1, RuleDense_expr = 2, RuleConstraint_list = 3, 
    RuleConstraint = 4, RuleAlpha_numeric = 5, RuleRelation_operator = 6
  };

  PDFLGrammarParser(antlr4::TokenStream *input);
  ~PDFLGrammarParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class PgmContext;
  class Expr_listContext;
  class Dense_exprContext;
  class Constraint_listContext;
  class ConstraintContext;
  class Alpha_numericContext;
  class Relation_operatorContext; 

  class  PgmContext : public antlr4::ParserRuleContext {
  public:
    PgmContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Expr_listContext *expr_list();
    antlr4::tree::TerminalNode *EOF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PgmContext* pgm();

  class  Expr_listContext : public antlr4::ParserRuleContext {
  public:
    Expr_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Dense_exprContext *dense_expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expr_listContext* expr_list();

  class  Dense_exprContext : public antlr4::ParserRuleContext {
  public:
    Dense_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENT();
    antlr4::tree::TerminalNode *COMMA();
    Constraint_listContext *constraint_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dense_exprContext* dense_expr();

  class  Constraint_listContext : public antlr4::ParserRuleContext {
  public:
    Constraint_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstraintContext *constraint();
    antlr4::tree::TerminalNode *SEPARATOR();
    Constraint_listContext *constraint_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constraint_listContext* constraint_list();

  class  ConstraintContext : public antlr4::ParserRuleContext {
  public:
    ConstraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Alpha_numericContext *> alpha_numeric();
    Alpha_numericContext* alpha_numeric(size_t i);
    std::vector<Relation_operatorContext *> relation_operator();
    Relation_operatorContext* relation_operator(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstraintContext* constraint();

  class  Alpha_numericContext : public antlr4::ParserRuleContext {
  public:
    Alpha_numericContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DIGIT();
    antlr4::tree::TerminalNode *IDENT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alpha_numericContext* alpha_numeric();

  class  Relation_operatorContext : public antlr4::ParserRuleContext {
  public:
    Relation_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *GTE();
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *LTE();
    antlr4::tree::TerminalNode *EQ();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Relation_operatorContext* relation_operator();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

