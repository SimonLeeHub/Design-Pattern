// TemplateMethod.cpp : �������̨Ӧ�ó������ڵ㡣
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
	getchar(); //ϵͳ���뻺�����ᱣ��һ�����з�
	getchar();
	return 0;
}

