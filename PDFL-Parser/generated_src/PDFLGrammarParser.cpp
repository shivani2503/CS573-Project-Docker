
// Generated from PDFLGrammar.g4 by ANTLR 4.7.2


#include "PDFLGrammarListener.h"
#include "PDFLGrammarVisitor.h"

#include "PDFLGrammarParser.h"


using namespace antlrcpp;
using namespace antlr4;

PDFLGrammarParser::PDFLGrammarParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

PDFLGrammarParser::~PDFLGrammarParser() {
  delete _interpreter;
}

std::string PDFLGrammarParser::getGrammarFileName() const {
  return "PDFLGrammar.g4";
}

const std::vector<std::string>& PDFLGrammarParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& PDFLGrammarParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- PgmContext ------------------------------------------------------------------

PDFLGrammarParser::PgmContext::PgmContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PDFLGrammarParser::Expr_listContext* PDFLGrammarParser::PgmContext::expr_list() {
  return getRuleContext<PDFLGrammarParser::Expr_listContext>(0);
}

tree::TerminalNode* PDFLGrammarParser::PgmContext::EOF() {
  return getToken(PDFLGrammarParser::EOF, 0);
}


size_t PDFLGrammarParser::PgmContext::getRuleIndex() const {
  return PDFLGrammarParser::RulePgm;
}

void PDFLGrammarParser::PgmContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PDFLGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPgm(this);
}

void PDFLGrammarParser::PgmContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PDFLGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPgm(this);
}


antlrcpp::Any PDFLGrammarParser::PgmContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PDFLGrammarVisitor*>(visitor))
    return parserVisitor->visitPgm(this);
  else
    return visitor->visitChildren(this);
}

PDFLGrammarParser::PgmContext* PDFLGrammarParser::pgm() {
  PgmContext *_localctx = _tracker.createInstance<PgmContext>(_ctx, getState());
  enterRule(_localctx, 0, PDFLGrammarParser::RulePgm);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(14);
    expr_list();
    setState(15);
    match(PDFLGrammarParser::EOF);
     std::cout<<"Parsed successfully\n";
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Expr_listContext ------------------------------------------------------------------

PDFLGrammarParser::Expr_listContext::Expr_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PDFLGrammarParser::Dense_exprContext* PDFLGrammarParser::Expr_listContext::dense_expr() {
  return getRuleContext<PDFLGrammarParser::Dense_exprContext>(0);
}


size_t PDFLGrammarParser::Expr_listContext::getRuleIndex() const {
  return PDFLGrammarParser::RuleExpr_list;
}

void PDFLGrammarParser::Expr_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PDFLGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr_list(this);
}

void PDFLGrammarParser::Expr_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PDFLGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr_list(this);
}


antlrcpp::Any PDFLGrammarParser::Expr_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PDFLGrammarVisitor*>(visitor))
    return parserVisitor->visitExpr_list(this);
  else
    return visitor->visitChildren(this);
}

PDFLGrammarParser::Expr_listContext* PDFLGrammarParser::expr_list() {
  Expr_listContext *_localctx = _tracker.createInstance<Expr_listContext>(_ctx, getState());
  enterRule(_localctx, 2, PDFLGrammarParser::RuleExpr_list);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(18);
    dense_expr();
    std::cout<<"exp parsed successfully\n";
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Dense_exprContext ------------------------------------------------------------------

PDFLGrammarParser::Dense_exprContext::Dense_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PDFLGrammarParser::Dense_exprContext::IDENT() {
  return getToken(PDFLGrammarParser::IDENT, 0);
}

tree::TerminalNode* PDFLGrammarParser::Dense_exprContext::COMMA() {
  return getToken(PDFLGrammarParser::COMMA, 0);
}

PDFLGrammarParser::Constraint_listContext* PDFLGrammarParser::Dense_exprContext::constraint_list() {
  return getRuleContext<PDFLGrammarParser::Constraint_listContext>(0);
}


size_t PDFLGrammarParser::Dense_exprContext::getRuleIndex() const {
  return PDFLGrammarParser::RuleDense_expr;
}

void PDFLGrammarParser::Dense_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PDFLGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDense_expr(this);
}

