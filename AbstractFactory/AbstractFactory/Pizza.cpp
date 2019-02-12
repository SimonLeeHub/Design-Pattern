#include "stdafx.h"
#include "Pizza.h"
#include <iostream>


CPizza::CPizza(void)
{
	pDough = NULL;
	pSauce = NULL;
}


CPizza::~CPizza(void)
{
	
}


void CPizza::bake(void)
{
	std::cout<<"Bake for 25 minutes at 350\n";
}


void CPizza::cut(void)
{
	std::cout<<"Cutting the pizza into diagonal slices\n";
}


void CPizza::box(void)
{
	std::cout<<"Place pizza in official PizzaStore box\n";
}


void CPizza::setName(std::string name)
{
	this->name = name;
}


std::string CPizza::getName(void)
{
	return name;
}
