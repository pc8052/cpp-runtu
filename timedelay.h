/*
 * timedelay.h
 *
 *  Created on: 2017Äê7ÔÂ25ÈÕ
 *      Author: LPC
 */

#ifndef TIMEDELAY_H_
#define TIMEDELAY_H_
#include <iostream>
#include <time.h>

class TimeDelay
{
	public:
		void TimeDelayInit(int idTimers,time_t delayTs,int enableTs);
		void TimeDelayWork();
		int  TimeOK();
		void ClearFlag();
	private:
		time_t startTime;
		time_t currentTime;
		time_t durationTime;
		double delayT;
        int flagOk;
		int idTimer;
		int enableT;
};



#endif /* TIMEDELAY_H_ */
