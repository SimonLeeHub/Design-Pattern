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
	/// \brief 递归打印
    /// 
    /// 如果是菜单项，则单次递归打印终止
	void print(void);
	CCIterator* createIterator(void);
};

