#pragma once
#include "beverage.h"
class CHouseBlend :
	public CBeverage
{
public:
	CHouseBlend(void);
	~CHouseBlend(void);
	double cost(void);
};

