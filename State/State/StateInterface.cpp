#include "stdafx.h"
#include "StateInterface.h"


CStateInterface::CStateInterface(void)
{
}


CStateInterface::~CStateInterface(void)
{
}

void CStateInterface::refill(int count)
{
	std::cout<<"The machien is not empty, you don't need to refill the machien.\n";
}


