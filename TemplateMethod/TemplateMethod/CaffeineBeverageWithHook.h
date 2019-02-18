/************************************************* 
Copyright:Lee 
Author:Lee 
Date:2019-02-18 
Description:模板方法抽象类，customerWantsCondiments方法为钩子
**************************************************/  
#pragma once
class CCaffeineBeverageWithHook
{
public:
	CCaffeineBeverageWithHook(void);
	~CCaffeineBeverageWithHook(void);
	void prepareRecipe(void);
protected:
	void boilWater(void);
	virtual void brew(void) = 0;
	void pourInCup(void);
	virtual void addCondiments(void) = 0;
	virtual bool customerWantsCondiments(void);
};

