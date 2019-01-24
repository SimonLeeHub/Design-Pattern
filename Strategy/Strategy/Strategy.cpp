// Strategy.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "ModelDuck.h"
#include "FlyNoWay.h"
#include "Quack.h"
#include "FlyWithWings.h"
#include "Squeak.h"
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	// Model Duck Test
	CModelDuck mModelDuck;
	CFlyNoWay mFlyNoWay;
	CFlyWithWings mFlyWithWings;
	CQuack mQuack;
	CSqueak mSqueak;

	std::cout<<"The first performance..."<<std::endl;
	mModelDuck.setFlyBehavior(&mFlyNoWay);
	mModelDuck.setQuackBehavior(&mQuack);
	mModelDuck.display();
	mModelDuck.performFly();
	mModelDuck.performQuack();

	std::cout<<std::endl<<std::endl;
	std::cout<<"The second performance..."<<std::endl;
	mModelDuck.setFlyBehavior(&mFlyWithWings);
	mModelDuck.setQuackBehavior(&mSqueak);
	mModelDuck.display();
	mModelDuck.performFly();
	mModelDuck.performQuack();

	std::cout<<std::endl<<std::endl;
	std::cout<<"Press any key to exit..."<<std::endl;
	getchar();

	return 0;
}