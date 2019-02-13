#pragma once
#include "icommand.h"
#include "Stereo.h"
class CStereoOnCommand :
	public CICommand
{
public:
	CStereoOnCommand(CStereo* pStereo);
	~CStereoOnCommand(void);
	CStereo* pStereo;
	void execute(void);
	void undo(void);
};

