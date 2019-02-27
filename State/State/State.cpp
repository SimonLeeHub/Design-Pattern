// State.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "GumballMachine.h"

int _tmain(int argc, _TCHAR* argv[])
{
	CGumballMachine mGumballMachine(5);
	mGumballMachine.ejectQuarter();
	mGumballMachine.insertQuarter();
	mGumballMachine.ejectQuarter();
	mGumballMachine.insertQuarter();
	mGumballMachine.turnCrank();
	mGumballMachine.insertQuarter();
	mGumballMachine.turnCrank();
	mGumballMachine.insertQuarter();
	mGumballMachine.turnCrank();
	mGumballMachine.insertQuarter();
	mGumballMachine.turnCrank();
	mGumballMachine.insertQuarter();
	mGumballMachine.turnCrank();
	mGumballMachine.insertQuarter();
	mGumballMachine.turnCrank();
	mGumballMachine.refill(10);
	mGumballMachine.insertQuarter();
	mGumballMachine.turnCrank();

	std::cout<<"\nState pattern has been tested, press any key to exit...\n";

	getchar();
	return 0;
}

