#pragma once
#include "flybehavior.h"
class CFlyWithWings :
	public CFlyBehavior
{
public:
	CFlyWithWings(void);
	~CFlyWithWings(void);

	
	void fly(void);
};

