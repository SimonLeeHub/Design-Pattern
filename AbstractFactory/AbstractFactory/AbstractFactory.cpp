// AbstractFactory.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "NYPizzaStore.h"
#include "ChicagoPizzaStore.h"
#include <iostream>


int _tmain(int argc, _TCHAR* argv[])
{
	CNYPizzaStore mNYPizzaStore;
	mNYPizzaStore.cleanTable();
	mNYPizzaStore.orderPizza("Cheese");
	mNYPizzaStore.cleanTable();
	mNYPizzaStore.cleanTable();

	CChicagoPizzaStore mChicagoPizzaStore;
	mChicagoPizzaStore.orderPizza("Cheese");
	mChicagoPizzaStore.cleanTable();
	mChicagoPizzaStore.orderPizza("wrongType");
	mChicagoPizzaStore.cleanTable();

	std::cout<<"AbstractFactory pattern has been tested, press any key to exit...\n";
	getchar();
	return 0;
}

