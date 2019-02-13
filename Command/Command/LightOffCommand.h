#pragma once
#include "icommand.h"
#include "Light.h"
class CLightOffCommand :
	public CICommand
{
public:
	CLightOffCommand(CLight *pLight);
	~CLightOffCommand(void);
	CLight *pLight;

	void execute(void);
	void undo(void);
};

