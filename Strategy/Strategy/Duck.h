#pragma once
#include "FlyBehavior.h"
#include "QuackBehavior.h"

class CDuck
{
public:
	CDuck(void);
	~CDuck(void);

protected:
	// Abstract classes cannot be instantiated, only pointers can be defined
	CFlyBehavior *mFlyBehavior;
	CQuackBehavior *mQuackBehavior;
public:
	void performFly(void);
	void performQuack(void);
	void setFlyBehavior(CFlyBehavior * pFlyBehavior);
	void setQuackBehavior(CQuackBehavior * pQuackBehavior);

	virtual void display(void) = 0;
};

