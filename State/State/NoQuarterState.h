#pragma once
#include "stateinterface.h"
#include "GumballMachine.h"
class CNoQuarterState :
	public CStateInterface
{
public:
	CNoQuarterState(CGumballMachine* pGumballMachine);
	~CNoQuarterState(void);

	CGumballMachine* pGumballMachine;
	void insertQuarter(void);
	void ejectQuarter(void);
	bool turnCrank(void);
	void dispense(void);
};

