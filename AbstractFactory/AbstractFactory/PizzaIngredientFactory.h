#pragma once
#include "Dough.h"
#include "Sauce.h"
class CPizzaIngredientFactory
{
public:
	CPizzaIngredientFactory(void);
	~CPizzaIngredientFactory(void);
	virtual CDough* createDough(void) = 0;
	virtual CSauce* createSauce(void) = 0;
};

