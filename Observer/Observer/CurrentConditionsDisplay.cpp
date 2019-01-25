#include "stdafx.h"
#include "CurrentConditionsDisplay.h"
#include <iostream>


CCurrentConditionsDisplay::CCurrentConditionsDisplay(std::string name, CSubject* pSubject)
{
	this->name = name;
	pSubject->registerObserver(this);
}


CCurrentConditionsDisplay::~CCurrentConditionsDisplay(void)
{
}


void CCurrentConditionsDisplay::update(float temp, float humidity, float pressure)
{
	this->temp = temp;
	this->humidity = humidity;
	this->pressure = pressure;
	display();
}


void CCurrentConditionsDisplay::display(void)
{
	std::cout<<name<<":  "<<temp<<"F  "<<humidity<<"% humidity  "<<pressure<<"kPa"<<std::endl;
}
