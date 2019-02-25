#pragma once
#include "citerator.h"
class CNullIterator :
	public CCIterator
{
public:
	CNullIterator(void);
	~CNullIterator(void);
	bool hasNext(void);
	void* next(void);
};

