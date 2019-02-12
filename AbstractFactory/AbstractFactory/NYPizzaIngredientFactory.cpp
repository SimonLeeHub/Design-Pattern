#include "stdafx.h"
#include "NYPizzaIngredientFactory.h"
#include "NYDough.h"
#include "NYSauce.h"


CNYPizzaIngredientFactory::CNYPizzaIngredientFactory(void)
{
}


CNYPizzaIngredientFactory::~CNYPizzaIngredientFactory(void)
{
}


CDough* CNYPizzaIngredientFactory::createDough(void)
{
	return new CNYDough;
}


CSauce* CNYPizzaIngredientFactory::createSauce(void)
{
	return new CNYSauce;
}
