#include "stdafx.h"
#include "LightOffCommand.h"


CLightOffCommand::CLightOffCommand(CLight *pLight)
{
	this->pLight = pLight;
}


CLightOffCommand::~CLightOffCommand(void)
{
}

void CLightOffCommand::execute(void)
{
	pLight->off();
}


void CLightOffCommand::undo(void)
{
	pLight->on();
}
