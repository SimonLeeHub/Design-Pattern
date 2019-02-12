#pragma once
#include "pizzastore.h"
#include "NYPizzaIngredientFactory.h"
class CNYPizzaStore :
	public CPizzaStore
{
public:
	CNYPizzaStore(void);
	~CNYPizzaStore(void);
	CNYPizzaIngredientFactory mNYPizzaIngredientFactory;
	CPizza* createPizza(std::string pizzaType);
};

