#pragma once
#include "ObserverInf.h"
#include <map>
#include <string>
#define ObserverMap std::map<std::string, CObserverInf*>

class CSubject
{
public:
	CSubject(void);
	~CSubject(void);

protected:
	ObserverMap ObserverRoster;
	float temp, humidity, pressure;

public:
	void registerObserver(CObserverInf* pObserver);
	void removeObserver(CObserverInf* pObserver);
	void notifyObservers(void);
};

