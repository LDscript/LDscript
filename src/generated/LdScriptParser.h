
// Generated from src/antlr/LdScript.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"


namespace antlrcpplds {


class  LdScriptParser : public antlr4::Parser {
public:
  enum {
    IF = 1, THEN = 2, AND = 3, OR = 4, TRUE = 5, FALSE = 6, MULT = 7, DIV = 8, 
    PLUS = 9, MINUS = 10, GT = 11, GE = 12, LT = 13, LE = 14, EQ = 15, LPAREN = 16, 
    RPAREN = 17, DECIMAL = 18, IDENTIFIER = 19, COMMENT = 20, WS = 21
  };

  enum {
    RuleRule_set = 0, RuleSingle_rule = 1, RuleCondition = 2, RuleConclusion = 3, 
    RuleLogical_expr = 4, RuleComparison_expr = 5, RuleComparison_operand = 6, 
    RuleComp_operator = 7, RuleArithmetic_expr = 8, RuleLogical_entity = 9, 
    RuleNumeric_entity = 10
  };

  explicit LdScriptParser(antlr4::TokenStream *input);

  LdScriptParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~LdScriptParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class Rule_setContext;
  class Single_ruleContext;
  class ConditionContext;
  class ConclusionContext;
  class Logical_exprContext;
  class Comparison_exprContext;
  class Comparison_operandContext;
  class Comp_operatorContext;
  class Arithmetic_exprContext;
  class Logical_entityContext;
  class Numeric_entityContext; 

