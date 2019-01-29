#pragma once
#include "condimentdecorator.h"
class CMilk :
	public CCondimentDecorator
{
public:
	CMilk(CBeverage* pBeverage);
	~CMilk(void);

	CBeverage* pBeverage;

	std::string getDescription(void);
	double cost(void);
};

