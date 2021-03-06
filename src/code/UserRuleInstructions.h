/*
 * Copyright 2010-2013, Ingo Weinhold, ingo_weinhold@gmx.de.
 * Distributed under the terms of the MIT License.
 */
#ifndef HAM_CODE_USER_RULE_INSTRUCTIONS_H
#define HAM_CODE_USER_RULE_INSTRUCTIONS_H


#include "code/RuleInstructions.h"


namespace ham {
namespace code {


class Node;


class UserRuleInstructions : public RuleInstructions {
public:
								UserRuleInstructions(
									const StringList& parameterNames,
									Node* block);
								~UserRuleInstructions();

	virtual	StringList			Evaluate(EvaluationContext& context,
									const StringListList& parameters);

private:
			StringList			fParameterNames;
			Node*				fBlock;
};


}	// namespace code
}	// namespace ham


#endif	// HAM_CODE_USER_RULE_INSTRUCTIONS_H
