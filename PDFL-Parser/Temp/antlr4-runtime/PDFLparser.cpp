
// Generated from PDFLparser.g4 by ANTLR 4.7.2


#include "PDFLparserListener.h"
#include "PDFLparserVisitor.h"

#include "PDFLparser.h"


using namespace antlrcpp;
using namespace antlr4;

PDFLparser::PDFLparser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

PDFLparser::~PDFLparser() {
  delete _interpreter;
}

std::string PDFLparser::getGrammarFileName() const {
  return "PDFLparser.g4";
}

const std::vector<std::string>& PDFLparser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& PDFLparser::getVocabulary() const {
  return _vocabulary;
}


//----------------- PgmContext ------------------------------------------------------------------

PDFLparser::PgmContext::PgmContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PDFLparser::Expr_listContext* PDFLparser::PgmContext::expr_list() {
  return getRuleContext<PDFLparser::Expr_listContext>(0);
}

tree::TerminalNode* PDFLparser::PgmContext::EOF() {
  return getToken(PDFLparser::EOF, 0);
}


size_t PDFLparser::PgmContext::getRuleIndex() const {
  return PDFLparser::RulePgm;
}

void PDFLparser::PgmContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PDFLparserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPgm(this);
}

void PDFLparser::PgmContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PDFLparserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPgm(this);
}


antlrcpp::Any PDFLparser::PgmContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PDFLparserVisitor*>(visitor))
    return parserVisitor->visitPgm(this);
  else
    return visitor->visitChildren(this);
}

PDFLparser::PgmContext* PDFLparser::pgm() {
  PgmContext *_localctx = _tracker.createInstance<PgmContext>(_ctx, getState());
  enterRule(_localctx, 0, PDFLparser::RulePgm);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(6);
    expr_list();
    setState(7);
    match(PDFLparser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Expr_listContext ------------------------------------------------------------------

PDFLparser::Expr_listContext::Expr_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PDFLparser::ExprContext* PDFLparser::Expr_listContext::expr() {
  return getRuleContext<PDFLparser::ExprContext>(0);
}


size_t PDFLparser::Expr_listContext::getRuleIndex() const {
  return PDFLparser::RuleExpr_list;
}

void PDFLparser::Expr_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PDFLparserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr_list(this);
}

void PDFLparser::Expr_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PDFLparserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr_list(this);
}


antlrcpp::Any PDFLparser::Expr_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PDFLparserVisitor*>(visitor))
    return parserVisitor->visitExpr_list(this);
  else
    return visitor->visitChildren(this);
}

PDFLparser::Expr_listContext* PDFLparser::expr_list() {
  Expr_listContext *_localctx = _tracker.createInstance<Expr_listContext>(_ctx, getState());
  enterRule(_localctx, 2, PDFLparser::RuleExpr_list);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(9);
    expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

PDFLparser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PDFLparser::ExprContext::IDENT() {
  return getToken(PDFLparser::IDENT, 0);
}


size_t PDFLparser::ExprContext::getRuleIndex() const {
  return PDFLparser::RuleExpr;
}

void PDFLparser::ExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PDFLparserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr(this);
}

void PDFLparser::ExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PDFLparserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr(this);
}


antlrcpp::Any PDFLparser::ExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PDFLparserVisitor*>(visitor))
    return parserVisitor->visitExpr(this);
  else
    return visitor->visitChildren(this);
}

PDFLparser::ExprContext* PDFLparser::expr() {
  ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, getState());
  enterRule(_localctx, 4, PDFLparser::RuleExpr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(11);
    match(PDFLparser::IDENT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> PDFLparser::_decisionToDFA;
atn::PredictionContextCache PDFLparser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN PDFLparser::_atn;
std::vector<uint16_t> PDFLparser::_serializedATN;

std::vector<std::string> PDFLparser::_ruleNames = {
  "pgm", "expr_list", "expr"
};

std::vector<std::string> PDFLparser::_literalNames = {
  "", "", "", "", "'+'", "'-'", "'*'", "'{'", "'}'", "'['", "']'", "'('", 
  "')'", "','", "':'", "';'", "'='", "'<'", "'>'", "'<='", "'>='", "'->'", 
  "'&&'"
};

std::vector<std::string> PDFLparser::_symbolicNames = {
  "", "DIGIT", "IDENT", "INVALID_IDENT", "PLUS", "DASH", "STAR", "LBRACE", 
  "RBRACE", "LBRACKET", "RBRACKET", "LPAREN", "RPAREN", "COMMA", "COLON", 
  "SEMI", "EQ", "LT", "GT", "LTE", "GTE", "ARROW", "AND", "UNION", "INVERSE", 
  "EXISTS", "OR", "WAND", "WS", "ID", "INT", "UMINUS"
};

dfa::Vocabulary PDFLparser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> PDFLparser::_tokenNames;

PDFLparser::Initializer::Initializer() {
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
    0x3, 0x21, 0x10, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x2, 0x2, 0x5, 0x2, 0x4, 0x6, 0x2, 0x2, 0x2, 0xc, 0x2, 
    0x8, 0x3, 0x2, 0x2, 0x2, 0x4, 0xb, 0x3, 0x2, 0x2, 0x2, 0x6, 0xd, 0x3, 
    0x2, 0x2, 0x2, 0x8, 0x9, 0x5, 0x4, 0x3, 0x2, 0x9, 0xa, 0x7, 0x2, 0x2, 
    0x3, 0xa, 0x3, 0x3, 0x2, 0x2, 0x2, 0xb, 0xc, 0x5, 0x6, 0x4, 0x2, 0xc, 
    0x5, 0x3, 0x2, 0x2, 0x2, 0xd, 0xe, 0x7, 0x4, 0x2, 0x2, 0xe, 0x7, 0x3, 
    0x2, 0x2, 0x2, 0x2, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

PDFLparser::Initializer PDFLparser::_init;
