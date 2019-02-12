#include "stdafx.h"
#include "PizzaStore.h"
#include <iostream>


CPizzaStore::CPizzaStore(void)
{
}


CPizzaStore::~CPizzaStore(void)
{
}


CPizza* CPizzaStore::orderPizza(std::string pizzaType)
{
	pizza = createPizza(pizzaType);

	if(pizza)
	{
		pizza->prepare();
		pizza->bake();
		pizza->cut();
		pizza->box();
	}
	else
	{
		std::cout<<"No pizza can be baked!\n";
	}
	
	return pizza;
}


void CPizzaStore::cleanTable(void)
{
	if(pizza)
	{
		std::string pizzaToBeCleaned = pizza->getName();
		delete pizza;
		pizza = NULL;
		std::cout<<pizzaToBeCleaned<<" has been cleaned!\n";
	}
	else
	{
		std::cout<<"No pizza needs to be cleaned!\n";
	}
}
