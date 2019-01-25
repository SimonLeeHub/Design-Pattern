#pragma once
#include "subject.h"
class CWeatherData :
	public CSubject
{
public:
	CWeatherData(void);
	~CWeatherData(void);

	void setMeasurement(float temp, float humidity, float pressure);
};

