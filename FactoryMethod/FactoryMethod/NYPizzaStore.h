#pragma once
#include "pizzastore.h"
#include "NYStyleCheesePizza.h"
class CNYPizzaStore :
	public CPizzaStore
{
public:
	CNYPizzaStore(void);
	~CNYPizzaStore(void);
protected:
	CPizza* createPizza(std::string type);
};

