/************************************************* 
Copyright:Lee 
Author:Lee
Date:2019-02-14 
Description:Ŀ��ӿ� 
**************************************************/ 
#pragma once
class CDuck
{
public:
	CDuck(void);
	virtual ~CDuck(void);

	virtual void quack(void) = 0;
	virtual void fly(void) = 0;
};

