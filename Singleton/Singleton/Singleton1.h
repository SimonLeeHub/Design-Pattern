#pragma once

/********** ����ʽ **********
�ŵ㣺��ʹ��ʱ�ŷ����ڴ�ռ䣬���Խ�ʡ��Դ
ȱ�㣺�̲߳���ȫ
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

