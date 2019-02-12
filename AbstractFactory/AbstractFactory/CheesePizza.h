#pragma once
#include "pizza.h"
#include "PizzaIngredientFactory.h"
class CCheesePizza :
	public CPizza
{
public:
	CCheesePizza(CPizzaIngredientFactory* pizzaIngredientFactory);
	~CCheesePizza(void);
	CPizzaIngredientFactory* pizzaIngredientFactory;
	void prepare(void);
};

