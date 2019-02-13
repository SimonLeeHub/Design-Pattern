#include "stdafx.h"
#include "StereoOnCommand.h"


CStereoOnCommand::CStereoOnCommand(CStereo* pStereo)
{
	this->pStereo = pStereo;
}


CStereoOnCommand::~CStereoOnCommand(void)
{
}


void CStereoOnCommand::execute(void)
{
	pStereo->on();
	pStereo->setCD();
}


void CStereoOnCommand::undo(void)
{
	pStereo->off();
}
