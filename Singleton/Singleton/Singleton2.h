#pragma once

/********** ����ʽ **********
�ŵ㣺�̰߳�ȫ
ȱ�㣺����ʱ��������Դ���������ھ�̬��Ա������ʼ��˳��û�б��ϣ����Ե���
	  ����������Ĺ��캯�����öԷ�ʱ�п��ܳ���bug
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

