// TemplateMethod.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "CoffeeWithHook.h"
#include "TeaWithHook.h"

int _tmain(int argc, _TCHAR* argv[])
{
	CCoffeeWithHook mCoffee;
	CTeaWithHook mTea;

	std::cout<<"\nMaking Coffee...\n";
	mCoffee.prepareRecipe();

	std::cout<<"\nMaking Tea...\n";
	mTea.prepareRecipe();

	std::cout<<"TemplateMethod pattern has been tested, press any key to exit...\n";
	getchar(); //系统输入缓冲区会保留一个换行符
	getchar();
	return 0;
}

