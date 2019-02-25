#pragma once
#include "citerator.h"
#include "MenuItem.h"
class CDinerIterator :
	public CCIterator
{
public:
	CDinerIterator(CMenuItem** pMenuList);
	~CDinerIterator(void);
	int position;
	CMenuItem** pMenuList;
	bool hasNext(void);
	void* next(void);
};

