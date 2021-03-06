/*
 * Copyright 2013, Ingo Weinhold, ingo_weinhold@gmx.de.
 * Distributed under the terms of the MIT License.
 */


#include "code/Constant.h"

#include "code/DumpContext.h"
#include "code/EvaluationContext.h"


namespace ham {
namespace code {


Constant::Constant(const StringList& value)
	:
	fValue(value)
{
}


Constant::~Constant()
{
}


StringList
Constant::Evaluate(EvaluationContext& context)
{
	return fValue;
}


code::Node*
Constant::Visit(NodeVisitor& visitor)
{
	if (visitor.VisitNode(this))
		return this;

	return NULL;
}


void
Constant::Dump(DumpContext& context) const
{
	context << "Constant(\"" << fValue << "\")\n";
}


}	// namespace code
}	// namespace ham
