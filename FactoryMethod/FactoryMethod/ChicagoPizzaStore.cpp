#include "stdafx.h"
#include "ChicagoPizzaStore.h"


CChicagoPizzaStore::CChicagoPizzaStore(void)
{
}


CChicagoPizzaStore::~CChicagoPizzaStore(void)
{
}

CPizza* CChicagoPizzaStore::createPizza(std::string type)
{
	if(type == "Cheese")
	{
		return new CChicagoStyleCheesePizza;
	}
	
	return NULL;
}
