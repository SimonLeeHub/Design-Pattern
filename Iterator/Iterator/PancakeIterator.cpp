#include "stdafx.h"
#include "PancakeIterator.h"


CPancakeIterator::CPancakeIterator(MenuVector* pMenuList)
{
	this->pMenuList = pMenuList;
	iterator = pMenuList->begin();
}


CPancakeIterator::~CPancakeIterator(void)
{
}


bool CPancakeIterator::hasNext(void)
{
	if(iterator != pMenuList->end())
	{
		return true;
	}
	else
	{
		return false;
	}
}


void* CPancakeIterator::next(void)
{
	return *iterator++;
}
