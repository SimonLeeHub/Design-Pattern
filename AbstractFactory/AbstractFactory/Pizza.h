#pragma once
#include <string>
#include "Dough.h"
#include "Sauce.h"
class CPizza
{
public:
	CPizza(void);
	virtual ~CPizza(void);
	std::string name;
	CDough* pDough;
	CSauce* pSauce;


	virtual void prepare(void) = 0;
	virtual void bake(void);
	virtual void cut(void);
	virtual void box(void);
	void setName(std::string name);
	std::string getName(void);
};

