#include "stdafx.h"
#include "CaffeineBeverageWithHook.h"


CCaffeineBeverageWithHook::CCaffeineBeverageWithHook(void)
{
}


CCaffeineBeverageWithHook::~CCaffeineBeverageWithHook(void)
{
}


void CCaffeineBeverageWithHook::boilWater(void)
{
	std::cout<<"Boiling water.\n";
}


void CCaffeineBeverageWithHook::pourInCup(void)
{
	std::cout<<"Pouring into cup.\n";
}


bool CCaffeineBeverageWithHook::customerWantsCondiments(void)
{
	return true;
}


void CCaffeineBeverageWithHook::prepareRecipe(void)
{
	boilWater();
	brew();
	pourInCup();
	if(customerWantsCondiments())
	{
		addCondiments();
	}
}
