#pragma once

/********** 懒汉式 **********
优点：在使用时才分配内存空间，可以节省资源
缺点：线程不安全
*****************************/
class CSingleton1
{
private:
	CSingleton1(void);
	~CSingleton1(void);
	static CSingleton1* pSingleton1;


public:
	static CSingleton1* getInstance(void);
};

