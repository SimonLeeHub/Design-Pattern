#include "stdafx.h"
#include "SoldOutState.h"


CSoldOutState::CSoldOutState(CGumballMachine* pGumballMachine)
{
	this->pGumballMachine = pGumballMachine;
}


CSoldOutState::~CSoldOutState(void)
{
}

void CSoldOutState::insertQuarter(void)
{
	std::cout<<"You can't insert a quarter, the machien is sold out.\n";
}
void CSoldOutState::ejectQuarter(void)
{
	std::cout<<"You can't eject a quarter, you haven't insert a quarter yet.\n";
}

bool CSoldOutState::turnCrank(void)
{
	std::cout<<"You turned, but there are no gumballs.\n";
	return false;
}

void CSoldOutState::dispense(void)
{
	std::cout<<"No gumball dispensed.\n";
}

void CSoldOutState::refill(int count)
{
	if(count > 0)
	{
		std::cout<<"Refill the machien.\n";
		pGumballMachine->setCount(count);
		pGumballMachine->setState(pGumballMachine->getNoQuarterState());
	}
	else
	{
		std::cout<<"The number of gumball must be positive.\n";
	}
	
}
