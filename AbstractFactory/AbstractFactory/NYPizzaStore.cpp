#include "stdafx.h"
#include "NYPizzaStore.h"
#include "CheesePizza.h"

CNYPizzaStore::CNYPizzaStore(void)
{
}


CNYPizzaStore::~CNYPizzaStore(void)
{
}


CPizza* CNYPizzaStore::createPizza(std::string pizzaType)
{
	CPizza* pizza(NULL);
	
	if(pizzaType == "Cheese")
	{
		pizza = new CCheesePizza(&mNYPizzaIngredientFactory);
		pizza->setName("New York Cheese Pizza");
	}
	return pizza;
}
