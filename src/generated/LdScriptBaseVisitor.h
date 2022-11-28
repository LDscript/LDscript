
// Generated from src/antlr/LdScript.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "LdScriptVisitor.h"


namespace antlrcpplds {

/**
 * This class provides an empty implementation of LdScriptVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  LdScriptBaseVisitor : public LdScriptVisitor {
public:

  virtual std::any visitRule_set(LdScriptParser::Rule_setContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSingle_rule(LdScriptParser::Single_ruleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCondition(LdScriptParser::ConditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConclusion(LdScriptParser::ConclusionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicalEntity(LdScriptParser::LogicalEntityContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComparisonExpression(LdScriptParser::ComparisonExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicalExpressionInParen(LdScriptParser::LogicalExpressionInParenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicalExpressionAnd(LdScriptParser::LogicalExpressionAndContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicalExpressionOr(LdScriptParser::LogicalExpressionOrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComparisonExpressionWithOperator(LdScriptParser::ComparisonExpressionWithOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComparisonExpressionParens(LdScriptParser::ComparisonExpressionParensContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComparison_operand(LdScriptParser::Comparison_operandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComp_operator(LdScriptParser::Comp_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArithmeticExpressionMult(LdScriptParser::ArithmeticExpressionMultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArithmeticExpressionMinus(LdScriptParser::ArithmeticExpressionMinusContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArithmeticExpressionParens(LdScriptParser::ArithmeticExpressionParensContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArithmeticExpressionNumericEntity(LdScriptParser::ArithmeticExpressionNumericEntityContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArithmeticExpressionDiv(LdScriptParser::ArithmeticExpressionDivContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArithmeticExpressionPlus(LdScriptParser::ArithmeticExpressionPlusContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArithmeticExpressionNegation(LdScriptParser::ArithmeticExpressionNegationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicalConst(LdScriptParser::LogicalConstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicalVariable(LdScriptParser::LogicalVariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNumericConst(LdScriptParser::NumericConstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNumericVariable(LdScriptParser::NumericVariableContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace antlrcpplds
