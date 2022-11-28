
// Generated from src/antlr/LdScript.g4 by ANTLR 4.11.1


#include "LdScriptListener.h"
#include "LdScriptVisitor.h"

#include "LdScriptParser.h"


using namespace antlrcpp;
using namespace antlrcpplds;

using namespace antlr4;

namespace {

struct LdScriptParserStaticData final {
  LdScriptParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  LdScriptParserStaticData(const LdScriptParserStaticData&) = delete;
  LdScriptParserStaticData(LdScriptParserStaticData&&) = delete;
  LdScriptParserStaticData& operator=(const LdScriptParserStaticData&) = delete;
  LdScriptParserStaticData& operator=(LdScriptParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag ldscriptParserOnceFlag;
LdScriptParserStaticData *ldscriptParserStaticData = nullptr;

void ldscriptParserInitialize() {
  assert(ldscriptParserStaticData == nullptr);
  auto staticData = std::make_unique<LdScriptParserStaticData>(
    std::vector<std::string>{
      "rule_set", "single_rule", "condition", "conclusion", "logical_expr", 
      "comparison_expr", "comparison_operand", "comp_operator", "arithmetic_expr", 
      "logical_entity", "numeric_entity"
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
  	4,1,21,109,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,1,0,5,0,24,8,0,10,0,12,0,27,9,0,1,0,1,
  	0,1,1,1,1,1,1,1,1,1,1,1,2,1,2,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,4,1,4,3,4,
  	47,8,4,1,4,1,4,1,4,1,4,1,4,1,4,5,4,55,8,4,10,4,12,4,58,9,4,1,5,1,5,1,
  	5,1,5,1,5,1,5,1,5,1,5,3,5,68,8,5,1,6,1,6,1,7,1,7,1,8,1,8,1,8,1,8,1,8,
  	1,8,1,8,1,8,3,8,82,8,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,
  	8,5,8,96,8,8,10,8,12,8,99,9,8,1,9,1,9,3,9,103,8,9,1,10,1,10,3,10,107,
  	8,10,1,10,0,2,8,16,11,0,2,4,6,8,10,12,14,16,18,20,0,2,1,0,11,15,1,0,5,
  	6,111,0,25,1,0,0,0,2,30,1,0,0,0,4,35,1,0,0,0,6,37,1,0,0,0,8,46,1,0,0,
  	0,10,67,1,0,0,0,12,69,1,0,0,0,14,71,1,0,0,0,16,81,1,0,0,0,18,102,1,0,
  	0,0,20,106,1,0,0,0,22,24,3,2,1,0,23,22,1,0,0,0,24,27,1,0,0,0,25,23,1,
  	0,0,0,25,26,1,0,0,0,26,28,1,0,0,0,27,25,1,0,0,0,28,29,5,0,0,1,29,1,1,
  	0,0,0,30,31,5,1,0,0,31,32,3,4,2,0,32,33,5,2,0,0,33,34,3,6,3,0,34,3,1,
  	0,0,0,35,36,3,8,4,0,36,5,1,0,0,0,37,38,5,19,0,0,38,7,1,0,0,0,39,40,6,
  	4,-1,0,40,47,3,10,5,0,41,42,5,16,0,0,42,43,3,8,4,0,43,44,5,17,0,0,44,
  	47,1,0,0,0,45,47,3,18,9,0,46,39,1,0,0,0,46,41,1,0,0,0,46,45,1,0,0,0,47,
  	56,1,0,0,0,48,49,10,5,0,0,49,50,5,3,0,0,50,55,3,8,4,6,51,52,10,4,0,0,
  	52,53,5,4,0,0,53,55,3,8,4,5,54,48,1,0,0,0,54,51,1,0,0,0,55,58,1,0,0,0,
  	56,54,1,0,0,0,56,57,1,0,0,0,57,9,1,0,0,0,58,56,1,0,0,0,59,60,3,12,6,0,
  	60,61,3,14,7,0,61,62,3,12,6,0,62,68,1,0,0,0,63,64,5,16,0,0,64,65,3,10,
  	5,0,65,66,5,17,0,0,66,68,1,0,0,0,67,59,1,0,0,0,67,63,1,0,0,0,68,11,1,
  	0,0,0,69,70,3,16,8,0,70,13,1,0,0,0,71,72,7,0,0,0,72,15,1,0,0,0,73,74,
  	6,8,-1,0,74,75,5,10,0,0,75,82,3,16,8,3,76,77,5,16,0,0,77,78,3,16,8,0,
  	78,79,5,17,0,0,79,82,1,0,0,0,80,82,3,20,10,0,81,73,1,0,0,0,81,76,1,0,
  	0,0,81,80,1,0,0,0,82,97,1,0,0,0,83,84,10,7,0,0,84,85,5,7,0,0,85,96,3,
  	16,8,8,86,87,10,6,0,0,87,88,5,8,0,0,88,96,3,16,8,7,89,90,10,5,0,0,90,
  	91,5,9,0,0,91,96,3,16,8,6,92,93,10,4,0,0,93,94,5,10,0,0,94,96,3,16,8,
  	5,95,83,1,0,0,0,95,86,1,0,0,0,95,89,1,0,0,0,95,92,1,0,0,0,96,99,1,0,0,
  	0,97,95,1,0,0,0,97,98,1,0,0,0,98,17,1,0,0,0,99,97,1,0,0,0,100,103,7,1,
  	0,0,101,103,5,19,0,0,102,100,1,0,0,0,102,101,1,0,0,0,103,19,1,0,0,0,104,
  	107,5,18,0,0,105,107,5,19,0,0,106,104,1,0,0,0,106,105,1,0,0,0,107,21,
  	1,0,0,0,10,25,46,54,56,67,81,95,97,102,106
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  ldscriptParserStaticData = staticData.release();
}

}

LdScriptParser::LdScriptParser(TokenStream *input) : LdScriptParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

LdScriptParser::LdScriptParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  LdScriptParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *ldscriptParserStaticData->atn, ldscriptParserStaticData->decisionToDFA, ldscriptParserStaticData->sharedContextCache, options);
}

LdScriptParser::~LdScriptParser() {
  delete _interpreter;
}

const atn::ATN& LdScriptParser::getATN() const {
  return *ldscriptParserStaticData->atn;
}

std::string LdScriptParser::getGrammarFileName() const {
  return "LdScript.g4";
}

const std::vector<std::string>& LdScriptParser::getRuleNames() const {
  return ldscriptParserStaticData->ruleNames;
}

const dfa::Vocabulary& LdScriptParser::getVocabulary() const {
  return ldscriptParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView LdScriptParser::getSerializedATN() const {
  return ldscriptParserStaticData->serializedATN;
}


//----------------- Rule_setContext ------------------------------------------------------------------

LdScriptParser::Rule_setContext::Rule_setContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LdScriptParser::Rule_setContext::EOF() {
  return getToken(LdScriptParser::EOF, 0);
}

std::vector<LdScriptParser::Single_ruleContext *> LdScriptParser::Rule_setContext::single_rule() {
  return getRuleContexts<LdScriptParser::Single_ruleContext>();
}

LdScriptParser::Single_ruleContext* LdScriptParser::Rule_setContext::single_rule(size_t i) {
  return getRuleContext<LdScriptParser::Single_ruleContext>(i);
}


size_t LdScriptParser::Rule_setContext::getRuleIndex() const {
  return LdScriptParser::RuleRule_set;
}

void LdScriptParser::Rule_setContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LdScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRule_set(this);
}

void LdScriptParser::Rule_setContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LdScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRule_set(this);
}


std::any LdScriptParser::Rule_setContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LdScriptVisitor*>(visitor))
    return parserVisitor->visitRule_set(this);
  else
    return visitor->visitChildren(this);
}

