#include "stdafx.h"
#include "Pizza.h"
#include <iostream>


CPizza::CPizza(void)
{
}


CPizza::~CPizza(void)
{
}


void CPizza::prepare(void)
{
	std::cout<<"Preparing "<<name<<std::endl;
	std::cout<<"Tossing dough..."<<std::endl;
	std::cout<<"Adding sauce..."<<std::endl;
	std::cout<<"Adding toppings: "<<std::endl;
	toppingList::iterator iter,iter_end;
	iter_end = toppings.end();
	for(iter = toppings.begin();iter != iter_end;++iter)
	{
		std::cout<<*iter<<" ";
	}
	std::cout<<std::endl;
}


void CPizza::bake(void)
{
	std::cout<<"Bake for 25 minutes at 350"<<std::endl;
}


void CPizza::cut(void)
{
	std::cout<<"Cutting the pizza into diagonal slices"<<std::endl;
}


void CPizza::box(void)
{
	std::cout<<"Place pizza in official PizzaStore box"<<std::endl;
}


std::string CPizza::getName(void)
{
	return name;
}
