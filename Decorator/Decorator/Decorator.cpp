// Decorator.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Espresso.h"
#include "HouseBlend.h"
#include "Mocha.h"
#include "Milk.h"
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	// 这里仅仅为了掩饰才选择用动态分配内存的方式，真正生产不允许这样，因为很明显，这里会有zombie memory
	CBeverage* pBeverage1 = new CEspresso;
	
	pBeverage1 = new CMocha(pBeverage1);
	pBeverage1 = new CMocha(pBeverage1);
	pBeverage1 = new CMilk(pBeverage1);
	std::cout<<pBeverage1->getDescription()<<" : "<<pBeverage1->cost()<<" $"<<std::endl;

	std::cout<<std::endl<<"Press any key to exit...";
	getchar();
	return 0;
}

