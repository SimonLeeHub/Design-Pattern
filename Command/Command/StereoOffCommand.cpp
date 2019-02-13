#include "stdafx.h"
#include "StereoOffCommand.h"


CStereoOffCommand::CStereoOffCommand(CStereo* pStereo)
{
	this->pStereo = pStereo;
}


CStereoOffCommand::~CStereoOffCommand(void)
{
}

void CStereoOffCommand::execute(void)
{
	pStereo->off();
}


void CStereoOffCommand::undo(void)
{
	pStereo->on();
	pStereo->setCD();
}
