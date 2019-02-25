#pragma once
#include "CMenu.h"
#include <vector>
typedef std::vector<CCMenu*> MenuRoster;
class CWaitress
{
public:
	CWaitress(MenuRoster* pRoster);
	~CWaitress(void);
	MenuRoster* pRoster;
	void printMenu(void);
	void printMenu(CCIterator* pIterator);
};