LdScriptParser::Rule_setContext* LdScriptParser::rule_set() {
  Rule_setContext *_localctx = _tracker.createInstance<Rule_setContext>(_ctx, getState());
  enterRule(_localctx, 0, LdScriptParser::RuleRule_set);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(25);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LdScriptParser::IF) {
      setState(22);
      single_rule();
      setState(27);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(28);
    match(LdScriptParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Single_ruleContext ------------------------------------------------------------------

LdScriptParser::Single_ruleContext::Single_ruleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LdScriptParser::Single_ruleContext::IF() {
  return getToken(LdScriptParser::IF, 0);
}

LdScriptParser::ConditionContext* LdScriptParser::Single_ruleContext::condition() {
  return getRuleContext<LdScriptParser::ConditionContext>(0);
}

tree::TerminalNode* LdScriptParser::Single_ruleContext::THEN() {
  return getToken(LdScriptParser::THEN, 0);
}

LdScriptParser::ConclusionContext* LdScriptParser::Single_ruleContext::conclusion() {
  return getRuleContext<LdScriptParser::ConclusionContext>(0);
}


size_t LdScriptParser::Single_ruleContext::getRuleIndex() const {
  return LdScriptParser::RuleSingle_rule;
}

void LdScriptParser::Single_ruleContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LdScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSingle_rule(this);
}

void LdScriptParser::Single_ruleContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LdScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSingle_rule(this);
}


std::any LdScriptParser::Single_ruleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LdScriptVisitor*>(visitor))
    return parserVisitor->visitSingle_rule(this);
  else
    return visitor->visitChildren(this);
}

LdScriptParser::Single_ruleContext* LdScriptParser::single_rule() {
  Single_ruleContext *_localctx = _tracker.createInstance<Single_ruleContext>(_ctx, getState());
  enterRule(_localctx, 2, LdScriptParser::RuleSingle_rule);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(30);
    match(LdScriptParser::IF);
    setState(31);
    condition();
    setState(32);
    match(LdScriptParser::THEN);
    setState(33);
    conclusion();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionContext ------------------------------------------------------------------

LdScriptParser::ConditionContext::ConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LdScriptParser::Logical_exprContext* LdScriptParser::ConditionContext::logical_expr() {
  return getRuleContext<LdScriptParser::Logical_exprContext>(0);
}


size_t LdScriptParser::ConditionContext::getRuleIndex() const {
  return LdScriptParser::RuleCondition;
}

void LdScriptParser::ConditionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LdScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCondition(this);
}

void LdScriptParser::ConditionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LdScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCondition(this);
}


