// FactoryMethod.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "NYPizzaStore.h"
#include "ChicagoPizzaStore.h"
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	CNYPizzaStore mNYPizzaStore;
	mNYPizzaStore.orderPizza("Cheese");
	mNYPizzaStore.cleanTable();
	mNYPizzaStore.cleanTable();

	CChicagoPizzaStore mChicagoPizzaStore;
	mChicagoPizzaStore.cleanTable();
	mChicagoPizzaStore.orderPizza("wrongName");
	mChicagoPizzaStore.cleanTable();
	mChicagoPizzaStore.orderPizza("Cheese");
	mChicagoPizzaStore.cleanTable();

	std::cout<<"FactoryMethod pattern has been tested, press any key to exit...";
	getchar();
	return 0;
}

