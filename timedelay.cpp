/*
 * timedelay.cpp
 *
 *  Created on: 2017年7月25日
 *      Author: LPC
 */

#include <iostream>
#include "timedelay.h"
#include <time.h>
using namespace std;
void TimeDelay::TimeDelayInit(int idTimers,time_t delayTs,int enableTs)
{
 idTimer=idTimers;
 delayT=delayTs;
 enableT=enableTs;
}

int TimeDelay::TimeOK()
{
	return flagOk;
}

void TimeDelay::ClearFlag()
{
	flagOk=0;
}

void TimeDelay::TimeDelayWork()
{static int flagStart=0;
	if((enableT) && (flagStart==0))
	{
		startTime = time(0);
		cout << startTime << endl;
		char *dt = ctime(&startTime);
		cout << "本地日期和时间：" << dt << endl;

		flagStart = 1;
	}

	if(flagStart)
	{
		currentTime = time(0);
		durationTime = difftime(currentTime,startTime);
		//cout<<"时间差"<<durationTime<<endl;

		if(durationTime>=delayT)
		{
			//cout<<"5s到"<<endl;
			flagOk = 1;
			flagStart = 0;
			//return 1;
		}
	}

	//return 0;
}
