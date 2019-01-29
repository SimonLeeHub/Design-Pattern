#include "stdafx.h"
#include "Singleton1.h"

CSingleton1* CSingleton1::pSingleton1 = NULL; 
CSingleton1::CSingleton1(void)
{
}


CSingleton1::~CSingleton1(void)
{
}


CSingleton1* CSingleton1::getInstance(void)
{
	// 线程不安全之所在
	if(!pSingleton1)
	{
		pSingleton1 = new CSingleton1;
	}
	return pSingleton1;
}
