#pragma once
#include "flybehavior.h"
class CFlyNoWay :
	public CFlyBehavior
{
public:
	CFlyNoWay(void);
	~CFlyNoWay(void);
	void fly(void);
};

