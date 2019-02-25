#include "stdafx.h"
#include "CompositeIterator.h"


CCompositeIterator::CCompositeIterator(MenuRoster::iterator iter_begin, MenuRoster::iterator iter_end)
{
	MENU temp;
	temp.iter = iter_begin;
	temp.iter_end = iter_end; 
	stack.push_back(temp);
}


CCompositeIterator::~CCompositeIterator(void)
{
}


bool CCompositeIterator::hasNext(void)
{
	if(stack.size() == 0)
	{
		return false;
	}
	else
	{
		MENU temp = stack.back();
		if(temp.iter == temp.iter_end)
		{
			stack.pop_back();
			return hasNext();
		}
		else
		{
			return true;
		}
	}
}


void* CCompositeIterator::next(void)
{
	if(hasNext())
	{
		MENU temp = stack.back();
		CMenuComponent* pMenuComponent = *(temp.iter);
		stack[stack.size()-1].iter++;
		if(typeid(*pMenuComponent) == typeid(CCMenu))
		{
			MENU temp2;
			temp2.iter = ((CCMenu*)(pMenuComponent))->roster.begin();
			temp2.iter_end = ((CCMenu*)(pMenuComponent))->roster.end();
			stack.push_back(temp2);
		}
		return pMenuComponent;
	}
	else
	{
		return NULL;
	}
}
