#pragma once
#include "quackbehavior.h"
class CSqueak :
	public CQuackBehavior
{
public:
	CSqueak(void);
	~CSqueak(void);
	void quack(void);
};

