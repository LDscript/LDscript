
// Generated from src/antlr/LdScript.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"


namespace antlrcpplds {


class  LdScriptLexer : public antlr4::Lexer {
public:
  enum {
    IF = 1, THEN = 2, AND = 3, OR = 4, TRUE = 5, FALSE = 6, MULT = 7, DIV = 8, 
    PLUS = 9, MINUS = 10, GT = 11, GE = 12, LT = 13, LE = 14, EQ = 15, LPAREN = 16, 
    RPAREN = 17, DECIMAL = 18, IDENTIFIER = 19, COMMENT = 20, WS = 21
  };

  explicit LdScriptLexer(antlr4::CharStream *input);

  ~LdScriptLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

}  // namespace antlrcpplds