std::any LdScriptParser::ConditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LdScriptVisitor*>(visitor))
    return parserVisitor->visitCondition(this);
  else
    return visitor->visitChildren(this);
}

LdScriptParser::ConditionContext* LdScriptParser::condition() {
  ConditionContext *_localctx = _tracker.createInstance<ConditionContext>(_ctx, getState());
  enterRule(_localctx, 4, LdScriptParser::RuleCondition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(35);
    logical_expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConclusionContext ------------------------------------------------------------------

LdScriptParser::ConclusionContext::ConclusionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LdScriptParser::ConclusionContext::IDENTIFIER() {
  return getToken(LdScriptParser::IDENTIFIER, 0);
}


size_t LdScriptParser::ConclusionContext::getRuleIndex() const {
  return LdScriptParser::RuleConclusion;
}

void LdScriptParser::ConclusionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LdScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConclusion(this);
}

void LdScriptParser::ConclusionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LdScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConclusion(this);
}


std::any LdScriptParser::ConclusionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LdScriptVisitor*>(visitor))
    return parserVisitor->visitConclusion(this);
  else
    return visitor->visitChildren(this);
}

LdScriptParser::ConclusionContext* LdScriptParser::conclusion() {
  ConclusionContext *_localctx = _tracker.createInstance<ConclusionContext>(_ctx, getState());
  enterRule(_localctx, 6, LdScriptParser::RuleConclusion);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(37);
    match(LdScriptParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Logical_exprContext ------------------------------------------------------------------

LdScriptParser::Logical_exprContext::Logical_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t LdScriptParser::Logical_exprContext::getRuleIndex() const {
  return LdScriptParser::RuleLogical_expr;
}

void LdScriptParser::Logical_exprContext::copyFrom(Logical_exprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- LogicalEntityContext ------------------------------------------------------------------

LdScriptParser::Logical_entityContext* LdScriptParser::LogicalEntityContext::logical_entity() {
  return getRuleContext<LdScriptParser::Logical_entityContext>(0);
}

LdScriptParser::LogicalEntityContext::LogicalEntityContext(Logical_exprContext *ctx) { copyFrom(ctx); }

void LdScriptParser::LogicalEntityContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LdScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicalEntity(this);
}
void LdScriptParser::LogicalEntityContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LdScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicalEntity(this);
}

std::any LdScriptParser::LogicalEntityContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LdScriptVisitor*>(visitor))
    return parserVisitor->visitLogicalEntity(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ComparisonExpressionContext ------------------------------------------------------------------

LdScriptParser::Comparison_exprContext* LdScriptParser::ComparisonExpressionContext::comparison_expr() {
  return getRuleContext<LdScriptParser::Comparison_exprContext>(0);
}

LdScriptParser::ComparisonExpressionContext::ComparisonExpressionContext(Logical_exprContext *ctx) { copyFrom(ctx); }

void LdScriptParser::ComparisonExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LdScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComparisonExpression(this);
}
void LdScriptParser::ComparisonExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LdScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComparisonExpression(this);
}

std::any LdScriptParser::ComparisonExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LdScriptVisitor*>(visitor))
    return parserVisitor->visitComparisonExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LogicalExpressionInParenContext ------------------------------------------------------------------

tree::TerminalNode* LdScriptParser::LogicalExpressionInParenContext::LPAREN() {
  return getToken(LdScriptParser::LPAREN, 0);
}

LdScriptParser::Logical_exprContext* LdScriptParser::LogicalExpressionInParenContext::logical_expr() {
  return getRuleContext<LdScriptParser::Logical_exprContext>(0);
}

tree::TerminalNode* LdScriptParser::LogicalExpressionInParenContext::RPAREN() {
  return getToken(LdScriptParser::RPAREN, 0);
}

LdScriptParser::LogicalExpressionInParenContext::LogicalExpressionInParenContext(Logical_exprContext *ctx) { copyFrom(ctx); }

void LdScriptParser::LogicalExpressionInParenContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LdScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicalExpressionInParen(this);
}
void LdScriptParser::LogicalExpressionInParenContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LdScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicalExpressionInParen(this);
}

std::any LdScriptParser::LogicalExpressionInParenContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LdScriptVisitor*>(visitor))
    return parserVisitor->visitLogicalExpressionInParen(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LogicalExpressionAndContext ------------------------------------------------------------------

std::vector<LdScriptParser::Logical_exprContext *> LdScriptParser::LogicalExpressionAndContext::logical_expr() {
  return getRuleContexts<LdScriptParser::Logical_exprContext>();
}

LdScriptParser::Logical_exprContext* LdScriptParser::LogicalExpressionAndContext::logical_expr(size_t i) {
  return getRuleContext<LdScriptParser::Logical_exprContext>(i);
}

tree::TerminalNode* LdScriptParser::LogicalExpressionAndContext::AND() {
  return getToken(LdScriptParser::AND, 0);
}

LdScriptParser::LogicalExpressionAndContext::LogicalExpressionAndContext(Logical_exprContext *ctx) { copyFrom(ctx); }

void LdScriptParser::LogicalExpressionAndContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LdScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicalExpressionAnd(this);
}
void LdScriptParser::LogicalExpressionAndContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LdScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicalExpressionAnd(this);
}

