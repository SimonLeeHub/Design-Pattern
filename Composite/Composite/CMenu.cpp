#include "stdafx.h"
#include "CMenu.h"


CCMenu::CCMenu(std::string name, std::string description)
{
	this->name = name;
	this->description = description;
	pIterator = NULL;
}


CCMenu::~CCMenu(void)
{
	MenuRoster::iterator iter, iter_end;
	iter_end = roster.end();
	for(iter = roster.begin(); iter != roster.end(); ++iter)
	{
		delete *iter;
	}
	if(pIterator)
	{
		delete pIterator;
		pIterator = NULL;
	}
}

void CCMenu::add(CMenuComponent* pMenuComponent)
{
	roster.push_back(pMenuComponent);
}

void CCMenu::remove(std::string name)
{
	MenuRoster::iterator iter, iter_end;
	iter_end = roster.end();
	for(iter = roster.begin(); iter != roster.end();)
	{
		if((*iter)->getName() == name)
		{
			delete (*iter);
			iter = roster.erase(iter);
		}
		else
		{
			iter++;
		}
	}
}

std::string CCMenu::getName(void)
{
	return name;
}

std::string CCMenu::getDescription(void)
{
	return description;
}

void CCMenu::print(void)
{
	MenuRoster::iterator iter, iter_end;
	iter_end = roster.end();
	for(iter = roster.begin(); iter != roster.end(); ++iter)
	{
		(*iter)->print();
	}
}

CCIterator* CCMenu::createIterator(void)
{
	pIterator = new CCompositeIterator(roster.begin(), roster.end());
	return pIterator;
}
