#pragma once
#include "pizzaingredientfactory.h"
class CChicagoPizzaIngredientFactory :
	public CPizzaIngredientFactory
{
public:
	CChicagoPizzaIngredientFactory(void);
	~CChicagoPizzaIngredientFactory(void);

	CDough* createDough(void);
	CSauce* createSauce(void);
};