  class  Rule_setContext : public antlr4::ParserRuleContext {
  public:
    Rule_setContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<Single_ruleContext *> single_rule();
    Single_ruleContext* single_rule(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Rule_setContext* rule_set();

  class  Single_ruleContext : public antlr4::ParserRuleContext {
  public:
    Single_ruleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    ConditionContext *condition();
    antlr4::tree::TerminalNode *THEN();
    ConclusionContext *conclusion();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Single_ruleContext* single_rule();

  class  ConditionContext : public antlr4::ParserRuleContext {
  public:
    ConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Logical_exprContext *logical_expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConditionContext* condition();

  class  ConclusionContext : public antlr4::ParserRuleContext {
  public:
    ConclusionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConclusionContext* conclusion();

  class  Logical_exprContext : public antlr4::ParserRuleContext {
  public:
    Logical_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Logical_exprContext() = default;
    void copyFrom(Logical_exprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  LogicalEntityContext : public Logical_exprContext {
  public:
    LogicalEntityContext(Logical_exprContext *ctx);

    Logical_entityContext *logical_entity();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ComparisonExpressionContext : public Logical_exprContext {
  public:
    ComparisonExpressionContext(Logical_exprContext *ctx);

    Comparison_exprContext *comparison_expr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LogicalExpressionInParenContext : public Logical_exprContext {
  public:
    LogicalExpressionInParenContext(Logical_exprContext *ctx);

    antlr4::tree::TerminalNode *LPAREN();
    Logical_exprContext *logical_expr();
    antlr4::tree::TerminalNode *RPAREN();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LogicalExpressionAndContext : public Logical_exprContext {
  public:
    LogicalExpressionAndContext(Logical_exprContext *ctx);

    std::vector<Logical_exprContext *> logical_expr();
    Logical_exprContext* logical_expr(size_t i);
    antlr4::tree::TerminalNode *AND();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LogicalExpressionOrContext : public Logical_exprContext {
  public:
    LogicalExpressionOrContext(Logical_exprContext *ctx);

    std::vector<Logical_exprContext *> logical_expr();
    Logical_exprContext* logical_expr(size_t i);
    antlr4::tree::TerminalNode *OR();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Logical_exprContext* logical_expr();
  Logical_exprContext* logical_expr(int precedence);
  class  Comparison_exprContext : public antlr4::ParserRuleContext {
  public:
    Comparison_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Comparison_exprContext() = default;
    void copyFrom(Comparison_exprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ComparisonExpressionParensContext : public Comparison_exprContext {
  public:
    ComparisonExpressionParensContext(Comparison_exprContext *ctx);

    antlr4::tree::TerminalNode *LPAREN();
    Comparison_exprContext *comparison_expr();
    antlr4::tree::TerminalNode *RPAREN();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ComparisonExpressionWithOperatorContext : public Comparison_exprContext {
  public:
    ComparisonExpressionWithOperatorContext(Comparison_exprContext *ctx);

    std::vector<Comparison_operandContext *> comparison_operand();
    Comparison_operandContext* comparison_operand(size_t i);
    Comp_operatorContext *comp_operator();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Comparison_exprContext* comparison_expr();

  class  Comparison_operandContext : public antlr4::ParserRuleContext {
  public:
    Comparison_operandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Arithmetic_exprContext *arithmetic_expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Comparison_operandContext* comparison_operand();

  class  Comp_operatorContext : public antlr4::ParserRuleContext {
  public:
    Comp_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *GE();
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *LE();
    antlr4::tree::TerminalNode *EQ();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Comp_operatorContext* comp_operator();

  class  Arithmetic_exprContext : public antlr4::ParserRuleContext {
  public:
    Arithmetic_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Arithmetic_exprContext() = default;
    void copyFrom(Arithmetic_exprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ArithmeticExpressionMultContext : public Arithmetic_exprContext {
  public:
    ArithmeticExpressionMultContext(Arithmetic_exprContext *ctx);

    std::vector<Arithmetic_exprContext *> arithmetic_expr();
    Arithmetic_exprContext* arithmetic_expr(size_t i);
    antlr4::tree::TerminalNode *MULT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ArithmeticExpressionMinusContext : public Arithmetic_exprContext {
  public:
    ArithmeticExpressionMinusContext(Arithmetic_exprContext *ctx);

    std::vector<Arithmetic_exprContext *> arithmetic_expr();
    Arithmetic_exprContext* arithmetic_expr(size_t i);
    antlr4::tree::TerminalNode *MINUS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ArithmeticExpressionParensContext : public Arithmetic_exprContext {
  public:
    ArithmeticExpressionParensContext(Arithmetic_exprContext *ctx);

    antlr4::tree::TerminalNode *LPAREN();
    Arithmetic_exprContext *arithmetic_expr();
    antlr4::tree::TerminalNode *RPAREN();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ArithmeticExpressionNumericEntityContext : public Arithmetic_exprContext {
  public:
    ArithmeticExpressionNumericEntityContext(Arithmetic_exprContext *ctx);

    Numeric_entityContext *numeric_entity();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ArithmeticExpressionDivContext : public Arithmetic_exprContext {
  public:
    ArithmeticExpressionDivContext(Arithmetic_exprContext *ctx);

    std::vector<Arithmetic_exprContext *> arithmetic_expr();
    Arithmetic_exprContext* arithmetic_expr(size_t i);
    antlr4::tree::TerminalNode *DIV();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ArithmeticExpressionPlusContext : public Arithmetic_exprContext {
  public:
    ArithmeticExpressionPlusContext(Arithmetic_exprContext *ctx);

    std::vector<Arithmetic_exprContext *> arithmetic_expr();
    Arithmetic_exprContext* arithmetic_expr(size_t i);
    antlr4::tree::TerminalNode *PLUS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ArithmeticExpressionNegationContext : public Arithmetic_exprContext {
  public:
    ArithmeticExpressionNegationContext(Arithmetic_exprContext *ctx);

    antlr4::tree::TerminalNode *MINUS();
    Arithmetic_exprContext *arithmetic_expr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Arithmetic_exprContext* arithmetic_expr();
  Arithmetic_exprContext* arithmetic_expr(int precedence);
  class  Logical_entityContext : public antlr4::ParserRuleContext {
  public:
    Logical_entityContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Logical_entityContext() = default;
    void copyFrom(Logical_entityContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  LogicalVariableContext : public Logical_entityContext {
  public:
    LogicalVariableContext(Logical_entityContext *ctx);

    antlr4::tree::TerminalNode *IDENTIFIER();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LogicalConstContext : public Logical_entityContext {
  public:
    LogicalConstContext(Logical_entityContext *ctx);

    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *FALSE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Logical_entityContext* logical_entity();

  class  Numeric_entityContext : public antlr4::ParserRuleContext {
  public:
    Numeric_entityContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Numeric_entityContext() = default;
    void copyFrom(Numeric_entityContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  NumericConstContext : public Numeric_entityContext {
  public:
    NumericConstContext(Numeric_entityContext *ctx);

    antlr4::tree::TerminalNode *DECIMAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumericVariableContext : public Numeric_entityContext {
  public:
    NumericVariableContext(Numeric_entityContext *ctx);

    antlr4::tree::TerminalNode *IDENTIFIER();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Numeric_entityContext* numeric_entity();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool logical_exprSempred(Logical_exprContext *_localctx, size_t predicateIndex);
  bool arithmetic_exprSempred(Arithmetic_exprContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

}  // namespace antlrcpplds
