/*!
* \brief 代理和被代理对象的通用接口 
* 
* \author Lee
* \date 2019.03.04
*/
#pragma once
class CSalary
{
public:
	CSalary(void);
	virtual ~CSalary(void);
	virtual void printSalary(void) = 0;
};

