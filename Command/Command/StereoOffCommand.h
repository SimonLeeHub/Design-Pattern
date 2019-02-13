#pragma once
#include "icommand.h"
#include "Stereo.h"
class CStereoOffCommand :
	public CICommand
{
public:
	CStereoOffCommand(CStereo* pStereo);
	~CStereoOffCommand(void);
	CStereo* pStereo;
	void execute(void);
	void undo(void);
};

