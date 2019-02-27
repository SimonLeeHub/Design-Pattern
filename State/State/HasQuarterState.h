#pragma once
#include "stateinterface.h"
#include "GumballMachine.h"
class CHasQuarterState :
	public CStateInterface
{
public:
	CHasQuarterState(CGumballMachine* pGumballMachine);
	~CHasQuarterState(void);

	CGumballMachine* pGumballMachine;
	void insertQuarter(void);
	void ejectQuarter(void);
	bool turnCrank(void);
	void dispense(void);
};

