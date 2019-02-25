/*!
* \brief �˵����ӿ��� 
* 
* �����˵����˵�����û�һ��ͳһ�Ľӿ�
* 
* \author Lee 
* \date 2019.02.25
*/
#pragma once
#include "CIterator.h"
class CMenuComponent
{
public:
	CMenuComponent(void);
	virtual ~CMenuComponent(void);
	virtual void add(CMenuComponent* pMenuComponent);
	virtual void remove(std::string name);
	virtual std::string getName(void);
	virtual std::string getDescription(void);
	virtual double getPrice(void);
	virtual bool isVegetarian(void);
	virtual void print(void);
	virtual CCIterator* createIterator(void) = 0;
};

