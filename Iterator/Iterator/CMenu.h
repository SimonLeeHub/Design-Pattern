/*!
* \brief 菜单类
* 
* 标准化菜单接口，将菜单与女招待解耦
* 
* \author Lee 
* \date 2019.02.25
*/
#pragma once
#include "CIterator.h"
class CCMenu
{
public:
	CCMenu(void);
	virtual ~CCMenu(void);
	virtual CCIterator* createIterator(void) = 0;
};

