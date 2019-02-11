#include "stdafx.h"
#include "PizzaStore.h"
#include <iostream>


CPizzaStore::CPizzaStore(void)
{
	pizza = NULL;
}


CPizzaStore::~CPizzaStore(void)
{
	if(pizza)
	{
		std::string pizzaToBeCleaned = pizza->getName();
		delete pizza;
		pizza = NULL;
		std::cout<<"Pizza store is going to be closed!"<<std::endl;
		std::cout<<pizzaToBeCleaned<<" has been cleaned!"<<std::endl;
	}
	std::cout<<"Pizza store has been closed!"<<std::endl;
}


CPizza* CPizzaStore::orderPizza(std::string type)
{
	pizza = createPizza(type);
	if(pizza)
	{
		pizza->prepare();
		pizza->bake();
		pizza->cut();
		pizza->box();
	}
	else
	{
		std::cout<<"No pizza can be baked!"<<std::endl;
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
		std::cout<<pizzaToBeCleaned<<" has been cleaned!"<<std::endl;
	}
	else
	{
		std::cout<<"Nothing need to be cleaned!"<<std::endl;
	}
	
}
