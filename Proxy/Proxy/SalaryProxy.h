/*!
* \brief 保护代理
* 
* 保护代理控制被代理对象的访问权限
* \author Lee
* \date 2019.03.04
*/
#pragma once
#include "salary.h"
class CSalaryProxy :
	public CSalary
{
public:
	CSalaryProxy(CSalary* pSalary);
	~CSalaryProxy(void);
	void printSalary(void);
	CSalary* pSalary;
};

