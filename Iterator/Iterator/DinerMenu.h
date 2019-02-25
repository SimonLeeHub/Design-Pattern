#pragma once
#include "cmenu.h"
#include "MenuItem.h"
class CDinerMenu :
	public CCMenu
{
public:
	CDinerMenu(void);
	~CDinerMenu(void);
	int i;
	CCIterator* pIterator;
	CMenuItem* MenuList[5];
	CCIterator* createIterator(void);
	void addItem(std::string name, std::string description, double price, bool vegetarian);
};

