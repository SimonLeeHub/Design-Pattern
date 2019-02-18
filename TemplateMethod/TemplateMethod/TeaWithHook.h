#pragma once
#include "caffeinebeveragewithhook.h"
class CTeaWithHook :
	public CCaffeineBeverageWithHook
{
public:
	CTeaWithHook(void);
	~CTeaWithHook(void);
protected:
	void brew(void);
	void addCondiments(void);
	bool customerWantsCondiments(void);
};

