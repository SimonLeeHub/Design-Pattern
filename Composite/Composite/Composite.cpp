// Composite.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "MenuItem.h"
#include "CMenu.h"
#include "Waitress.h"

int _tmain(int argc, _TCHAR* argv[])
{
	CMenuComponent* pPancake = new CCMenu("PancakeMenu", "Pancake House");
	CMenuComponent* pDiner = new CCMenu("DinerMenu", "Diner House");
	CMenuComponent* pDessert = new CCMenu("DessertMenu", "Diner House");
	CMenuComponent* pAllMenu = new CCMenu("AllMenu", "Restaurant");

	pAllMenu->add(pPancake);
	pAllMenu->add(pDiner);
	pPancake->add(new CMenuItem("Pancake1", "Pancake", 1.0, true));
	pPancake->add(new CMenuItem("Pancake2", "Pancake", 2.0, true));
	pPancake->add(new CMenuItem("Pancake3", "Pancake", 3.0, false));
	pPancake->add(new CMenuItem("Pancake4", "Pancake", 4.0, false));
	pDiner->add(new CMenuItem("Diner1", "Diner", 1.0, true));
	pDiner->add(new CMenuItem("Diner2", "Diner", 2.0, true));
	pDiner->add(pDessert);
	pDiner->add(new CMenuItem("Diner3", "Diner", 3.0, false));
	pDiner->add(new CMenuItem("Diner4", "Diner", 4.0, false));
	pDiner->add(new CMenuItem("Diner5", "Diner", 5.0, false));
	pDiner->remove("Diner5");
	pDessert->add(new CMenuItem("Dessert1", "Diner", 1.0, true));
	pDessert->add(new CMenuItem("Dessert2", "Diner", 2.0, true));
	pDessert->add(new CMenuItem("Dessert3", "Diner", 3.0, false));
	pDessert->add(new CMenuItem("Dessert4", "Diner", 4.0, false));

	CWaitress mWaitress(pAllMenu);
	mWaitress.printMenu();
	mWaitress.printVegetarianMenu();
	
	std::cout<<"\nComposite pattern has been tested, press any key to exit...\n";
	getchar();
	return 0;
}

