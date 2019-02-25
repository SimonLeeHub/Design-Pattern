#pragma once
#include "citerator.h"
#include "MenuItem.h"
#include <vector>
typedef std::vector<CMenuItem*> MenuVector;
class CPancakeIterator :
	public CCIterator
{
public:
	CPancakeIterator(MenuVector* pMenuList);
	~CPancakeIterator(void);
	MenuVector* pMenuList;
	MenuVector::iterator iterator;
	bool hasNext(void);
	void* next(void);
};

