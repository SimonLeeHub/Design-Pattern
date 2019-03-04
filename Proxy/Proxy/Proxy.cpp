// Proxy.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "LeeSalary.h"
#include "SalaryProxy.h"

int _tmain(int argc, _TCHAR* argv[])
{
	CLeeSalary mLee(15000);
	CSalaryProxy mSalaryProxy(&mLee);
	mSalaryProxy.printSalary();

	std::cout<<"Proxy pattern has been tested, press any key to exit...\n";
	getchar();
	getchar();
	return 0;
}

