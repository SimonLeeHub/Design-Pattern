#pragma once
#include <string>

class CBeverage
{
public:
	CBeverage(void);
	~CBeverage(void);

	std::string description;
	virtual std::string getDescription(void);	//此处注意，由于CCondimentDecorator类会重写此函数，为了保证多态，需将此函数改写为虚函数

	virtual double cost(void) = 0;
};

