#pragma once
#include "caffeinebeveragewithhook.h"
class CCoffeeWithHook :
	public CCaffeineBeverageWithHook
{
public:
	CCoffeeWithHook(void);
	~CCoffeeWithHook(void);
protected:
	void brew(void);
	void addCondiments(void);
	bool customerWantsCondiments(void);
};

