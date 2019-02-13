#include "stdafx.h"
#include "LightOnCommand.h"


CLightOnCommand::CLightOnCommand(CLight *pLight)
{
	this->pLight = pLight;
}


CLightOnCommand::~CLightOnCommand(void)
{
}


void CLightOnCommand::execute(void)
{
	pLight->on();
}


void CLightOnCommand::undo(void)
{
	pLight->off();
}
