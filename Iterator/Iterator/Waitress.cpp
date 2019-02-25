#include "stdafx.h"
#include "Waitress.h"
#include "MenuItem.h"


CWaitress::CWaitress(MenuRoster* pRoster)
{
	this->pRoster = pRoster;
}


CWaitress::~CWaitress(void)
{
}


void CWaitress::printMenu(void)
{
	MenuRoster::iterator iter,iter_end;
	iter_end = pRoster->end();
	for(iter = pRoster->begin(); iter != iter_end; iter++)
	{
		printMenu((*iter)->createIterator());
	}
}

void CWaitress::printMenu(CCIterator* pIterator)
{
	while(pIterator->hasNext())
	{
		CMenuItem * pMenuItem = (CMenuItem *)(pIterator->next());
		std::cout<<pMenuItem->getName()<<", "<<pMenuItem->getDescription()<<", "<<pMenuItem->getPrice()<<", "<<pMenuItem->isVegetarian()<<std::endl;
	}
}
