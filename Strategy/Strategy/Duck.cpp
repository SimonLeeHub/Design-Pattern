#include "stdafx.h"
#include "Duck.h"


CDuck::CDuck(void)
{
}


CDuck::~CDuck(void)
{
}


void CDuck::performFly(void)
{
	mFlyBehavior->fly();
}


void CDuck::performQuack(void)
{
	mQuackBehavior->quack();
}


void CDuck::setFlyBehavior(CFlyBehavior * pFlyBehavior)
{
	mFlyBehavior = pFlyBehavior;
}


void CDuck::setQuackBehavior(CQuackBehavior * pQuackBehavior)
{
	mQuackBehavior = pQuackBehavior;
}
