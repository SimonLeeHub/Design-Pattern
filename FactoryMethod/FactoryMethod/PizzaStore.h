/*************************************************
Copyright:Lee
Author:Lee
Date:2019-02-11
Description:��������ģʽ�д����߳�����
**************************************************/
#pragma once
#include "Pizza.h"
#include <string>
class CPizzaStore
{
public:
	CPizzaStore(void);
	~CPizzaStore(void);
	CPizza* pizza;
	CPizza* orderPizza(std::string type);
	void cleanTable(void);

public:
	//������������������Ĵ���ί�и�����ʵ��
	virtual CPizza* createPizza(std::string type) = 0;
};

