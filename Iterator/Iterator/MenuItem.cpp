#include "stdafx.h"
#include "MenuItem.h"


CMenuItem::CMenuItem(std::string name, std::string description, double price, bool vegetarian)
{
	this->name = name;
	this->description = description;
	this->price = price;
	this->vegetarian = vegetarian;
}


CMenuItem::~CMenuItem(void)
{
}


std::string CMenuItem::getName(void)
{
	return name;
}


std::string CMenuItem::getDescription(void)
{
	return description;
}


double CMenuItem::getPrice(void)
{
	return price;
}


bool CMenuItem::isVegetarian(void)
{
	return vegetarian;
}