std::any LdScriptParser::LogicalExpressionAndContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LdScriptVisitor*>(visitor))
    return parserVisitor->visitLogicalExpressionAnd(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LogicalExpressionOrContext ------------------------------------------------------------------

std::vector<LdScriptParser::Logical_exprContext *> LdScriptParser::LogicalExpressionOrContext::logical_expr() {
  return getRuleContexts<LdScriptParser::Logical_exprContext>();
}

LdScriptParser::Logical_exprContext* LdScriptParser::LogicalExpressionOrContext::logical_expr(size_t i) {
  return getRuleContext<LdScriptParser::Logical_exprContext>(i);
}

tree::TerminalNode* LdScriptParser::LogicalExpressionOrContext::OR() {
  return getToken(LdScriptParser::OR, 0);
}

LdScriptParser::LogicalExpressionOrContext::LogicalExpressionOrContext(Logical_exprContext *ctx) { copyFrom(ctx); }

void LdScriptParser::LogicalExpressionOrContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LdScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicalExpressionOr(this);
}
void LdScriptParser::LogicalExpressionOrContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LdScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicalExpressionOr(this);
}

std::any LdScriptParser::LogicalExpressionOrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LdScriptVisitor*>(visitor))
    return parserVisitor->visitLogicalExpressionOr(this);
  else
    return visitor->visitChildren(this);
}

LdScriptParser::Logical_exprContext* LdScriptParser::logical_expr() {
   return logical_expr(0);
}

LdScriptParser::Logical_exprContext* LdScriptParser::logical_expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  LdScriptParser::Logical_exprContext *_localctx = _tracker.createInstance<Logical_exprContext>(_ctx, parentState);
  LdScriptParser::Logical_exprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 8;
  enterRecursionRule(_localctx, 8, LdScriptParser::RuleLogical_expr, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(46);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ComparisonExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(40);
      comparison_expr();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<LogicalExpressionInParenContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(41);
      match(LdScriptParser::LPAREN);
      setState(42);
      logical_expr(0);
      setState(43);
      match(LdScriptParser::RPAREN);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<LogicalEntityContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(45);
      logical_entity();
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(56);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(54);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<LogicalExpressionAndContext>(_tracker.createInstance<Logical_exprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleLogical_expr);
          setState(48);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(49);
          match(LdScriptParser::AND);
          setState(50);
          logical_expr(6);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<LogicalExpressionOrContext>(_tracker.createInstance<Logical_exprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleLogical_expr);
          setState(51);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(52);
          match(LdScriptParser::OR);
          setState(53);
          logical_expr(5);
          break;
        }

        default:
          break;
        } 
      }
      setState(58);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Comparison_exprContext ------------------------------------------------------------------

LdScriptParser::Comparison_exprContext::Comparison_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t LdScriptParser::Comparison_exprContext::getRuleIndex() const {
  return LdScriptParser::RuleComparison_expr;
}

void LdScriptParser::Comparison_exprContext::copyFrom(Comparison_exprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ComparisonExpressionParensContext ------------------------------------------------------------------

tree::TerminalNode* LdScriptParser::ComparisonExpressionParensContext::LPAREN() {
  return getToken(LdScriptParser::LPAREN, 0);
}

LdScriptParser::Comparison_exprContext* LdScriptParser::ComparisonExpressionParensContext::comparison_expr() {
  return getRuleContext<LdScriptParser::Comparison_exprContext>(0);
}

tree::TerminalNode* LdScriptParser::ComparisonExpressionParensContext::RPAREN() {
  return getToken(LdScriptParser::RPAREN, 0);
}

LdScriptParser::ComparisonExpressionParensContext::ComparisonExpressionParensContext(Comparison_exprContext *ctx) { copyFrom(ctx); }

void LdScriptParser::ComparisonExpressionParensContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LdScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComparisonExpressionParens(this);
}
void LdScriptParser::ComparisonExpressionParensContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LdScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComparisonExpressionParens(this);
}

std::any LdScriptParser::ComparisonExpressionParensContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LdScriptVisitor*>(visitor))
    return parserVisitor->visitComparisonExpressionParens(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ComparisonExpressionWithOperatorContext ------------------------------------------------------------------

std::vector<LdScriptParser::Comparison_operandContext *> LdScriptParser::ComparisonExpressionWithOperatorContext::comparison_operand() {
  return getRuleContexts<LdScriptParser::Comparison_operandContext>();
}

LdScriptParser::Comparison_operandContext* LdScriptParser::ComparisonExpressionWithOperatorContext::comparison_operand(size_t i) {
  return getRuleContext<LdScriptParser::Comparison_operandContext>(i);
}

LdScriptParser::Comp_operatorContext* LdScriptParser::ComparisonExpressionWithOperatorContext::comp_operator() {
  return getRuleContext<LdScriptParser::Comp_operatorContext>(0);
}

LdScriptParser::ComparisonExpressionWithOperatorContext::ComparisonExpressionWithOperatorContext(Comparison_exprContext *ctx) { copyFrom(ctx); }

void LdScriptParser::ComparisonExpressionWithOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LdScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComparisonExpressionWithOperator(this);
}
void LdScriptParser::ComparisonExpressionWithOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LdScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComparisonExpressionWithOperator(this);
}

