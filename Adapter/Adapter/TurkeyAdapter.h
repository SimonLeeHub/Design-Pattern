/************************************************* 
Copyright:Lee 
Author:Lee
Date:2019-02-14 
Description:∂‘œÛ  ≈‰∆˜ 
**************************************************/ 
#pragma once
#include "duck.h"
#include "Turkey.h"
class CTurkeyAdapter :
	public CDuck
{
public:
	CTurkeyAdapter(CTurkey* pTurkey);
	~CTurkeyAdapter(void);
	CTurkey* pTurkey;
	void quack(void);
	void fly(void);
};

