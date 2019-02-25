#include "stdafx.h"
#include "DinerMenu.h"
#include "DinerIterator.h"


CDinerMenu::CDinerMenu(void)
{
	i = 0;
	pIterator = NULL;
	addItem("Diner1", "Diner", 1.0, true);
	addItem("Diner2", "Diner", 2.0, true);
	addItem("Diner3", "Diner", 3.0, false);
	addItem("Diner4", "Diner", 4.0, false);
	addItem("Diner5", "Diner", 5.0, false);
}


CDinerMenu::~CDinerMenu(void)
{
	CCIterator * pTemp = createIterator();
	while(pTemp->hasNext())
	{
		delete pTemp->next();
	}
	delete pTemp;
}

CCIterator* CDinerMenu::createIterator(void)
{
	if(pIterator)
	{
		delete pIterator;
	}
	pIterator = new CDinerIterator(MenuList);
	return pIterator;
}


void CDinerMenu::addItem(std::string name, std::string description, double price, bool vegetarian)
{
	CMenuItem* pMenuItem = new CMenuItem(name, description, price, vegetarian);
	if(i<5)
	{
		MenuList[i++] = pMenuItem;
	}
	else
	{
		std::cout<<"Menu List is full!\n";
	}
	
}