std::any LdScriptParser::ComparisonExpressionWithOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LdScriptVisitor*>(visitor))
    return parserVisitor->visitComparisonExpressionWithOperator(this);
  else
    return visitor->visitChildren(this);
}
LdScriptParser::Comparison_exprContext* LdScriptParser::comparison_expr() {
  Comparison_exprContext *_localctx = _tracker.createInstance<Comparison_exprContext>(_ctx, getState());
  enterRule(_localctx, 10, LdScriptParser::RuleComparison_expr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(67);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<LdScriptParser::ComparisonExpressionWithOperatorContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(59);
      comparison_operand();
      setState(60);
      comp_operator();
      setState(61);
      comparison_operand();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<LdScriptParser::ComparisonExpressionParensContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(63);
      match(LdScriptParser::LPAREN);
      setState(64);
      comparison_expr();
      setState(65);
      match(LdScriptParser::RPAREN);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Comparison_operandContext ------------------------------------------------------------------

LdScriptParser::Comparison_operandContext::Comparison_operandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LdScriptParser::Arithmetic_exprContext* LdScriptParser::Comparison_operandContext::arithmetic_expr() {
  return getRuleContext<LdScriptParser::Arithmetic_exprContext>(0);
}


size_t LdScriptParser::Comparison_operandContext::getRuleIndex() const {
  return LdScriptParser::RuleComparison_operand;
}

void LdScriptParser::Comparison_operandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LdScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComparison_operand(this);
}

void LdScriptParser::Comparison_operandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LdScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComparison_operand(this);
}


std::any LdScriptParser::Comparison_operandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LdScriptVisitor*>(visitor))
    return parserVisitor->visitComparison_operand(this);
  else
    return visitor->visitChildren(this);
}

LdScriptParser::Comparison_operandContext* LdScriptParser::comparison_operand() {
  Comparison_operandContext *_localctx = _tracker.createInstance<Comparison_operandContext>(_ctx, getState());
  enterRule(_localctx, 12, LdScriptParser::RuleComparison_operand);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(69);
    arithmetic_expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Comp_operatorContext ------------------------------------------------------------------

LdScriptParser::Comp_operatorContext::Comp_operatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LdScriptParser::Comp_operatorContext::GT() {
  return getToken(LdScriptParser::GT, 0);
}

tree::TerminalNode* LdScriptParser::Comp_operatorContext::GE() {
  return getToken(LdScriptParser::GE, 0);
}

tree::TerminalNode* LdScriptParser::Comp_operatorContext::LT() {
  return getToken(LdScriptParser::LT, 0);
}

tree::TerminalNode* LdScriptParser::Comp_operatorContext::LE() {
  return getToken(LdScriptParser::LE, 0);
}

tree::TerminalNode* LdScriptParser::Comp_operatorContext::EQ() {
  return getToken(LdScriptParser::EQ, 0);
}


size_t LdScriptParser::Comp_operatorContext::getRuleIndex() const {
  return LdScriptParser::RuleComp_operator;
}

void LdScriptParser::Comp_operatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LdScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComp_operator(this);
}

void LdScriptParser::Comp_operatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LdScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComp_operator(this);
}


std::any LdScriptParser::Comp_operatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LdScriptVisitor*>(visitor))
    return parserVisitor->visitComp_operator(this);
  else
    return visitor->visitChildren(this);
}

