#include "stdafx.h"
#include "Beverage.h"


CBeverage::CBeverage(void)
{
	description = "Unknown Beverage";
}


CBeverage::~CBeverage(void)
{
}


std::string CBeverage::getDescription(void)
{
	return description;
}
