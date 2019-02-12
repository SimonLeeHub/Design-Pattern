#pragma once
#include "pizzaingredientfactory.h"
class CNYPizzaIngredientFactory :
	public CPizzaIngredientFactory
{
public:
	CNYPizzaIngredientFactory(void);
	~CNYPizzaIngredientFactory(void);

	CDough* createDough(void);
	CSauce* createSauce(void);
};

