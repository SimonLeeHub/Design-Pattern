// Observer.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "WeatherData.h"
#include "CurrentConditionsDisplay.h"
#include <Windows.h>
#include <iostream>


int _tmain(int argc, _TCHAR* argv[])
{
	std::cout<<"Observer pattern test...\n\n";
	CWeatherData weatherStation;
	CCurrentConditionsDisplay pattern1("pattern1", &weatherStation);
	CCurrentConditionsDisplay pattern2("pattern2", &weatherStation);

	weatherStation.setMeasurement(80, 65, 30.4f);
	Sleep(1000);
	std::cout<<"\n";
	weatherStation.setMeasurement(82, 70, 29.2f);
	Sleep(2000);
	std::cout<<"\n";
	std::cout<<"Remove patter1 from observer roster!\n";
	weatherStation.removeObserver(&pattern1);
	weatherStation.setMeasurement(78, 90, 29.2f);

	std::cout<<"\n\n";
	std::cout<<"Press any key to exit!!";
	getchar();
	return 0;
}

