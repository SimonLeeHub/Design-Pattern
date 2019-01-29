#pragma once

/********** 饿汉式 **********
优点：线程安全
缺点：编译时即分配资源，而且由于静态成员变量初始化顺序没有保障，所以当有
	  两个单例类的构造函数引用对方时有可能出现bug
*****************************/
class CSingleton2
{
private:
	CSingleton2(void);
	~CSingleton2(void);
	static CSingleton2 mSingleton2;

public:
	static CSingleton2* getInstance(void);
};

