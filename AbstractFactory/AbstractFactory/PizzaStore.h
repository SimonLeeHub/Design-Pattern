#pragma once
#include "Pizza.h"
class CPizzaStore
{
public:
	CPizzaStore(void);
	~CPizzaStore(void);
	CPizza* pizza;

	virtual CPizza* createPizza(std::string pizzaType) = 0;
	CPizza* orderPizza(std::string pizzaType);
	void cleanTable(void);
};

