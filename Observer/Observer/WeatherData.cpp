#include "stdafx.h"
#include "WeatherData.h"


CWeatherData::CWeatherData(void)
{
}


CWeatherData::~CWeatherData(void)
{
}


void CWeatherData::setMeasurement(float temp, float humidity, float pressure)
{
	this->temp = temp;
	this->humidity = humidity;
	this->pressure = pressure;
	notifyObservers();
}
