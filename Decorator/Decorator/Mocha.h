#pragma once
#include "condimentdecorator.h"
class CMocha :
	public CCondimentDecorator
{
public:
	CMocha(CBeverage* pBeverage);
	~CMocha(void);

	CBeverage* pBeverage;
	std::string getDescription(void);
	double cost(void);
};

