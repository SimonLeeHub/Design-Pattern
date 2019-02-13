#include "stdafx.h"
#include "NoCommand.h"


CNoCommand::CNoCommand(void)
{
}


CNoCommand::~CNoCommand(void)
{
}


void CNoCommand::execute(void)
{
	std::cout<<"Noing needs to execute...\n";
}


void CNoCommand::undo(void)
{
	std::cout<<"Noing needs to undo...\n";
}
