
// Generated from src/antlr/LdScript.g4 by ANTLR 4.11.1


#include "LdScriptLexer.h"


using namespace antlr4;

using namespace antlrcpplds;


using namespace antlr4;

namespace {

struct LdScriptLexerStaticData final {
  LdScriptLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  LdScriptLexerStaticData(const LdScriptLexerStaticData&) = delete;
  LdScriptLexerStaticData(LdScriptLexerStaticData&&) = delete;
  LdScriptLexerStaticData& operator=(const LdScriptLexerStaticData&) = delete;
  LdScriptLexerStaticData& operator=(LdScriptLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag ldscriptlexerLexerOnceFlag;
LdScriptLexerStaticData *ldscriptlexerLexerStaticData = nullptr;

void ldscriptlexerLexerInitialize() {
  assert(ldscriptlexerLexerStaticData == nullptr);
  auto staticData = std::make_unique<LdScriptLexerStaticData>(
    std::vector<std::string>{
      "IF", "THEN", "AND", "OR", "TRUE", "FALSE", "MULT", "DIV", "PLUS", 
      "MINUS", "GT", "GE", "LT", "LE", "EQ", "LPAREN", "RPAREN", "DECIMAL", 
      "IDENTIFIER", "COMMENT", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'if'", "'then'", "'and'", "'or'", "'true'", "'false'", "'*'", 
      "'/'", "'+'", "'-'", "'>'", "'>='", "'<'", "'<='", "'='", "'('", "')'"
    },
    std::vector<std::string>{
      "", "IF", "THEN", "AND", "OR", "TRUE", "FALSE", "MULT", "DIV", "PLUS", 
      "MINUS", "GT", "GE", "LT", "LE", "EQ", "LPAREN", "RPAREN", "DECIMAL", 
      "IDENTIFIER", "COMMENT", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,21,136,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,1,0,
  	1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,2,1,2,1,2,1,2,1,3,1,3,1,3,1,4,1,4,1,4,1,
  	4,1,4,1,5,1,5,1,5,1,5,1,5,1,5,1,6,1,6,1,7,1,7,1,8,1,8,1,9,1,9,1,10,1,
  	10,1,11,1,11,1,11,1,12,1,12,1,13,1,13,1,13,1,14,1,14,1,15,1,15,1,16,1,
  	16,1,17,3,17,95,8,17,1,17,4,17,98,8,17,11,17,12,17,99,1,17,1,17,4,17,
  	104,8,17,11,17,12,17,105,3,17,108,8,17,1,18,1,18,5,18,112,8,18,10,18,
  	12,18,115,9,18,1,19,1,19,1,19,1,19,4,19,121,8,19,11,19,12,19,122,1,19,
  	3,19,126,8,19,1,19,1,19,1,20,4,20,131,8,20,11,20,12,20,132,1,20,1,20,
  	1,122,0,21,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,
  	25,13,27,14,29,15,31,16,33,17,35,18,37,19,39,20,41,21,1,0,5,1,0,48,57,
  	3,0,65,90,95,95,97,122,4,0,48,57,65,90,95,95,97,122,1,1,10,10,3,0,9,10,
  	12,13,32,32,142,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,
  	0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,
  	0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,
  	31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,
  	0,0,0,1,43,1,0,0,0,3,46,1,0,0,0,5,51,1,0,0,0,7,55,1,0,0,0,9,58,1,0,0,
  	0,11,63,1,0,0,0,13,69,1,0,0,0,15,71,1,0,0,0,17,73,1,0,0,0,19,75,1,0,0,
  	0,21,77,1,0,0,0,23,79,1,0,0,0,25,82,1,0,0,0,27,84,1,0,0,0,29,87,1,0,0,
  	0,31,89,1,0,0,0,33,91,1,0,0,0,35,94,1,0,0,0,37,109,1,0,0,0,39,116,1,0,
  	0,0,41,130,1,0,0,0,43,44,5,105,0,0,44,45,5,102,0,0,45,2,1,0,0,0,46,47,
  	5,116,0,0,47,48,5,104,0,0,48,49,5,101,0,0,49,50,5,110,0,0,50,4,1,0,0,
  	0,51,52,5,97,0,0,52,53,5,110,0,0,53,54,5,100,0,0,54,6,1,0,0,0,55,56,5,
  	111,0,0,56,57,5,114,0,0,57,8,1,0,0,0,58,59,5,116,0,0,59,60,5,114,0,0,
  	60,61,5,117,0,0,61,62,5,101,0,0,62,10,1,0,0,0,63,64,5,102,0,0,64,65,5,
  	97,0,0,65,66,5,108,0,0,66,67,5,115,0,0,67,68,5,101,0,0,68,12,1,0,0,0,
  	69,70,5,42,0,0,70,14,1,0,0,0,71,72,5,47,0,0,72,16,1,0,0,0,73,74,5,43,
  	0,0,74,18,1,0,0,0,75,76,5,45,0,0,76,20,1,0,0,0,77,78,5,62,0,0,78,22,1,
  	0,0,0,79,80,5,62,0,0,80,81,5,61,0,0,81,24,1,0,0,0,82,83,5,60,0,0,83,26,
  	1,0,0,0,84,85,5,60,0,0,85,86,5,61,0,0,86,28,1,0,0,0,87,88,5,61,0,0,88,
  	30,1,0,0,0,89,90,5,40,0,0,90,32,1,0,0,0,91,92,5,41,0,0,92,34,1,0,0,0,
  	93,95,5,45,0,0,94,93,1,0,0,0,94,95,1,0,0,0,95,97,1,0,0,0,96,98,7,0,0,
  	0,97,96,1,0,0,0,98,99,1,0,0,0,99,97,1,0,0,0,99,100,1,0,0,0,100,107,1,
  	0,0,0,101,103,5,46,0,0,102,104,7,0,0,0,103,102,1,0,0,0,104,105,1,0,0,
  	0,105,103,1,0,0,0,105,106,1,0,0,0,106,108,1,0,0,0,107,101,1,0,0,0,107,
  	108,1,0,0,0,108,36,1,0,0,0,109,113,7,1,0,0,110,112,7,2,0,0,111,110,1,
  	0,0,0,112,115,1,0,0,0,113,111,1,0,0,0,113,114,1,0,0,0,114,38,1,0,0,0,
  	115,113,1,0,0,0,116,117,5,47,0,0,117,118,5,47,0,0,118,120,1,0,0,0,119,
  	121,9,0,0,0,120,119,1,0,0,0,121,122,1,0,0,0,122,123,1,0,0,0,122,120,1,
  	0,0,0,123,125,1,0,0,0,124,126,7,3,0,0,125,124,1,0,0,0,126,127,1,0,0,0,
  	127,128,6,19,0,0,128,40,1,0,0,0,129,131,7,4,0,0,130,129,1,0,0,0,131,132,
  	1,0,0,0,132,130,1,0,0,0,132,133,1,0,0,0,133,134,1,0,0,0,134,135,6,20,
  	0,0,135,42,1,0,0,0,9,0,94,99,105,107,113,122,125,132,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  ldscriptlexerLexerStaticData = staticData.release();
}

}

LdScriptLexer::LdScriptLexer(CharStream *input) : Lexer(input) {
  LdScriptLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *ldscriptlexerLexerStaticData->atn, ldscriptlexerLexerStaticData->decisionToDFA, ldscriptlexerLexerStaticData->sharedContextCache);
}

LdScriptLexer::~LdScriptLexer() {
  delete _interpreter;
}

std::string LdScriptLexer::getGrammarFileName() const {
  return "LdScript.g4";
}

const std::vector<std::string>& LdScriptLexer::getRuleNames() const {
  return ldscriptlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& LdScriptLexer::getChannelNames() const {
  return ldscriptlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& LdScriptLexer::getModeNames() const {
  return ldscriptlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& LdScriptLexer::getVocabulary() const {
  return ldscriptlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView LdScriptLexer::getSerializedATN() const {
  return ldscriptlexerLexerStaticData->serializedATN;
}

const atn::ATN& LdScriptLexer::getATN() const {
  return *ldscriptlexerLexerStaticData->atn;
}




void LdScriptLexer::initialize() {
  ::antlr4::internal::call_once(ldscriptlexerLexerOnceFlag, ldscriptlexerLexerInitialize);
}
