#include "stdafx.h"
#include "LeeSalary.h"


CLeeSalary::CLeeSalary(double money)
{
	this->money = money;
}


CLeeSalary::~CLeeSalary(void)
{
}


void CLeeSalary::printSalary(void)
{
	std::cout<<"Lee's salary is "<<money<<" RMB.\n";
}
