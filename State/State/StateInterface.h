/*!
* \brief ״̬�ӿ���
* 
* �ṩÿ��״̬�Ķ����ӿ� 
* 
* \author Lee 
* \date 2019.02.27 
*/
#pragma once
class CStateInterface
{
public:
	CStateInterface(void);
	~CStateInterface(void);
	virtual void insertQuarter(void) = 0;
	virtual void ejectQuarter(void) = 0;
	virtual bool turnCrank(void) = 0;
	virtual void dispense(void) = 0;
	virtual void refill(int count);
};

