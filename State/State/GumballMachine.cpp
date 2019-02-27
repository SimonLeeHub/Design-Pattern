#include "stdafx.h"
#include "GumballMachine.h"
#include "NoQuarterState.h"
#include "HasQuarterState.h"
#include "SoldState.h"
#include "SoldOutState.h"


CGumballMachine::CGumballMachine(int count)
{
	this->count = count;
	pNoQuarterState = new CNoQuarterState(this);
	pHasQuarterState = new CHasQuarterState(this);
	pSoldState = new CSoldState(this);
	pSoldOutState = new CSoldOutState(this);
	if(count > 0)
	{
		pState = pNoQuarterState;
	}
}


CGumballMachine::~CGumballMachine(void)
{
	delete pNoQuarterState;
	delete pHasQuarterState;
	delete pSoldState;
	delete pSoldOutState;
}


void CGumballMachine::setState(CStateInterface* pState)
{
	this->pState = pState;
}


CStateInterface* CGumballMachine::getNoQuarterState(void)
{
	return pNoQuarterState;
}


CStateInterface* CGumballMachine::getHasQuarterState(void)
{
	return pHasQuarterState;
}


CStateInterface* CGumballMachine::getSoldState(void)
{
	return pSoldState;
}


void CGumballMachine::releaseBall(void)
{
	std::cout<<"A gumball comes rolling out the slot...\n";
	if(count>0) count--;
}


int CGumballMachine::getCount(void)
{
	return count;
}


CStateInterface* CGumballMachine::getSoldOutState(void)
{
	return pSoldOutState;
}


void CGumballMachine::insertQuarter(void)
{
	pState->insertQuarter();
}


void CGumballMachine::ejectQuarter(void)
{
	pState->ejectQuarter();
}


void CGumballMachine::turnCrank(void)
{
	if(pState->turnCrank())
	{
		pState->dispense();
	}
}


void CGumballMachine::refill(int count)
{
	pState->refill(count);
	std::cout<<"The current number of gumballs in the machien is "<<getCount()<<std::endl;
}


void CGumballMachine::setCount(int count)
{
	this->count = count;
}
