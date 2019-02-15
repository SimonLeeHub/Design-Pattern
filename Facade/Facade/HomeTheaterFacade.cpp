#include "stdafx.h"
#include "HomeTheaterFacade.h"


CHomeTheaterFacade::CHomeTheaterFacade(CPopcornPopper* pPopper, CScreen* pScreen, CCD* pCD)
{
	this->pPopper = pPopper;
	this->pScreen = pScreen;
	this->pCD = pCD;
}


CHomeTheaterFacade::~CHomeTheaterFacade(void)
{
}


void CHomeTheaterFacade::watchMovie(void)
{
	pPopper->on();
	pPopper->pop();
	pScreen->down();
	pCD->on();
	pCD->play();
}


void CHomeTheaterFacade::endMovie(void)
{
	pPopper->off();
	pScreen->up();
	pCD->off();
}
