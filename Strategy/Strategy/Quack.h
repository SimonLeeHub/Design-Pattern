#pragma once
#include "quackbehavior.h"
class CQuack :
	public CQuackBehavior
{
public:
	CQuack(void);
	~CQuack(void);
	void quack(void);
};

