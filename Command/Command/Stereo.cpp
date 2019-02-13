#include "stdafx.h"
#include "Stereo.h"


CStereo::CStereo(std::string name, std::string CDname)
{
	this->name = name;
	this->CDname = CDname;
}


CStereo::~CStereo(void)
{
}


void CStereo::on(void)
{
	std::cout<<name<<" stereo is on.\n";
}


void CStereo::off(void)
{
	std::cout<<name<<" stereo is off.\n";
}


void CStereo::setCD()
{
	std::cout<<name<<" stereo has set CD "<<CDname<<".\n";
}
