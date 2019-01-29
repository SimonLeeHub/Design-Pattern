// Decorator.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "Espresso.h"
#include "HouseBlend.h"
#include "Mocha.h"
#include "Milk.h"
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	// �������Ϊ�����β�ѡ���ö�̬�����ڴ�ķ�ʽ������������������������Ϊ�����ԣ��������zombie memory
	CBeverage* pBeverage1 = new CEspresso;
	
	pBeverage1 = new CMocha(pBeverage1);
	pBeverage1 = new CMocha(pBeverage1);
	pBeverage1 = new CMilk(pBeverage1);
	std::cout<<pBeverage1->getDescription()<<" : "<<pBeverage1->cost()<<" $"<<std::endl;

	std::cout<<std::endl<<"Press any key to exit...";
	getchar();
	return 0;
}

