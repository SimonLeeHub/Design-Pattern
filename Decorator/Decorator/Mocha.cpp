#include "stdafx.h"
#include "Mocha.h"
#include <iostream>


CMocha::CMocha(CBeverage* pBeverage)
{
	this->pBeverage = pBeverage;
}


CMocha::~CMocha(void)
{
}


std::string CMocha::getDescription(void)
{
	return pBeverage->getDescription() + ", Mocha";
}


double CMocha::cost(void)
{
	return pBeverage->cost()+0.20;
}
