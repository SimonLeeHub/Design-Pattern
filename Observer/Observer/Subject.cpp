#include "stdafx.h"
#include "Subject.h"


CSubject::CSubject(void)
{
}


CSubject::~CSubject(void)
{
}

void CSubject::registerObserver(CObserverInf* pObserver)
{
	ObserverMap::iterator iter;
	iter = ObserverRoster.find(pObserver->name);
	if(iter == ObserverRoster.end())
	{
		ObserverRoster.insert(std::pair<std::string, CObserverInf*>(pObserver->name,pObserver));
	}
}


void CSubject::removeObserver(CObserverInf* pObserver)
{
	ObserverMap::iterator iter;
	iter = ObserverRoster.find(pObserver->name);
	if (iter != ObserverRoster.end())
	{
		ObserverRoster.erase(pObserver->name);
	}	
}


void CSubject::notifyObservers(void)
{
	ObserverMap::iterator iter_end = ObserverRoster.end();
	for(ObserverMap::iterator iter = ObserverRoster.begin(); iter != iter_end; iter++)
	{
		iter->second->update(temp, humidity, pressure);
	}
}