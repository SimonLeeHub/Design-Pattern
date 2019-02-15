#include "stdafx.h"
#include "PopcornPopper.h"


CPopcornPopper::CPopcornPopper(void)
{
}


CPopcornPopper::~CPopcornPopper(void)
{
}


void CPopcornPopper::on(void)
{
	std::cout<<"PopcornPopper is on.\n";
}


void CPopcornPopper::pop(void)
{
	std::cout<<"PopcornPopper begins to pop.\n";
}


void CPopcornPopper::off(void)
{
	std::cout<<"PopcornPopper is off.\n";
}
