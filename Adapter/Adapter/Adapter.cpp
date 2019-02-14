// Adapter.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "MallardDuck.h"
#include "WildTurkey.h"
#include "TurkeyAdapter.h"

void testDuck(CDuck* pDuck)
{
	pDuck->quack();
	pDuck->fly();
}
int _tmain(int argc, _TCHAR* argv[])
{
	CMallardDuck mMallardDuck;
	CWildTurkey mWildTurkey;
	CTurkeyAdapter mTurkeyAdapter(&mWildTurkey);

	std::cout<<"The duck says...\n";
	testDuck(&mMallardDuck);
	std::cout<<"The turkey says...\n";
	mWildTurkey.gobble();
	mWildTurkey.fly();
	std::cout<<"The turkey adapter says...\n";
	testDuck(&mTurkeyAdapter);

	std::cout<<"Adapter pattern has been tested, press any key to exit...\n";
	getchar();
	return 0;
}

