// Command.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Invoker.h"
#include "LightOnCommand.h"
#include "LightOffCommand.h"
#include "Light.h"
#include "StereoOnCommand.h"
#include "StereoOffCommand.h"
#include "Stereo.h"

int _tmain(int argc, _TCHAR* argv[])
{
	CInvoker mInvoker(4);
	CLight mLight("Living room");
	CLightOnCommand mLightOnCommand(&mLight);
	CLightOffCommand mLightOffCommand(&mLight);
	CStereo mStereo("Sitting room", "I Love China");
	CStereoOnCommand mStereoOnCommand(&mStereo);
	CStereoOffCommand mStereoOffCommand(&mStereo);

	mInvoker.setCommand(0, &mLightOnCommand, &mLightOffCommand);
	mInvoker.setCommand(1, &mStereoOnCommand, &mStereoOffCommand);

	mInvoker.onButtonWasPressed(0);
	mInvoker.offButtonWasPressed(0);
	mInvoker.onButtonWasPressed(1);
	mInvoker.offButtonWasPressed(1);
	mInvoker.onButtonWasPressed(2);
	mInvoker.offButtonWasPressed(2);
	mInvoker.undoButtonWasPressed();
	mInvoker.undoButtonWasPressed();
	mInvoker.undoButtonWasPressed();
	mInvoker.undoButtonWasPressed();
	mInvoker.undoButtonWasPressed();
	mInvoker.undoButtonWasPressed();
	mInvoker.undoButtonWasPressed();

	std::cout<<"Command pattern has been tested, press any key to exit...\n";
	getchar();

	return 0;
}

