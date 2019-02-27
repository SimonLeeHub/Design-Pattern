#include "stdafx.h"
#include "NoQuarterState.h"


CNoQuarterState::CNoQuarterState(CGumballMachine* pGumballMachine)
{
	this->pGumballMachine = pGumballMachine;
}


CNoQuarterState::~CNoQuarterState(void)
{
}

void CNoQuarterState::insertQuarter(void)
{
	std::cout<<"You inserted a quarter.\n";
	pGumballMachine->setState(pGumballMachine->getHasQuarterState());

}
void CNoQuarterState::ejectQuarter(void)
{
	std::cout<<"You have't inserted a quarter.\n";
}

bool CNoQuarterState::turnCrank(void)
{
	std::cout<<"You turned, but there's no quarter.\n";
	return false;
}

void CNoQuarterState::dispense(void)
{
	std::cout<<"You need to pay first.\n";
}