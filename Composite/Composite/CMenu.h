#pragma once
#include "menucomponent.h"
#include "CompositeIterator.h"
#include <vector>
typedef std::vector<CMenuComponent*> MenuRoster;
class CCMenu :
	public CMenuComponent
{
public:
	CCMenu(std::string name, std::string description);
	~CCMenu(void);
	std::string name, description;
	MenuRoster roster;
	CCIterator * pIterator;
	void add(CMenuComponent* pMenuComponent);
	void remove(std::string name);
	std::string getName(void);
	std::string getDescription(void);
	/// \brief �ݹ��ӡ
    /// 
    /// ����ǲ˵���򵥴εݹ��ӡ��ֹ
	void print(void);
	CCIterator* createIterator(void);
};

