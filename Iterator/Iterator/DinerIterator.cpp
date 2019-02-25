#include "stdafx.h"
#include "DinerIterator.h"


CDinerIterator::CDinerIterator(CMenuItem** pMenuList)
{
	position = 0;
	this->pMenuList = pMenuList;
}


CDinerIterator::~CDinerIterator(void)
{
}

bool CDinerIterator::hasNext(void)
{
	if(position<5)
	{
		return true;
	}
	else
	{
		return false;
	}
}


void* CDinerIterator::next(void)
{
	return pMenuList[position++];
}
