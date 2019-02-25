#pragma once
#include "MenuComponent.h"
class CWaitress
{
public:
	CWaitress(CMenuComponent* pMenuComponent);
	~CWaitress(void);
	CMenuComponent* pMenuComponent;
	void printMenu(void);
	void printVegetarianMenu(void);
};

