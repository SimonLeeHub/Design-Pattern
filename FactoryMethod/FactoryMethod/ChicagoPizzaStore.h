#pragma once
#include "pizzastore.h"
#include "ChicagoStyleCheesePizza.h"
class CChicagoPizzaStore :
	public CPizzaStore
{
public:
	CChicagoPizzaStore(void);
	~CChicagoPizzaStore(void);
protected:
	CPizza* createPizza(std::string type);
};

