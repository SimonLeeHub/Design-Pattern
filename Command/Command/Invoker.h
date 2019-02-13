/************************************************* 
Copyright:Lee 
Author:Lee 
Date:2019-02-13 
Description:调用者，包含命令栈，实现多级撤销 
**************************************************/  
#pragma once
#include "ICommand.h"
#include <vector>
typedef std::vector<CICommand*> CommandStack;
class CInvoker
{
public:
	CInvoker(int nbSlot);
	~CInvoker(void);
	CICommand** pOnCommand;
	CICommand** pOffCommand;
	CICommand *noCommand;
	CommandStack vCommandStack;
	void setCommand(int slot, CICommand* pOnCommand, CICommand* pOffCommand);
	void onButtonWasPressed(int slot);
	void offButtonWasPressed(int slot);
	void undoButtonWasPressed(void);
};

