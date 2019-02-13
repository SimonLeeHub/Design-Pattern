#pragma once
#include <string>
class CLight
{
public:
	CLight(std::string name);
	~CLight(void);
	std::string name;
	void on(void);
	void off(void);
};

