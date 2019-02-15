/************************************************* 
Copyright:Lee 
Author:Lee
Date:2019-02-15 
Description:����࣬����ϵͳ�ĸ��ӽӿڼ� 
**************************************************/ 
#pragma once
#include "PopcornPopper.h"
#include "Screen.h"
#include "CD.h"
class CHomeTheaterFacade
{
public:
	CHomeTheaterFacade(CPopcornPopper* pPopper, CScreen* pScreen, CCD* pCD);
	~CHomeTheaterFacade(void);
	CPopcornPopper* pPopper;
	CScreen* pScreen;
	CCD* pCD;
	void watchMovie(void);
	void endMovie(void);
};

