#pragma once
#include "cmenu.h"
#include "MenuItem.h"
#include <vector>
typedef std::vector<CMenuItem*> MenuVector;
class CPancakeHouseMenu :
	public CCMenu
{
public:
	CPancakeHouseMenu(void);
	~CPancakeHouseMenu(void);
	MenuVector MenuList;
	CCIterator* pIterator;
	CCIterator* createIterator(void);
	void addItem(std::string name, std::string description, double price, bool vegetarian);
};

