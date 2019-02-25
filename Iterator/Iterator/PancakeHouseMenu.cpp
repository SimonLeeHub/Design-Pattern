#include "stdafx.h"
#include "PancakeHouseMenu.h"
#include "PancakeIterator.h"


CPancakeHouseMenu::CPancakeHouseMenu(void)
{
	pIterator = NULL;
	addItem("Pancake1", "Pancake", 1.0, true);
	addItem("Pancake2", "Pancake", 2.0, true);
	addItem("Pancake3", "Pancake", 3.0, false);
	addItem("Pancake4", "Pancake", 4.0, false);
	addItem("Pancake5", "Pancake", 5.0, false);
}


CPancakeHouseMenu::~CPancakeHouseMenu(void)
{
	CCIterator * pTemp = createIterator();
	while(pTemp->hasNext())
	{
		delete pTemp->next();
		std::cout<<"delete\n";
	}
	delete pTemp;

}


CCIterator* CPancakeHouseMenu::createIterator(void)
{
	if(pIterator)
	{
		delete pIterator;
	}
	pIterator = new CPancakeIterator(&MenuList);
	return pIterator;
}


void CPancakeHouseMenu::addItem(std::string name, std::string description, double price, bool vegetarian)
{
	CMenuItem* pMenuItem = new CMenuItem(name, description, price, vegetarian);
	MenuList.push_back(pMenuItem);
}
