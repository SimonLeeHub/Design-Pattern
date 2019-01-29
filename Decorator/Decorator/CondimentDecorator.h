#pragma once
#include "beverage.h"
class CCondimentDecorator :
	public CBeverage
{
public:
	CCondimentDecorator(void);
	~CCondimentDecorator(void);

	virtual std::string getDescription(void) = 0;
};

