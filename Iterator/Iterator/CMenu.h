/*!
* \brief �˵���
* 
* ��׼���˵��ӿڣ����˵���Ů�д�����
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

