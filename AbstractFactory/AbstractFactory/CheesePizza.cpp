#include "stdafx.h"
#include "CheesePizza.h"
#include <iostream>

CCheesePizza::CCheesePizza(CPizzaIngredientFactory* pizzaIngredientFactory)
{
	this->pizzaIngredientFactory = pizzaIngredientFactory;
}


CCheesePizza::~CCheesePizza(void)
{
	if(pDough)
	{
		std::string doughType = pDough->getType();
		delete pDough;
		pDough = NULL;
		std::cout<<doughType<<" has been cleaned!\n";
	}
	if(pSauce)
	{
		std::string sauceType = pSauce->getType();
		delete pSauce;
		pSauce = NULL;
		std::cout<<sauceType<<" has been cleaned!\n";
	}
}


void CCheesePizza::prepare(void)
{
	std::cout<<"Preparing "<<name<<"\n";
	pDough = pizzaIngredientFactory->createDough();
	std::cout<<"Tossing "<<pDough->getType()<<"...\n";
	pSauce = pizzaIngredientFactory->createSauce();
	std::cout<<"Adding "<<pSauce->getType()<<"...\n";
}
