#include "stdafx.h"
#include "NYPizzaStore.h"


CNYPizzaStore::CNYPizzaStore(void)
{
}


CNYPizzaStore::~CNYPizzaStore(void)
{
}


CPizza* CNYPizzaStore::createPizza(std::string type)
{
	if(type == "Cheese")
	{
		return new CNYStyleCheesePizza;
	}
	
	return NULL;
}
