
// Generated from Parser.g4 by ANTLR 4.7.2


#include "ParserListener.h"
#include "ParserVisitor.h"

#include "Parser.h"


using namespace antlrcpp;
using namespace antlr4;

Parser::Parser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

Parser::~Parser() {
  delete _interpreter;
}

std::string Parser::getGrammarFileName() const {
  return "Parser.g4";
}

const std::vector<std::string>& Parser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& Parser::getVocabulary() const {
  return _vocabulary;
}


//----------------- PgmContext ------------------------------------------------------------------

Parser::PgmContext::PgmContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Parser::Expr_listContext* Parser::PgmContext::expr_list() {
  return getRuleContext<Parser::Expr_listContext>(0);
}

tree::TerminalNode* Parser::PgmContext::EOF() {
  return getToken(Parser::EOF, 0);
}


size_t Parser::PgmContext::getRuleIndex() const {
  return Parser::RulePgm;
}

void Parser::PgmContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPgm(this);
}

void Parser::PgmContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPgm(this);
}


antlrcpp::Any Parser::PgmContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ParserVisitor*>(visitor))
    return parserVisitor->visitPgm(this);
  else
    return visitor->visitChildren(this);
}

Parser::PgmContext* Parser::pgm() {
  PgmContext *_localctx = _tracker.createInstance<PgmContext>(_ctx, getState());
  enterRule(_localctx, 0, Parser::RulePgm);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(6);
    expr_list();
    setState(7);
    match(Parser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Expr_listContext ------------------------------------------------------------------

Parser::Expr_listContext::Expr_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Parser::ExprContext* Parser::Expr_listContext::expr() {
  return getRuleContext<Parser::ExprContext>(0);
}


size_t Parser::Expr_listContext::getRuleIndex() const {
  return Parser::RuleExpr_list;
}

void Parser::Expr_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr_list(this);
}

void Parser::Expr_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr_list(this);
}


antlrcpp::Any Parser::Expr_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ParserVisitor*>(visitor))
    return parserVisitor->visitExpr_list(this);
  else
    return visitor->visitChildren(this);
}

Parser::Expr_listContext* Parser::expr_list() {
  Expr_listContext *_localctx = _tracker.createInstance<Expr_listContext>(_ctx, getState());
  enterRule(_localctx, 2, Parser::RuleExpr_list);

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

Parser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Parser::ExprContext::IDENT() {
  return getToken(Parser::IDENT, 0);
}


size_t Parser::ExprContext::getRuleIndex() const {
  return Parser::RuleExpr;
}

void Parser::ExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr(this);
}

void Parser::ExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr(this);
}


antlrcpp::Any Parser::ExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ParserVisitor*>(visitor))
    return parserVisitor->visitExpr(this);
  else
    return visitor->visitChildren(this);
}

Parser::ExprContext* Parser::expr() {
  ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, getState());
  enterRule(_localctx, 4, Parser::RuleExpr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(11);
    match(Parser::IDENT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> Parser::_decisionToDFA;
atn::PredictionContextCache Parser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN Parser::_atn;
std::vector<uint16_t> Parser::_serializedATN;

std::vector<std::string> Parser::_ruleNames = {
  "pgm", "expr_list", "expr"
};

std::vector<std::string> Parser::_literalNames = {
  "", "", "", "", "'+'", "'-'", "'*'", "'{'", "'}'", "'['", "']'", "'('", 
  "')'", "','", "':'", "';'", "'='", "'<'", "'>'", "'<='", "'>='", "'->'", 
  "'&&'"
};

std::vector<std::string> Parser::_symbolicNames = {
  "", "DIGIT", "IDENT", "INVALID_IDENT", "PLUS", "DASH", "STAR", "LBRACE", 
  "RBRACE", "LBRACKET", "RBRACKET", "LPAREN", "RPAREN", "COMMA", "COLON", 
  "SEMI", "EQ", "LT", "GT", "LTE", "GTE", "ARROW", "AND", "UNION", "INVERSE", 
  "EXISTS", "OR", "WAND", "WS", "ID", "INT", "UMINUS"
};

dfa::Vocabulary Parser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> Parser::_tokenNames;

Parser::Initializer::Initializer() {
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

Parser::Initializer Parser::_init;