void PDFLGrammarParser::Dense_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PDFLGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDense_expr(this);
}


antlrcpp::Any PDFLGrammarParser::Dense_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PDFLGrammarVisitor*>(visitor))
    return parserVisitor->visitDense_expr(this);
  else
    return visitor->visitChildren(this);
}

PDFLGrammarParser::Dense_exprContext* PDFLGrammarParser::dense_expr() {
  Dense_exprContext *_localctx = _tracker.createInstance<Dense_exprContext>(_ctx, getState());
  enterRule(_localctx, 4, PDFLGrammarParser::RuleDense_expr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(21);
    match(PDFLGrammarParser::IDENT);
    setState(22);
    match(PDFLGrammarParser::COMMA);
    setState(23);
    constraint_list();
    std::cout<<"dense_expr parsed successfully\n";
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Constraint_listContext ------------------------------------------------------------------

PDFLGrammarParser::Constraint_listContext::Constraint_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PDFLGrammarParser::ConstraintContext* PDFLGrammarParser::Constraint_listContext::constraint() {
  return getRuleContext<PDFLGrammarParser::ConstraintContext>(0);
}

tree::TerminalNode* PDFLGrammarParser::Constraint_listContext::SEPARATOR() {
  return getToken(PDFLGrammarParser::SEPARATOR, 0);
}

PDFLGrammarParser::Constraint_listContext* PDFLGrammarParser::Constraint_listContext::constraint_list() {
  return getRuleContext<PDFLGrammarParser::Constraint_listContext>(0);
}


size_t PDFLGrammarParser::Constraint_listContext::getRuleIndex() const {
  return PDFLGrammarParser::RuleConstraint_list;
}

void PDFLGrammarParser::Constraint_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PDFLGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstraint_list(this);
}

void PDFLGrammarParser::Constraint_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PDFLGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstraint_list(this);
}


antlrcpp::Any PDFLGrammarParser::Constraint_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PDFLGrammarVisitor*>(visitor))
    return parserVisitor->visitConstraint_list(this);
  else
    return visitor->visitChildren(this);
}

PDFLGrammarParser::Constraint_listContext* PDFLGrammarParser::constraint_list() {
  Constraint_listContext *_localctx = _tracker.createInstance<Constraint_listContext>(_ctx, getState());
  enterRule(_localctx, 6, PDFLGrammarParser::RuleConstraint_list);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(35);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(26);
      constraint();
      std::cout<<"constraint parsed successfully\n";
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(29);
      constraint();
      setState(30);
      match(PDFLGrammarParser::SEPARATOR);
      setState(31);
      constraint_list();
      std::cout<<"constraint_list form parsed successfully\n";
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);

      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstraintContext ------------------------------------------------------------------

PDFLGrammarParser::ConstraintContext::ConstraintContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PDFLGrammarParser::Alpha_numericContext *> PDFLGrammarParser::ConstraintContext::alpha_numeric() {
  return getRuleContexts<PDFLGrammarParser::Alpha_numericContext>();
}

PDFLGrammarParser::Alpha_numericContext* PDFLGrammarParser::ConstraintContext::alpha_numeric(size_t i) {
  return getRuleContext<PDFLGrammarParser::Alpha_numericContext>(i);
}

std::vector<PDFLGrammarParser::Relation_operatorContext *> PDFLGrammarParser::ConstraintContext::relation_operator() {
  return getRuleContexts<PDFLGrammarParser::Relation_operatorContext>();
}

PDFLGrammarParser::Relation_operatorContext* PDFLGrammarParser::ConstraintContext::relation_operator(size_t i) {
  return getRuleContext<PDFLGrammarParser::Relation_operatorContext>(i);
}


size_t PDFLGrammarParser::ConstraintContext::getRuleIndex() const {
  return PDFLGrammarParser::RuleConstraint;
}

