#include "stdafx.h"
#include "Singleton2.h"


CSingleton2 CSingleton2::mSingleton2;
CSingleton2::CSingleton2(void)
{
}


CSingleton2::~CSingleton2(void)
{
}


CSingleton2* CSingleton2::getInstance(void)
{
	return &mSingleton2;
}
