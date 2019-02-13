#include "stdafx.h"
#include "Invoker.h"
#include "NoCommand.h"

CInvoker::CInvoker(int nbSlot)
{
	pOnCommand = NULL;
	pOnCommand = new CICommand*[nbSlot];
	pOffCommand = NULL;
	pOffCommand = new CICommand*[nbSlot];
	noCommand = new CNoCommand;
	for(int i=0; i<nbSlot; i++)
	{
		pOnCommand[i] = noCommand;
		pOffCommand[i] = noCommand;
	}
}


CInvoker::~CInvoker(void)
{

	delete[] pOnCommand;
	delete[] pOffCommand;
	delete noCommand;
}


void CInvoker::setCommand(int slot, CICommand* pOnCommand, CICommand* pOffCommand)
{
	this->pOnCommand[slot] = pOnCommand;
	this->pOffCommand[slot] = pOffCommand;
}


void CInvoker::onButtonWasPressed(int slot)
{
	pOnCommand[slot]->execute();
	vCommandStack.push_back(pOnCommand[slot]);
}


void CInvoker::offButtonWasPressed(int slot)
{
	pOffCommand[slot]->execute();
	vCommandStack.push_back(pOffCommand[slot]);
}


void CInvoker::undoButtonWasPressed(void)
{
	if(!vCommandStack.empty())
	{
		vCommandStack.back()->undo();
		vCommandStack.pop_back();
	}
	else
	{
		std::cout<<"Nothing needs to undo.\n";
	}
}
