// Facade.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "HomeTheaterFacade.h"

int _tmain(int argc, _TCHAR* argv[])
{
	CPopcornPopper mPopper;
	CScreen mScreen;
	CCD mCD;
	CHomeTheaterFacade mHomeTheater(&mPopper, &mScreen, &mCD);

	std::cout<<"\nWatch a movie...\n";
	mHomeTheater.watchMovie();
	std::cout<<"\nEnd a movie...\n";
	mHomeTheater.endMovie();

	std::cout<<"Facade pattern has been tested, press any key to exit...\n";
	getchar();
	return 0;
}

