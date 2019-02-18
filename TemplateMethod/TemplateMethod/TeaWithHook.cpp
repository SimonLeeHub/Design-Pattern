#include "stdafx.h"
#include "TeaWithHook.h"


CTeaWithHook::CTeaWithHook(void)
{
}


CTeaWithHook::~CTeaWithHook(void)
{
}

void CTeaWithHook::brew(void)
{
	std::cout<<"Steeping the tea.\n";
}


void CTeaWithHook::addCondiments(void)
{
	std::cout<<"Adding Lemon.\n";
}


bool CTeaWithHook::customerWantsCondiments(void)
{
	std::string answer;
	std::cout<<"Would you like Lemon with your tea?(y/n)";
	while (true)
	{
		std::cin>>answer;
		std::transform(answer.begin(), answer.end(), answer.begin(), ::toupper);
		if(answer == "Y")
		{
			return true;
		}
		if(answer == "N")
		{
			return false;
		}
		std::cout<<"Please input 'y' or 'n'...\n";
	}
}