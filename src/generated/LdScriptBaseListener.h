
// Generated from src/antlr/LdScript.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "LdScriptListener.h"


namespace antlrcpplds {

/**
 * This class provides an empty implementation of LdScriptListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  LdScriptBaseListener : public LdScriptListener {
public:

  virtual void enterRule_set(LdScriptParser::Rule_setContext * /*ctx*/) override { }
  virtual void exitRule_set(LdScriptParser::Rule_setContext * /*ctx*/) override { }

  virtual void enterSingle_rule(LdScriptParser::Single_ruleContext * /*ctx*/) override { }
  virtual void exitSingle_rule(LdScriptParser::Single_ruleContext * /*ctx*/) override { }

  virtual void enterCondition(LdScriptParser::ConditionContext * /*ctx*/) override { }
  virtual void exitCondition(LdScriptParser::ConditionContext * /*ctx*/) override { }

  virtual void enterConclusion(LdScriptParser::ConclusionContext * /*ctx*/) override { }
  virtual void exitConclusion(LdScriptParser::ConclusionContext * /*ctx*/) override { }

  virtual void enterLogicalEntity(LdScriptParser::LogicalEntityContext * /*ctx*/) override { }
  virtual void exitLogicalEntity(LdScriptParser::LogicalEntityContext * /*ctx*/) override { }

  virtual void enterComparisonExpression(LdScriptParser::ComparisonExpressionContext * /*ctx*/) override { }
  virtual void exitComparisonExpression(LdScriptParser::ComparisonExpressionContext * /*ctx*/) override { }

  virtual void enterLogicalExpressionInParen(LdScriptParser::LogicalExpressionInParenContext * /*ctx*/) override { }
  virtual void exitLogicalExpressionInParen(LdScriptParser::LogicalExpressionInParenContext * /*ctx*/) override { }

  virtual void enterLogicalExpressionAnd(LdScriptParser::LogicalExpressionAndContext * /*ctx*/) override { }
  virtual void exitLogicalExpressionAnd(LdScriptParser::LogicalExpressionAndContext * /*ctx*/) override { }

  virtual void enterLogicalExpressionOr(LdScriptParser::LogicalExpressionOrContext * /*ctx*/) override { }
  virtual void exitLogicalExpressionOr(LdScriptParser::LogicalExpressionOrContext * /*ctx*/) override { }

  virtual void enterComparisonExpressionWithOperator(LdScriptParser::ComparisonExpressionWithOperatorContext * /*ctx*/) override { }
  virtual void exitComparisonExpressionWithOperator(LdScriptParser::ComparisonExpressionWithOperatorContext * /*ctx*/) override { }

  virtual void enterComparisonExpressionParens(LdScriptParser::ComparisonExpressionParensContext * /*ctx*/) override { }
  virtual void exitComparisonExpressionParens(LdScriptParser::ComparisonExpressionParensContext * /*ctx*/) override { }

  virtual void enterComparison_operand(LdScriptParser::Comparison_operandContext * /*ctx*/) override { }
  virtual void exitComparison_operand(LdScriptParser::Comparison_operandContext * /*ctx*/) override { }

  virtual void enterComp_operator(LdScriptParser::Comp_operatorContext * /*ctx*/) override { }
  virtual void exitComp_operator(LdScriptParser::Comp_operatorContext * /*ctx*/) override { }

  virtual void enterArithmeticExpressionMult(LdScriptParser::ArithmeticExpressionMultContext * /*ctx*/) override { }
  virtual void exitArithmeticExpressionMult(LdScriptParser::ArithmeticExpressionMultContext * /*ctx*/) override { }

  virtual void enterArithmeticExpressionMinus(LdScriptParser::ArithmeticExpressionMinusContext * /*ctx*/) override { }
  virtual void exitArithmeticExpressionMinus(LdScriptParser::ArithmeticExpressionMinusContext * /*ctx*/) override { }

  virtual void enterArithmeticExpressionParens(LdScriptParser::ArithmeticExpressionParensContext * /*ctx*/) override { }
  virtual void exitArithmeticExpressionParens(LdScriptParser::ArithmeticExpressionParensContext * /*ctx*/) override { }

  virtual void enterArithmeticExpressionNumericEntity(LdScriptParser::ArithmeticExpressionNumericEntityContext * /*ctx*/) override { }
  virtual void exitArithmeticExpressionNumericEntity(LdScriptParser::ArithmeticExpressionNumericEntityContext * /*ctx*/) override { }

  virtual void enterArithmeticExpressionDiv(LdScriptParser::ArithmeticExpressionDivContext * /*ctx*/) override { }
  virtual void exitArithmeticExpressionDiv(LdScriptParser::ArithmeticExpressionDivContext * /*ctx*/) override { }

  virtual void enterArithmeticExpressionPlus(LdScriptParser::ArithmeticExpressionPlusContext * /*ctx*/) override { }
  virtual void exitArithmeticExpressionPlus(LdScriptParser::ArithmeticExpressionPlusContext * /*ctx*/) override { }

  virtual void enterArithmeticExpressionNegation(LdScriptParser::ArithmeticExpressionNegationContext * /*ctx*/) override { }
  virtual void exitArithmeticExpressionNegation(LdScriptParser::ArithmeticExpressionNegationContext * /*ctx*/) override { }

  virtual void enterLogicalConst(LdScriptParser::LogicalConstContext * /*ctx*/) override { }
  virtual void exitLogicalConst(LdScriptParser::LogicalConstContext * /*ctx*/) override { }

  virtual void enterLogicalVariable(LdScriptParser::LogicalVariableContext * /*ctx*/) override { }
  virtual void exitLogicalVariable(LdScriptParser::LogicalVariableContext * /*ctx*/) override { }

  virtual void enterNumericConst(LdScriptParser::NumericConstContext * /*ctx*/) override { }
  virtual void exitNumericConst(LdScriptParser::NumericConstContext * /*ctx*/) override { }

  virtual void enterNumericVariable(LdScriptParser::NumericVariableContext * /*ctx*/) override { }
  virtual void exitNumericVariable(LdScriptParser::NumericVariableContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

}  // namespace antlrcpplds
