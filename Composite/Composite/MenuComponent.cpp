#include "stdafx.h"
#include "MenuComponent.h"


CMenuComponent::CMenuComponent(void)
{
}


CMenuComponent::~CMenuComponent(void)
{
}

void CMenuComponent::add(CMenuComponent* pMenuComponent)
{
	throw std::string("No add.\n");
}

void CMenuComponent::remove(std::string name)
{
	throw std::string("No remove.\n");
}


std::string CMenuComponent::getName(void)
{
	throw std::string("No getName.\n");
}


std::string CMenuComponent::getDescription(void)
{
	throw std::string("No getDescription.\n");
}


double CMenuComponent::getPrice(void)
{
	throw std::string("No getPrice.\n");
}


bool CMenuComponent::isVegetarian(void)
{
	throw std::string("No isVegetarian.\n");
}


void CMenuComponent::print(void)
{
	throw std::string("No print.\n");
}
