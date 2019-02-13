#pragma once
#include "icommand.h"
class CNoCommand :
	public CICommand
{
public:
	CNoCommand(void);
	~CNoCommand(void);
	void execute(void);
	void undo(void);
};

