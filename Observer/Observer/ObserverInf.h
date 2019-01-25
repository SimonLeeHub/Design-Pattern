#pragma once
#include <string>

class CObserverInf
{
public:
	CObserverInf(void);
	~CObserverInf(void);

	std::string name;
	

	virtual void update(float temp, float humidity, float pressure) = 0;
};

