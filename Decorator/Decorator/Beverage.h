#pragma once
#include <string>

class CBeverage
{
public:
	CBeverage(void);
	~CBeverage(void);

	std::string description;
	virtual std::string getDescription(void);	//�˴�ע�⣬����CCondimentDecorator�����д�˺�����Ϊ�˱�֤��̬���轫�˺�����дΪ�麯��

	virtual double cost(void) = 0;
};

