#pragma once
#include <string>
class CStereo
{
public:
	CStereo(std::string name, std::string CDname);
	~CStereo(void);
	std::string name, CDname;;
	void on(void);
	void off(void);
	void setCD();
};

