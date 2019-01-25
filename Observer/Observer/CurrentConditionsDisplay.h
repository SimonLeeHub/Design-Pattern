#pragma once
#include "ObserverInf.h"
#include "DisplayInf.h"
#include <string>
#include "Subject.h"
class CCurrentConditionsDisplay:public CObserverInf, public CDisplayInf
{
public:
	CCurrentConditionsDisplay(std::string name, CSubject* pSubject);
	~CCurrentConditionsDisplay(void);

	void update(float temp, float humidity, float pressure);

private:
	float temp, humidity, pressure;
public:
	void display(void);
};

