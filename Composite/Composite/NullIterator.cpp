#include "stdafx.h"
#include "NullIterator.h"


CNullIterator::CNullIterator(void)
{
}


CNullIterator::~CNullIterator(void)
{
}

bool CNullIterator::hasNext(void)
{
	return false;
}
void* CNullIterator::next(void)
{
	return NULL;
}
