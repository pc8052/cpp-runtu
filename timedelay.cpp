/*
 * timedelay.cpp
 *
 *  Created on: 2017��7��25��
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
		cout << "�������ں�ʱ�䣺" << dt << endl;

		flagStart = 1;
	}

	if(flagStart)
	{
		currentTime = time(0);
		durationTime = difftime(currentTime,startTime);
		//cout<<"ʱ���"<<durationTime<<endl;

		if(durationTime>=delayT)
		{
			//cout<<"5s��"<<endl;
			flagOk = 1;
			flagStart = 0;
			//return 1;
		}
	}

	//return 0;
}
