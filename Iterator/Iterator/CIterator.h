/*!
* \brief �������ӿ���
* 
* �ṩ��hasNext��next�������ͻ��˱���
* 
* \author Lee 
* \date 2019.02.25
*/
#pragma once
class CCIterator
{
public:
	CCIterator(void);
	virtual ~CCIterator(void);
	virtual bool hasNext(void) = 0;
	virtual void* next(void) = 0;
};

