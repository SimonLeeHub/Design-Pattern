#include "stdafx.h"
#include "SoldState.h"


CSoldState::CSoldState(CGumballMachine* pGumballMachine)
{
	this->pGumballMachine = pGumballMachine;
}


CSoldState::~CSoldState(void)
{
}

void CSoldState::insertQuarter(void)
{
	std::cout<<"Please wait, we're already giving you a gumball.\n";
}
void CSoldState::ejectQuarter(void)
{
	std::cout<<"Sorry, you already turned the crank.\n";
}

bool CSoldState::turnCrank(void)
{
	std::cout<<"Turning twice doesn't get you another gumball.\n";
	return false;
}

void CSoldState::dispense(void)
{
	pGumballMachine->releaseBall();
	if(pGumballMachine->getCount() > 0)
	{
		pGumballMachine->setState(pGumballMachine->getNoQuarterState());
	}
	else
	{
		std::cout<<"Oops, out of gumballs!\n";
		pGumballMachine->setState(pGumballMachine->getSoldOutState());
	}
}
