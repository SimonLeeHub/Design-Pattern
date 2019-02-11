/*************************************************
Copyright:Lee
Author:Lee
Date:2019-02-11
Description:工厂方法模式中创建者抽象类
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
	//工厂方法，将具体类的创建委托给子类实现
	virtual CPizza* createPizza(std::string type) = 0;
};

