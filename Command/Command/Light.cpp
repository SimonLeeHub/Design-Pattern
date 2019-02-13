#include "stdafx.h"
#include "Light.h"


CLight::CLight(std::string name)
{
	this->name = name;
}


CLight::~CLight(void)
{
}


void CLight::on(void)
{
	std::cout<<name<<" light is on.\n";
}


void CLight::off(void)
{
	std::cout<<name<<" light is off.\n";
}
