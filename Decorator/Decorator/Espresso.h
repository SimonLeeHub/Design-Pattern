#pragma once
#include "beverage.h"
class CEspresso :
	public CBeverage
{
public:
	CEspresso(void);
	~CEspresso(void);
	double cost(void);
};

