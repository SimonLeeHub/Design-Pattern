#pragma once
#include "salary.h"
class CLeeSalary :
	public CSalary
{
public:
	CLeeSalary(double money);
	~CLeeSalary(void);
	double money;
	void printSalary(void);
};

