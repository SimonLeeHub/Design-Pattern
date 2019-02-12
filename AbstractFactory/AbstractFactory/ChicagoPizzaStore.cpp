#include "stdafx.h"
#include "ChicagoPizzaStore.h"
#include "CheesePizza.h"

CChicagoPizzaStore::CChicagoPizzaStore(void)
{
}


CChicagoPizzaStore::~CChicagoPizzaStore(void)
{
}


CPizza* CChicagoPizzaStore::createPizza(std::string pizzaType)
{
	CPizza* pizza(NULL);
	
	if(pizzaType == "Cheese")
	{
		pizza = new CCheesePizza(&mChicagoPizzaIngredientFactory);
		pizza->setName("Chicago Cheese Pizza");
	}
	return pizza;
}
