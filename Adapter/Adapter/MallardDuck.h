#pragma once
#include "duck.h"
class CMallardDuck :
	public CDuck
{
public:
	CMallardDuck(void);
	~CMallardDuck(void);

	void quack(void);
	void fly(void);
};