void PDFLGrammarParser::ConstraintContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PDFLGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstraint(this);
}

void PDFLGrammarParser::ConstraintContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PDFLGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstraint(this);
}


antlrcpp::Any PDFLGrammarParser::ConstraintContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PDFLGrammarVisitor*>(visitor))
    return parserVisitor->visitConstraint(this);
  else
    return visitor->visitChildren(this);
}

PDFLGrammarParser::ConstraintContext* PDFLGrammarParser::constraint() {
  ConstraintContext *_localctx = _tracker.createInstance<ConstraintContext>(_ctx, getState());
  enterRule(_localctx, 8, PDFLGrammarParser::RuleConstraint);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(37);
    alpha_numeric();
    setState(38);
    relation_operator();
    setState(39);
    alpha_numeric();
    setState(40);
    relation_operator();
    setState(41);
    alpha_numeric();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Alpha_numericContext ------------------------------------------------------------------

PDFLGrammarParser::Alpha_numericContext::Alpha_numericContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PDFLGrammarParser::Alpha_numericContext::DIGIT() {
  return getToken(PDFLGrammarParser::DIGIT, 0);
}

tree::TerminalNode* PDFLGrammarParser::Alpha_numericContext::IDENT() {
  return getToken(PDFLGrammarParser::IDENT, 0);
}


size_t PDFLGrammarParser::Alpha_numericContext::getRuleIndex() const {
  return PDFLGrammarParser::RuleAlpha_numeric;
}

void PDFLGrammarParser::Alpha_numericContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PDFLGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAlpha_numeric(this);
}

void PDFLGrammarParser::Alpha_numericContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PDFLGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAlpha_numeric(this);
}


antlrcpp::Any PDFLGrammarParser::Alpha_numericContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PDFLGrammarVisitor*>(visitor))
    return parserVisitor->visitAlpha_numeric(this);
  else
    return visitor->visitChildren(this);
}

PDFLGrammarParser::Alpha_numericContext* PDFLGrammarParser::alpha_numeric() {
  Alpha_numericContext *_localctx = _tracker.createInstance<Alpha_numericContext>(_ctx, getState());
  enterRule(_localctx, 10, PDFLGrammarParser::RuleAlpha_numeric);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(47);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PDFLGrammarParser::DIGIT: {
        enterOuterAlt(_localctx, 1);
        setState(43);
        match(PDFLGrammarParser::DIGIT);
        std::cout<<"alphabet parsed successfully\n";
        break;
      }

      case PDFLGrammarParser::IDENT: {
        enterOuterAlt(_localctx, 2);
        setState(45);
        match(PDFLGrammarParser::IDENT);
        std::cout<<"number parsed successfully\n";
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Relation_operatorContext ------------------------------------------------------------------

PDFLGrammarParser::Relation_operatorContext::Relation_operatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PDFLGrammarParser::Relation_operatorContext::GT() {
  return getToken(PDFLGrammarParser::GT, 0);
}

tree::TerminalNode* PDFLGrammarParser::Relation_operatorContext::GTE() {
  return getToken(PDFLGrammarParser::GTE, 0);
}

tree::TerminalNode* PDFLGrammarParser::Relation_operatorContext::LT() {
  return getToken(PDFLGrammarParser::LT, 0);
}

tree::TerminalNode* PDFLGrammarParser::Relation_operatorContext::LTE() {
  return getToken(PDFLGrammarParser::LTE, 0);
}

tree::TerminalNode* PDFLGrammarParser::Relation_operatorContext::EQ() {
  return getToken(PDFLGrammarParser::EQ, 0);
}


size_t PDFLGrammarParser::Relation_operatorContext::getRuleIndex() const {
  return PDFLGrammarParser::RuleRelation_operator;
}

void PDFLGrammarParser::Relation_operatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PDFLGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRelation_operator(this);
}

void PDFLGrammarParser::Relation_operatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PDFLGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRelation_operator(this);
}


antlrcpp::Any PDFLGrammarParser::Relation_operatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PDFLGrammarVisitor*>(visitor))
    return parserVisitor->visitRelation_operator(this);
  else
    return visitor->visitChildren(this);
}

