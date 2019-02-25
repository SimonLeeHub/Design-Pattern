#pragma once
#include "menucomponent.h"
#include "NullIterator.h"
class CMenuItem :
	public CMenuComponent
{
public:
	CMenuItem(std::string name,std::string description, double price, bool vegetarian);
	~CMenuItem(void);
	std::string name, description;
	double price;
	bool vegetarian;
	std::string getName(void);
	std::string getDescription(void);
	double getPrice(void);
	bool isVegetarian(void);
	void print(void);
	CCIterator* createIterator(void);
};

