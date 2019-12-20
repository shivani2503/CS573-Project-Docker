
// Generated from Lexer.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  Lexer : public antlr4::Lexer {
public:
  enum {
    DIGIT = 1, IDENT = 2, INVALID_IDENT = 3, PLUS = 4, DASH = 5, STAR = 6, 
    LBRACE = 7, RBRACE = 8, LBRACKET = 9, RBRACKET = 10, LPAREN = 11, RPAREN = 12, 
    COMMA = 13, COLON = 14, SEMI = 15, EQ = 16, LT = 17, GT = 18, LTE = 19, 
    GTE = 20, ARROW = 21, AND = 22, UNION = 23, INVERSE = 24, EXISTS = 25, 
    OR = 26, WAND = 27, WS = 28, ID = 29, INT = 30, UMINUS = 31
  };

  Lexer(antlr4::CharStream *input);
  ~Lexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

