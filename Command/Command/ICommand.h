/************************************************* 
Copyright:Lee 
Author:Lee 
Date:2019-02-13 
Description:����ӿ� 
**************************************************/  
#pragma once
class CICommand
{
public:
	CICommand(void);
	virtual ~CICommand(void);
	virtual void execute(void) = 0;
	virtual void undo(void) = 0;
};