PDFLGrammarParser::Relation_operatorContext* PDFLGrammarParser::relation_operator() {
  Relation_operatorContext *_localctx = _tracker.createInstance<Relation_operatorContext>(_ctx, getState());
  enterRule(_localctx, 12, PDFLGrammarParser::RuleRelation_operator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(59);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PDFLGrammarParser::GT: {
        enterOuterAlt(_localctx, 1);
        setState(49);
        match(PDFLGrammarParser::GT);
        std::cout<<"relation operator parsed successfully\n";
        break;
      }

      case PDFLGrammarParser::GTE: {
        enterOuterAlt(_localctx, 2);
        setState(51);
        match(PDFLGrammarParser::GTE);
        std::cout<<"relation operator parsed successfully\n";
        break;
      }

      case PDFLGrammarParser::LT: {
        enterOuterAlt(_localctx, 3);
        setState(53);
        match(PDFLGrammarParser::LT);
        std::cout<<"relation operator parsed successfully\n";
        break;
      }

      case PDFLGrammarParser::LTE: {
        enterOuterAlt(_localctx, 4);
        setState(55);
        match(PDFLGrammarParser::LTE);
        std::cout<<"relation operator parsed successfully\n";
        break;
      }

      case PDFLGrammarParser::EQ: {
        enterOuterAlt(_localctx, 5);
        setState(57);
        match(PDFLGrammarParser::EQ);
        std::cout<<"relation operator parsed successfully\n";
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> PDFLGrammarParser::_decisionToDFA;
atn::PredictionContextCache PDFLGrammarParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN PDFLGrammarParser::_atn;
std::vector<uint16_t> PDFLGrammarParser::_serializedATN;

std::vector<std::string> PDFLGrammarParser::_ruleNames = {
  "pgm", "expr_list", "dense_expr", "constraint_list", "constraint", "alpha_numeric", 
  "relation_operator"
};

std::vector<std::string> PDFLGrammarParser::_literalNames = {
  "", "", "", "", "'+'", "'-'", "'*'", "'{'", "'}'", "'['", "']'", "'('", 
  "')'", "','", "':'", "';'", "'='", "'<'", "'>'", "'<='", "'>='", "'->'", 
  "'&&'", "'^'", "", "", "", "", "", "", "", "", "", "'\"'"
};

std::vector<std::string> PDFLGrammarParser::_symbolicNames = {
  "", "DIGIT", "IDENT", "INVALID_IDENT", "PLUS", "DASH", "STAR", "LBRACE", 
  "RBRACE", "LBRACKET", "RBRACKET", "LPAREN", "RPAREN", "COMMA", "COLON", 
  "SEMI", "EQ", "LT", "GT", "LTE", "GTE", "ARROW", "AND", "SEPARATOR", "UNION", 
  "INVERSE", "EXISTS", "OR", "WAND", "WS", "ID", "INT", "UMINUS", "QUOTES"
};

dfa::Vocabulary PDFLGrammarParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> PDFLGrammarParser::_tokenNames;

PDFLGrammarParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x23, 0x40, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x5, 0x5, 0x26, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x5, 0x7, 0x32, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x3e, 
    0xa, 0x8, 0x3, 0x8, 0x2, 0x2, 0x9, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 
    0x2, 0x2, 0x2, 0x3f, 0x2, 0x10, 0x3, 0x2, 0x2, 0x2, 0x4, 0x14, 0x3, 
    0x2, 0x2, 0x2, 0x6, 0x17, 0x3, 0x2, 0x2, 0x2, 0x8, 0x25, 0x3, 0x2, 0x2, 
    0x2, 0xa, 0x27, 0x3, 0x2, 0x2, 0x2, 0xc, 0x31, 0x3, 0x2, 0x2, 0x2, 0xe, 
    0x3d, 0x3, 0x2, 0x2, 0x2, 0x10, 0x11, 0x5, 0x4, 0x3, 0x2, 0x11, 0x12, 
    0x7, 0x2, 0x2, 0x3, 0x12, 0x13, 0x8, 0x2, 0x1, 0x2, 0x13, 0x3, 0x3, 
    0x2, 0x2, 0x2, 0x14, 0x15, 0x5, 0x6, 0x4, 0x2, 0x15, 0x16, 0x8, 0x3, 
    0x1, 0x2, 0x16, 0x5, 0x3, 0x2, 0x2, 0x2, 0x17, 0x18, 0x7, 0x4, 0x2, 
    0x2, 0x18, 0x19, 0x7, 0xf, 0x2, 0x2, 0x19, 0x1a, 0x5, 0x8, 0x5, 0x2, 
    0x1a, 0x1b, 0x8, 0x4, 0x1, 0x2, 0x1b, 0x7, 0x3, 0x2, 0x2, 0x2, 0x1c, 
    0x1d, 0x5, 0xa, 0x6, 0x2, 0x1d, 0x1e, 0x8, 0x5, 0x1, 0x2, 0x1e, 0x26, 
    0x3, 0x2, 0x2, 0x2, 0x1f, 0x20, 0x5, 0xa, 0x6, 0x2, 0x20, 0x21, 0x7, 
    0x19, 0x2, 0x2, 0x21, 0x22, 0x5, 0x8, 0x5, 0x2, 0x22, 0x23, 0x8, 0x5, 
    0x1, 0x2, 0x23, 0x26, 0x3, 0x2, 0x2, 0x2, 0x24, 0x26, 0x3, 0x2, 0x2, 
    0x2, 0x25, 0x1c, 0x3, 0x2, 0x2, 0x2, 0x25, 0x1f, 0x3, 0x2, 0x2, 0x2, 
    0x25, 0x24, 0x3, 0x2, 0x2, 0x2, 0x26, 0x9, 0x3, 0x2, 0x2, 0x2, 0x27, 
    0x28, 0x5, 0xc, 0x7, 0x2, 0x28, 0x29, 0x5, 0xe, 0x8, 0x2, 0x29, 0x2a, 
    0x5, 0xc, 0x7, 0x2, 0x2a, 0x2b, 0x5, 0xe, 0x8, 0x2, 0x2b, 0x2c, 0x5, 
    0xc, 0x7, 0x2, 0x2c, 0xb, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x2e, 0x7, 0x3, 
    0x2, 0x2, 0x2e, 0x32, 0x8, 0x7, 0x1, 0x2, 0x2f, 0x30, 0x7, 0x4, 0x2, 
    0x2, 0x30, 0x32, 0x8, 0x7, 0x1, 0x2, 0x31, 0x2d, 0x3, 0x2, 0x2, 0x2, 
    0x31, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x32, 0xd, 0x3, 0x2, 0x2, 0x2, 0x33, 
    0x34, 0x7, 0x14, 0x2, 0x2, 0x34, 0x3e, 0x8, 0x8, 0x1, 0x2, 0x35, 0x36, 
    0x7, 0x16, 0x2, 0x2, 0x36, 0x3e, 0x8, 0x8, 0x1, 0x2, 0x37, 0x38, 0x7, 
    0x13, 0x2, 0x2, 0x38, 0x3e, 0x8, 0x8, 0x1, 0x2, 0x39, 0x3a, 0x7, 0x15, 
    0x2, 0x2, 0x3a, 0x3e, 0x8, 0x8, 0x1, 0x2, 0x3b, 0x3c, 0x7, 0x12, 0x2, 
    0x2, 0x3c, 0x3e, 0x8, 0x8, 0x1, 0x2, 0x3d, 0x33, 0x3, 0x2, 0x2, 0x2, 
    0x3d, 0x35, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x37, 0x3, 0x2, 0x2, 0x2, 0x3d, 
    0x39, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x3e, 0xf, 
    0x3, 0x2, 0x2, 0x2, 0x5, 0x25, 0x31, 0x3d, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

PDFLGrammarParser::Initializer PDFLGrammarParser::_init;
