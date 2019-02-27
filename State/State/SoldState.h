#pragma once
#include "stateinterface.h"
#include "GumballMachine.h"
class CSoldState :
	public CStateInterface
{
public:
	CSoldState(CGumballMachine* pGumballMachine);
	~CSoldState(void);

	CGumballMachine* pGumballMachine;
	void insertQuarter(void);
	void ejectQuarter(void);
	bool turnCrank(void);
	void dispense(void);
};

