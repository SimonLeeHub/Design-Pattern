#include "stdafx.h"
#include "TurkeyAdapter.h"


CTurkeyAdapter::CTurkeyAdapter(CTurkey* pTurkey)
{
	this->pTurkey = pTurkey;
}


CTurkeyAdapter::~CTurkeyAdapter(void)
{
}


void CTurkeyAdapter::quack(void)
{
	pTurkey->gobble();
}


void CTurkeyAdapter::fly(void)
{
	for(int i=0; i<5; i++)
	{
		pTurkey->fly();
	}
}
