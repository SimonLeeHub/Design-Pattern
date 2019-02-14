/************************************************* 
Copyright:Lee 
Author:Lee
Date:2019-02-14 
Description:被适配对象接口 
**************************************************/ 
#pragma once
class CTurkey
{
public:
	CTurkey(void);
	virtual ~CTurkey(void);

	virtual void gobble(void) = 0;
	virtual void fly(void) = 0;
};

