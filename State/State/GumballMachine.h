#pragma once
#include "StateInterface.h"
class CNoQuarterState;
class CHasQuarterState;
class CSoldState;
class CSoldOutState;
class CGumballMachine
{
public:
	CGumballMachine(int count);
	~CGumballMachine(void);
	int count;
	CStateInterface* pState;
	CStateInterface* pNoQuarterState;
	CStateInterface* pHasQuarterState;
	CStateInterface* pSoldState;
	CStateInterface* pSoldOutState;
	void setState(CStateInterface* pState);
	CStateInterface* getNoQuarterState(void);
	CStateInterface* getHasQuarterState(void);
	CStateInterface* getSoldState(void);
	void releaseBall(void);
	int getCount(void);
	CStateInterface* getSoldOutState(void);
	void insertQuarter(void);
	void ejectQuarter(void);
	void turnCrank(void);
	void refill(int count);
	void setCount(int count);
};

