/*!
* \brief ��������
* 
* ����������Ʊ��������ķ���Ȩ��
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

