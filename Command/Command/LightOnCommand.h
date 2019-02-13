#pragma once
#include "icommand.h"
#include "Light.h"
class CLightOnCommand :
	public CICommand
{
public:
	CLightOnCommand(CLight *pLight);
	~CLightOnCommand(void);
	CLight *pLight;

	void execute(void);
	void undo(void);
};

