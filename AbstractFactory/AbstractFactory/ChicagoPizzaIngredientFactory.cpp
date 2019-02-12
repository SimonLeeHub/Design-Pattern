#include "stdafx.h"
#include "ChicagoPizzaIngredientFactory.h"
#include "ChicagoDough.h"
#include "ChicagoSauce.h"


CChicagoPizzaIngredientFactory::CChicagoPizzaIngredientFactory(void)
{
}


CChicagoPizzaIngredientFactory::~CChicagoPizzaIngredientFactory(void)
{
}

CDough* CChicagoPizzaIngredientFactory::createDough(void)
{
	return new CChicagoDough;
}


CSauce* CChicagoPizzaIngredientFactory::createSauce(void)
{
	return new CChicagoSauce;
}