LdScriptParser::Comp_operatorContext* LdScriptParser::comp_operator() {
  Comp_operatorContext *_localctx = _tracker.createInstance<Comp_operatorContext>(_ctx, getState());
  enterRule(_localctx, 14, LdScriptParser::RuleComp_operator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(71);
    _la = _input->LA(1);
    if (!(((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 63488) != 0)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Arithmetic_exprContext ------------------------------------------------------------------

LdScriptParser::Arithmetic_exprContext::Arithmetic_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t LdScriptParser::Arithmetic_exprContext::getRuleIndex() const {
  return LdScriptParser::RuleArithmetic_expr;
}

void LdScriptParser::Arithmetic_exprContext::copyFrom(Arithmetic_exprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ArithmeticExpressionMultContext ------------------------------------------------------------------

std::vector<LdScriptParser::Arithmetic_exprContext *> LdScriptParser::ArithmeticExpressionMultContext::arithmetic_expr() {
  return getRuleContexts<LdScriptParser::Arithmetic_exprContext>();
}

LdScriptParser::Arithmetic_exprContext* LdScriptParser::ArithmeticExpressionMultContext::arithmetic_expr(size_t i) {
  return getRuleContext<LdScriptParser::Arithmetic_exprContext>(i);
}

tree::TerminalNode* LdScriptParser::ArithmeticExpressionMultContext::MULT() {
  return getToken(LdScriptParser::MULT, 0);
}

LdScriptParser::ArithmeticExpressionMultContext::ArithmeticExpressionMultContext(Arithmetic_exprContext *ctx) { copyFrom(ctx); }

void LdScriptParser::ArithmeticExpressionMultContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LdScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArithmeticExpressionMult(this);
}
void LdScriptParser::ArithmeticExpressionMultContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LdScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArithmeticExpressionMult(this);
}

std::any LdScriptParser::ArithmeticExpressionMultContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LdScriptVisitor*>(visitor))
    return parserVisitor->visitArithmeticExpressionMult(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArithmeticExpressionMinusContext ------------------------------------------------------------------

std::vector<LdScriptParser::Arithmetic_exprContext *> LdScriptParser::ArithmeticExpressionMinusContext::arithmetic_expr() {
  return getRuleContexts<LdScriptParser::Arithmetic_exprContext>();
}

LdScriptParser::Arithmetic_exprContext* LdScriptParser::ArithmeticExpressionMinusContext::arithmetic_expr(size_t i) {
  return getRuleContext<LdScriptParser::Arithmetic_exprContext>(i);
}

tree::TerminalNode* LdScriptParser::ArithmeticExpressionMinusContext::MINUS() {
  return getToken(LdScriptParser::MINUS, 0);
}

LdScriptParser::ArithmeticExpressionMinusContext::ArithmeticExpressionMinusContext(Arithmetic_exprContext *ctx) { copyFrom(ctx); }

void LdScriptParser::ArithmeticExpressionMinusContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LdScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArithmeticExpressionMinus(this);
}
void LdScriptParser::ArithmeticExpressionMinusContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LdScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArithmeticExpressionMinus(this);
}

std::any LdScriptParser::ArithmeticExpressionMinusContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LdScriptVisitor*>(visitor))
    return parserVisitor->visitArithmeticExpressionMinus(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArithmeticExpressionParensContext ------------------------------------------------------------------

tree::TerminalNode* LdScriptParser::ArithmeticExpressionParensContext::LPAREN() {
  return getToken(LdScriptParser::LPAREN, 0);
}

LdScriptParser::Arithmetic_exprContext* LdScriptParser::ArithmeticExpressionParensContext::arithmetic_expr() {
  return getRuleContext<LdScriptParser::Arithmetic_exprContext>(0);
}

tree::TerminalNode* LdScriptParser::ArithmeticExpressionParensContext::RPAREN() {
  return getToken(LdScriptParser::RPAREN, 0);
}

LdScriptParser::ArithmeticExpressionParensContext::ArithmeticExpressionParensContext(Arithmetic_exprContext *ctx) { copyFrom(ctx); }

void LdScriptParser::ArithmeticExpressionParensContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LdScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArithmeticExpressionParens(this);
}
void LdScriptParser::ArithmeticExpressionParensContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LdScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArithmeticExpressionParens(this);
}

std::any LdScriptParser::ArithmeticExpressionParensContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LdScriptVisitor*>(visitor))
    return parserVisitor->visitArithmeticExpressionParens(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArithmeticExpressionNumericEntityContext ------------------------------------------------------------------

LdScriptParser::Numeric_entityContext* LdScriptParser::ArithmeticExpressionNumericEntityContext::numeric_entity() {
  return getRuleContext<LdScriptParser::Numeric_entityContext>(0);
}

LdScriptParser::ArithmeticExpressionNumericEntityContext::ArithmeticExpressionNumericEntityContext(Arithmetic_exprContext *ctx) { copyFrom(ctx); }

void LdScriptParser::ArithmeticExpressionNumericEntityContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LdScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArithmeticExpressionNumericEntity(this);
}
void LdScriptParser::ArithmeticExpressionNumericEntityContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LdScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArithmeticExpressionNumericEntity(this);
}

std::any LdScriptParser::ArithmeticExpressionNumericEntityContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LdScriptVisitor*>(visitor))
    return parserVisitor->visitArithmeticExpressionNumericEntity(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArithmeticExpressionDivContext ------------------------------------------------------------------

std::vector<LdScriptParser::Arithmetic_exprContext *> LdScriptParser::ArithmeticExpressionDivContext::arithmetic_expr() {
  return getRuleContexts<LdScriptParser::Arithmetic_exprContext>();
}

LdScriptParser::Arithmetic_exprContext* LdScriptParser::ArithmeticExpressionDivContext::arithmetic_expr(size_t i) {
  return getRuleContext<LdScriptParser::Arithmetic_exprContext>(i);
}

tree::TerminalNode* LdScriptParser::ArithmeticExpressionDivContext::DIV() {
  return getToken(LdScriptParser::DIV, 0);
}

LdScriptParser::ArithmeticExpressionDivContext::ArithmeticExpressionDivContext(Arithmetic_exprContext *ctx) { copyFrom(ctx); }

void LdScriptParser::ArithmeticExpressionDivContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LdScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArithmeticExpressionDiv(this);
}
void LdScriptParser::ArithmeticExpressionDivContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LdScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArithmeticExpressionDiv(this);
}

