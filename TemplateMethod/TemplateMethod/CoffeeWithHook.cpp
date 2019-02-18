#include "stdafx.h"
#include "CoffeeWithHook.h"


CCoffeeWithHook::CCoffeeWithHook(void)
{
}


CCoffeeWithHook::~CCoffeeWithHook(void)
{
}


void CCoffeeWithHook::brew(void)
{
	std::cout<<"Dripping Coffee through filter.\n";
}


void CCoffeeWithHook::addCondiments(void)
{
	std::cout<<"Adding Sugar and Milk.\n";
}


bool CCoffeeWithHook::customerWantsCondiments(void)
{
	std::string answer;
	std::cout<<"Would you like Sugar and Milk with your coffee?(y/n)";
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
