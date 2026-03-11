
// Generated from ifcc.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  ifccLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    RETURN = 15, CONST = 16, VAR = 17, COMMENT = 18, DIRECTIVE = 19, WS = 20
  };

  explicit ifccLexer(antlr4::CharStream *input);

  ~ifccLexer() ;


  std::string getGrammarFileName() const ;

  const std::vector<std::string>& getRuleNames() const ;

  const std::vector<std::string>& getChannelNames() const ;

  const std::vector<std::string>& getModeNames() const ;

  const antlr4::dfa::Vocabulary& getVocabulary() const ;

  antlr4::atn::SerializedATNView getSerializedATN() const ;

  const antlr4::atn::ATN& getATN() const ;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

