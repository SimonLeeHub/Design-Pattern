/*!
* \brief 迭代器接口类
* 
* 提供了hasNext与next方法供客户端遍历
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

