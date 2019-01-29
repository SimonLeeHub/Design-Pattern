#include "stdafx.h"
#include "Espresso.h"


CEspresso::CEspresso(void)
{
	description = "Espresso";
}


CEspresso::~CEspresso(void)
{
}


double CEspresso::cost(void)
{
	return 1.99;
}
