#include "stdafx.h"
#include "HasQuarterState.h"


CHasQuarterState::CHasQuarterState(CGumballMachine* pGumballMachine)
{
	this->pGumballMachine = pGumballMachine;
}


CHasQuarterState::~CHasQuarterState(void)
{
}

void CHasQuarterState::insertQuarter(void)
{
	std::cout<<"You can't instert another quarter.\n";
}
void CHasQuarterState::ejectQuarter(void)
{
	std::cout<<"Quarter returned.\n";
	pGumballMachine->setState(pGumballMachine->getNoQuarterState());
}

bool CHasQuarterState::turnCrank(void)
{
	std::cout<<"You turned...\n";
	pGumballMachine->setState(pGumballMachine->getSoldState());
	return true;
}

void CHasQuarterState::dispense(void)
{
	std::cout<<"Please wait...\n";
}
