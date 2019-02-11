/*************************************************
Copyright:Lee
Author:Lee
Date:2019-02-11
Description:��������ģʽ�в�Ʒ������
**************************************************/
#pragma once
#include <string>
#include <vector>
typedef std::vector<std::string> toppingList;
class CPizza
{
public:
	CPizza(void);
	~CPizza(void);
	
	virtual void prepare(void);
	virtual void bake(void);
	virtual void cut(void);
	virtual void box(void);
	std::string getName(void);
protected:
	std::string name, dough, sauce;
	toppingList toppings;
};