std::any LdScriptParser::ArithmeticExpressionDivContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LdScriptVisitor*>(visitor))
    return parserVisitor->visitArithmeticExpressionDiv(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArithmeticExpressionPlusContext ------------------------------------------------------------------

std::vector<LdScriptParser::Arithmetic_exprContext *> LdScriptParser::ArithmeticExpressionPlusContext::arithmetic_expr() {
  return getRuleContexts<LdScriptParser::Arithmetic_exprContext>();
}

LdScriptParser::Arithmetic_exprContext* LdScriptParser::ArithmeticExpressionPlusContext::arithmetic_expr(size_t i) {
  return getRuleContext<LdScriptParser::Arithmetic_exprContext>(i);
}

tree::TerminalNode* LdScriptParser::ArithmeticExpressionPlusContext::PLUS() {
  return getToken(LdScriptParser::PLUS, 0);
}

LdScriptParser::ArithmeticExpressionPlusContext::ArithmeticExpressionPlusContext(Arithmetic_exprContext *ctx) { copyFrom(ctx); }

void LdScriptParser::ArithmeticExpressionPlusContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LdScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArithmeticExpressionPlus(this);
}
void LdScriptParser::ArithmeticExpressionPlusContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LdScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArithmeticExpressionPlus(this);
}

std::any LdScriptParser::ArithmeticExpressionPlusContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LdScriptVisitor*>(visitor))
    return parserVisitor->visitArithmeticExpressionPlus(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArithmeticExpressionNegationContext ------------------------------------------------------------------

tree::TerminalNode* LdScriptParser::ArithmeticExpressionNegationContext::MINUS() {
  return getToken(LdScriptParser::MINUS, 0);
}

LdScriptParser::Arithmetic_exprContext* LdScriptParser::ArithmeticExpressionNegationContext::arithmetic_expr() {
  return getRuleContext<LdScriptParser::Arithmetic_exprContext>(0);
}

LdScriptParser::ArithmeticExpressionNegationContext::ArithmeticExpressionNegationContext(Arithmetic_exprContext *ctx) { copyFrom(ctx); }

void LdScriptParser::ArithmeticExpressionNegationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LdScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArithmeticExpressionNegation(this);
}
void LdScriptParser::ArithmeticExpressionNegationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LdScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArithmeticExpressionNegation(this);
}

std::any LdScriptParser::ArithmeticExpressionNegationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LdScriptVisitor*>(visitor))
    return parserVisitor->visitArithmeticExpressionNegation(this);
  else
    return visitor->visitChildren(this);
}

LdScriptParser::Arithmetic_exprContext* LdScriptParser::arithmetic_expr() {
   return arithmetic_expr(0);
}

LdScriptParser::Arithmetic_exprContext* LdScriptParser::arithmetic_expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  LdScriptParser::Arithmetic_exprContext *_localctx = _tracker.createInstance<Arithmetic_exprContext>(_ctx, parentState);
  LdScriptParser::Arithmetic_exprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 16;
  enterRecursionRule(_localctx, 16, LdScriptParser::RuleArithmetic_expr, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(81);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LdScriptParser::MINUS: {
        _localctx = _tracker.createInstance<ArithmeticExpressionNegationContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(74);
        match(LdScriptParser::MINUS);
        setState(75);
        arithmetic_expr(3);
        break;
      }

      case LdScriptParser::LPAREN: {
        _localctx = _tracker.createInstance<ArithmeticExpressionParensContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(76);
        match(LdScriptParser::LPAREN);
        setState(77);
        arithmetic_expr(0);
        setState(78);
        match(LdScriptParser::RPAREN);
        break;
      }

      case LdScriptParser::DECIMAL:
      case LdScriptParser::IDENTIFIER: {
        _localctx = _tracker.createInstance<ArithmeticExpressionNumericEntityContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(80);
        numeric_entity();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(97);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(95);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<ArithmeticExpressionMultContext>(_tracker.createInstance<Arithmetic_exprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleArithmetic_expr);
          setState(83);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(84);
          match(LdScriptParser::MULT);
          setState(85);
          arithmetic_expr(8);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<ArithmeticExpressionDivContext>(_tracker.createInstance<Arithmetic_exprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleArithmetic_expr);
          setState(86);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(87);
          match(LdScriptParser::DIV);
          setState(88);
          arithmetic_expr(7);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<ArithmeticExpressionPlusContext>(_tracker.createInstance<Arithmetic_exprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleArithmetic_expr);
          setState(89);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(90);
          match(LdScriptParser::PLUS);
          setState(91);
          arithmetic_expr(6);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<ArithmeticExpressionMinusContext>(_tracker.createInstance<Arithmetic_exprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleArithmetic_expr);
          setState(92);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(93);
          match(LdScriptParser::MINUS);
          setState(94);
          arithmetic_expr(5);
          break;
        }

        default:
          break;
        } 
      }
      setState(99);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Logical_entityContext ------------------------------------------------------------------

LdScriptParser::Logical_entityContext::Logical_entityContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t LdScriptParser::Logical_entityContext::getRuleIndex() const {
  return LdScriptParser::RuleLogical_entity;
}

void LdScriptParser::Logical_entityContext::copyFrom(Logical_entityContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- LogicalVariableContext ------------------------------------------------------------------

tree::TerminalNode* LdScriptParser::LogicalVariableContext::IDENTIFIER() {
  return getToken(LdScriptParser::IDENTIFIER, 0);
}

LdScriptParser::LogicalVariableContext::LogicalVariableContext(Logical_entityContext *ctx) { copyFrom(ctx); }

void LdScriptParser::LogicalVariableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LdScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicalVariable(this);
}
void LdScriptParser::LogicalVariableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LdScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicalVariable(this);
}

