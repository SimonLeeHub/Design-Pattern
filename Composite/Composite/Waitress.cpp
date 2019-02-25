#include "stdafx.h"
#include "Waitress.h"
#include "CIterator.h"
#include "MenuItem.h"

CWaitress::CWaitress(CMenuComponent* pMenuComponent)
{
	this->pMenuComponent = pMenuComponent;
}


CWaitress::~CWaitress(void)
{
}


void CWaitress::printMenu(void)
{
	pMenuComponent->print();
}

void CWaitress::printVegetarianMenu(void)
{
	CCIterator *pIterator = pMenuComponent->createIterator();
	std::cout<<"\nVegetarian Menu...\n";
	while (pIterator->hasNext())
	{
		CMenuComponent * pTemp = (CMenuComponent *)pIterator->next();
		try
		{
			if(pTemp->isVegetarian())
			{
				pTemp->print();
			}
		}
		catch(std::string)
		{
			std::cout<<pTemp->getName()<<" is a menu.\n";
		}
		
	}
}
