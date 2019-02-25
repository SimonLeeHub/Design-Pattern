// Iterator.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "PancakeHouseMenu.h"
#include "DinerMenu.h"
#include "Waitress.h"
#include <vector>
typedef std::vector<CCMenu*> MenuRoster;

int _tmain(int argc, _TCHAR* argv[])
{
	CPancakeHouseMenu mPancakeHouse;
	CDinerMenu mDiner;
	MenuRoster Roster;
	Roster.push_back(&mPancakeHouse);
	Roster.push_back(&mDiner);
	CWaitress mWaitress(&Roster);
	mWaitress.printMenu();

	std::cout<<"\nIterator pattern has been tested, press any key to exit...\n";
	getchar();
	return 0;
}

