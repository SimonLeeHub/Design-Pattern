#include "stdafx.h"
#include "SalaryProxy.h"


CSalaryProxy::CSalaryProxy(CSalary* pSalary)
{
	this->pSalary = pSalary;
}


CSalaryProxy::~CSalaryProxy(void)
{
}


void CSalaryProxy::printSalary(void)
{
	while(1)
	{
		std::string password;
		std::cout<<"Please enter your password('q' to quit):\n";
		std::cin>>password;
		if(password == "q")
		{
			break;
		}
		if(password == "haha")
		{
			pSalary->printSalary();
			break;
		}
		else
		{
			std::cout<<"Wrong password!\n";
		}
	}
	
	
}
