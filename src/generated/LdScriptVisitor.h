
// Generated from src/antlr/LdScript.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "LdScriptParser.h"


namespace antlrcpplds {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by LdScriptParser.
 */
class  LdScriptVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by LdScriptParser.
   */
    virtual std::any visitRule_set(LdScriptParser::Rule_setContext *context) = 0;

    virtual std::any visitSingle_rule(LdScriptParser::Single_ruleContext *context) = 0;

    virtual std::any visitCondition(LdScriptParser::ConditionContext *context) = 0;

    virtual std::any visitConclusion(LdScriptParser::ConclusionContext *context) = 0;

    virtual std::any visitLogicalEntity(LdScriptParser::LogicalEntityContext *context) = 0;

    virtual std::any visitComparisonExpression(LdScriptParser::ComparisonExpressionContext *context) = 0;

    virtual std::any visitLogicalExpressionInParen(LdScriptParser::LogicalExpressionInParenContext *context) = 0;

    virtual std::any visitLogicalExpressionAnd(LdScriptParser::LogicalExpressionAndContext *context) = 0;

    virtual std::any visitLogicalExpressionOr(LdScriptParser::LogicalExpressionOrContext *context) = 0;

    virtual std::any visitComparisonExpressionWithOperator(LdScriptParser::ComparisonExpressionWithOperatorContext *context) = 0;

    virtual std::any visitComparisonExpressionParens(LdScriptParser::ComparisonExpressionParensContext *context) = 0;

    virtual std::any visitComparison_operand(LdScriptParser::Comparison_operandContext *context) = 0;

    virtual std::any visitComp_operator(LdScriptParser::Comp_operatorContext *context) = 0;

    virtual std::any visitArithmeticExpressionMult(LdScriptParser::ArithmeticExpressionMultContext *context) = 0;

    virtual std::any visitArithmeticExpressionMinus(LdScriptParser::ArithmeticExpressionMinusContext *context) = 0;

    virtual std::any visitArithmeticExpressionParens(LdScriptParser::ArithmeticExpressionParensContext *context) = 0;

    virtual std::any visitArithmeticExpressionNumericEntity(LdScriptParser::ArithmeticExpressionNumericEntityContext *context) = 0;

    virtual std::any visitArithmeticExpressionDiv(LdScriptParser::ArithmeticExpressionDivContext *context) = 0;

    virtual std::any visitArithmeticExpressionPlus(LdScriptParser::ArithmeticExpressionPlusContext *context) = 0;

    virtual std::any visitArithmeticExpressionNegation(LdScriptParser::ArithmeticExpressionNegationContext *context) = 0;

    virtual std::any visitLogicalConst(LdScriptParser::LogicalConstContext *context) = 0;

    virtual std::any visitLogicalVariable(LdScriptParser::LogicalVariableContext *context) = 0;

    virtual std::any visitNumericConst(LdScriptParser::NumericConstContext *context) = 0;

    virtual std::any visitNumericVariable(LdScriptParser::NumericVariableContext *context) = 0;


};

}  // namespace antlrcpplds
