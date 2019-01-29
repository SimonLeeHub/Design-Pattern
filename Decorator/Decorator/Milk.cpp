#include "stdafx.h"
#include "Milk.h"


CMilk::CMilk(CBeverage* pBeverage)
{
	this->pBeverage = pBeverage;
}


CMilk::~CMilk(void)
{
}


std::string CMilk::getDescription(void)
{
	return pBeverage->getDescription() + ", Milk";
}


double CMilk::cost(void)
{
	return pBeverage->cost() + .30;
}
