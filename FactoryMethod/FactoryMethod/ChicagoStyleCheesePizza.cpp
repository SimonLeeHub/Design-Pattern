#include "stdafx.h"
#include "ChicagoStyleCheesePizza.h"
#include <iostream>


CChicagoStyleCheesePizza::CChicagoStyleCheesePizza(void)
{
	name = "Chicago Style Deep Dish Cheese Pizza";
	dough = "Extra Thick Crust Dough";
	sauce = "Plum Tomato Sauce";

	toppings.push_back("Shredded Mozzarella Cheese");
}


CChicagoStyleCheesePizza::~CChicagoStyleCheesePizza(void)
{
}


void CChicagoStyleCheesePizza::cut(void)
{
	std::cout<<"Cutting the pizza into square slices"<<std::endl;
}
