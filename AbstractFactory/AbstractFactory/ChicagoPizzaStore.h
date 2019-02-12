#pragma once
#include "pizzastore.h"
#include "ChicagoPizzaIngredientFactory.h"
class CChicagoPizzaStore :
	public CPizzaStore
{
public:
	CChicagoPizzaStore(void);
	~CChicagoPizzaStore(void);
	CChicagoPizzaIngredientFactory mChicagoPizzaIngredientFactory;
	CPizza* createPizza(std::string pizzaType);
};

