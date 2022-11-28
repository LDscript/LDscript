
// Generated from src/antlr/LdScript.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "LdScriptParser.h"


namespace antlrcpplds {

/**
 * This interface defines an abstract listener for a parse tree produced by LdScriptParser.
 */
class  LdScriptListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterRule_set(LdScriptParser::Rule_setContext *ctx) = 0;
  virtual void exitRule_set(LdScriptParser::Rule_setContext *ctx) = 0;

  virtual void enterSingle_rule(LdScriptParser::Single_ruleContext *ctx) = 0;
  virtual void exitSingle_rule(LdScriptParser::Single_ruleContext *ctx) = 0;

  virtual void enterCondition(LdScriptParser::ConditionContext *ctx) = 0;
  virtual void exitCondition(LdScriptParser::ConditionContext *ctx) = 0;

  virtual void enterConclusion(LdScriptParser::ConclusionContext *ctx) = 0;
  virtual void exitConclusion(LdScriptParser::ConclusionContext *ctx) = 0;

  virtual void enterLogicalEntity(LdScriptParser::LogicalEntityContext *ctx) = 0;
  virtual void exitLogicalEntity(LdScriptParser::LogicalEntityContext *ctx) = 0;

  virtual void enterComparisonExpression(LdScriptParser::ComparisonExpressionContext *ctx) = 0;
  virtual void exitComparisonExpression(LdScriptParser::ComparisonExpressionContext *ctx) = 0;

  virtual void enterLogicalExpressionInParen(LdScriptParser::LogicalExpressionInParenContext *ctx) = 0;
  virtual void exitLogicalExpressionInParen(LdScriptParser::LogicalExpressionInParenContext *ctx) = 0;

  virtual void enterLogicalExpressionAnd(LdScriptParser::LogicalExpressionAndContext *ctx) = 0;
  virtual void exitLogicalExpressionAnd(LdScriptParser::LogicalExpressionAndContext *ctx) = 0;

  virtual void enterLogicalExpressionOr(LdScriptParser::LogicalExpressionOrContext *ctx) = 0;
  virtual void exitLogicalExpressionOr(LdScriptParser::LogicalExpressionOrContext *ctx) = 0;

  virtual void enterComparisonExpressionWithOperator(LdScriptParser::ComparisonExpressionWithOperatorContext *ctx) = 0;
  virtual void exitComparisonExpressionWithOperator(LdScriptParser::ComparisonExpressionWithOperatorContext *ctx) = 0;

  virtual void enterComparisonExpressionParens(LdScriptParser::ComparisonExpressionParensContext *ctx) = 0;
  virtual void exitComparisonExpressionParens(LdScriptParser::ComparisonExpressionParensContext *ctx) = 0;

  virtual void enterComparison_operand(LdScriptParser::Comparison_operandContext *ctx) = 0;
  virtual void exitComparison_operand(LdScriptParser::Comparison_operandContext *ctx) = 0;

  virtual void enterComp_operator(LdScriptParser::Comp_operatorContext *ctx) = 0;
  virtual void exitComp_operator(LdScriptParser::Comp_operatorContext *ctx) = 0;

  virtual void enterArithmeticExpressionMult(LdScriptParser::ArithmeticExpressionMultContext *ctx) = 0;
  virtual void exitArithmeticExpressionMult(LdScriptParser::ArithmeticExpressionMultContext *ctx) = 0;

  virtual void enterArithmeticExpressionMinus(LdScriptParser::ArithmeticExpressionMinusContext *ctx) = 0;
  virtual void exitArithmeticExpressionMinus(LdScriptParser::ArithmeticExpressionMinusContext *ctx) = 0;

  virtual void enterArithmeticExpressionParens(LdScriptParser::ArithmeticExpressionParensContext *ctx) = 0;
  virtual void exitArithmeticExpressionParens(LdScriptParser::ArithmeticExpressionParensContext *ctx) = 0;

  virtual void enterArithmeticExpressionNumericEntity(LdScriptParser::ArithmeticExpressionNumericEntityContext *ctx) = 0;
  virtual void exitArithmeticExpressionNumericEntity(LdScriptParser::ArithmeticExpressionNumericEntityContext *ctx) = 0;

  virtual void enterArithmeticExpressionDiv(LdScriptParser::ArithmeticExpressionDivContext *ctx) = 0;
  virtual void exitArithmeticExpressionDiv(LdScriptParser::ArithmeticExpressionDivContext *ctx) = 0;

  virtual void enterArithmeticExpressionPlus(LdScriptParser::ArithmeticExpressionPlusContext *ctx) = 0;
  virtual void exitArithmeticExpressionPlus(LdScriptParser::ArithmeticExpressionPlusContext *ctx) = 0;

  virtual void enterArithmeticExpressionNegation(LdScriptParser::ArithmeticExpressionNegationContext *ctx) = 0;
  virtual void exitArithmeticExpressionNegation(LdScriptParser::ArithmeticExpressionNegationContext *ctx) = 0;

  virtual void enterLogicalConst(LdScriptParser::LogicalConstContext *ctx) = 0;
  virtual void exitLogicalConst(LdScriptParser::LogicalConstContext *ctx) = 0;

  virtual void enterLogicalVariable(LdScriptParser::LogicalVariableContext *ctx) = 0;
  virtual void exitLogicalVariable(LdScriptParser::LogicalVariableContext *ctx) = 0;

  virtual void enterNumericConst(LdScriptParser::NumericConstContext *ctx) = 0;
  virtual void exitNumericConst(LdScriptParser::NumericConstContext *ctx) = 0;

  virtual void enterNumericVariable(LdScriptParser::NumericVariableContext *ctx) = 0;
  virtual void exitNumericVariable(LdScriptParser::NumericVariableContext *ctx) = 0;


};

}  // namespace antlrcpplds