std::any LdScriptParser::LogicalVariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LdScriptVisitor*>(visitor))
    return parserVisitor->visitLogicalVariable(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LogicalConstContext ------------------------------------------------------------------

tree::TerminalNode* LdScriptParser::LogicalConstContext::TRUE() {
  return getToken(LdScriptParser::TRUE, 0);
}

tree::TerminalNode* LdScriptParser::LogicalConstContext::FALSE() {
  return getToken(LdScriptParser::FALSE, 0);
}

LdScriptParser::LogicalConstContext::LogicalConstContext(Logical_entityContext *ctx) { copyFrom(ctx); }

void LdScriptParser::LogicalConstContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LdScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicalConst(this);
}
void LdScriptParser::LogicalConstContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LdScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicalConst(this);
}

std::any LdScriptParser::LogicalConstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LdScriptVisitor*>(visitor))
    return parserVisitor->visitLogicalConst(this);
  else
    return visitor->visitChildren(this);
}
LdScriptParser::Logical_entityContext* LdScriptParser::logical_entity() {
  Logical_entityContext *_localctx = _tracker.createInstance<Logical_entityContext>(_ctx, getState());
  enterRule(_localctx, 18, LdScriptParser::RuleLogical_entity);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(102);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LdScriptParser::TRUE:
      case LdScriptParser::FALSE: {
        _localctx = _tracker.createInstance<LdScriptParser::LogicalConstContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(100);
        _la = _input->LA(1);
        if (!(_la == LdScriptParser::TRUE

        || _la == LdScriptParser::FALSE)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

      case LdScriptParser::IDENTIFIER: {
        _localctx = _tracker.createInstance<LdScriptParser::LogicalVariableContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(101);
        match(LdScriptParser::IDENTIFIER);
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

//----------------- Numeric_entityContext ------------------------------------------------------------------

LdScriptParser::Numeric_entityContext::Numeric_entityContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t LdScriptParser::Numeric_entityContext::getRuleIndex() const {
  return LdScriptParser::RuleNumeric_entity;
}

void LdScriptParser::Numeric_entityContext::copyFrom(Numeric_entityContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- NumericConstContext ------------------------------------------------------------------

tree::TerminalNode* LdScriptParser::NumericConstContext::DECIMAL() {
  return getToken(LdScriptParser::DECIMAL, 0);
}

LdScriptParser::NumericConstContext::NumericConstContext(Numeric_entityContext *ctx) { copyFrom(ctx); }

void LdScriptParser::NumericConstContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LdScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumericConst(this);
}
void LdScriptParser::NumericConstContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LdScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumericConst(this);
}

std::any LdScriptParser::NumericConstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LdScriptVisitor*>(visitor))
    return parserVisitor->visitNumericConst(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumericVariableContext ------------------------------------------------------------------

tree::TerminalNode* LdScriptParser::NumericVariableContext::IDENTIFIER() {
  return getToken(LdScriptParser::IDENTIFIER, 0);
}

LdScriptParser::NumericVariableContext::NumericVariableContext(Numeric_entityContext *ctx) { copyFrom(ctx); }

void LdScriptParser::NumericVariableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LdScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumericVariable(this);
}
void LdScriptParser::NumericVariableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LdScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumericVariable(this);
}

std::any LdScriptParser::NumericVariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LdScriptVisitor*>(visitor))
    return parserVisitor->visitNumericVariable(this);
  else
    return visitor->visitChildren(this);
}
LdScriptParser::Numeric_entityContext* LdScriptParser::numeric_entity() {
  Numeric_entityContext *_localctx = _tracker.createInstance<Numeric_entityContext>(_ctx, getState());
  enterRule(_localctx, 20, LdScriptParser::RuleNumeric_entity);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(106);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LdScriptParser::DECIMAL: {
        _localctx = _tracker.createInstance<LdScriptParser::NumericConstContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(104);
        match(LdScriptParser::DECIMAL);
        break;
      }

      case LdScriptParser::IDENTIFIER: {
        _localctx = _tracker.createInstance<LdScriptParser::NumericVariableContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(105);
        match(LdScriptParser::IDENTIFIER);
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

bool LdScriptParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 4: return logical_exprSempred(antlrcpp::downCast<Logical_exprContext *>(context), predicateIndex);
    case 8: return arithmetic_exprSempred(antlrcpp::downCast<Arithmetic_exprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool LdScriptParser::logical_exprSempred(Logical_exprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 5);
    case 1: return precpred(_ctx, 4);

  default:
    break;
  }
  return true;
}

bool LdScriptParser::arithmetic_exprSempred(Arithmetic_exprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 2: return precpred(_ctx, 7);
    case 3: return precpred(_ctx, 6);
    case 4: return precpred(_ctx, 5);
    case 5: return precpred(_ctx, 4);

  default:
    break;
  }
  return true;
}

void LdScriptParser::initialize() {
  ::antlr4::internal::call_once(ldscriptParserOnceFlag, ldscriptParserInitialize);
}
