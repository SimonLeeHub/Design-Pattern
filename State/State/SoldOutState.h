#pragma once
#include "stateinterface.h"
#include "GumballMachine.h"
class CSoldOutState :
	public CStateInterface
{
public:
	CSoldOutState(CGumballMachine* pGumballMachine);
	~CSoldOutState(void);

	CGumballMachine* pGumballMachine;
	void insertQuarter(void);
	void ejectQuarter(void);
	bool turnCrank(void);
	void dispense(void);
	void refill(int count);
};

