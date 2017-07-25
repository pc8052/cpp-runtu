/*
 * main.cpp
 *
 *  Created on: 2017年7月23日
 *      Author: LPC
 *
 *      C++ 日期 & 时间 | 菜鸟教程
 *      http://www.runoob.com/cplusplus/cpp-date-time.html
 */

#include <iostream>
#include <time.h>
#include <stdlib.h>

#include "runtu.h"
#include "cha.h"
#include "timedelay.h"

using namespace std;

int main()
{   //int i;
    int stabResult=0;
    int chaLive=0;
    int randNum=0;
	Runtu runtu;
	Cha   cha;
	TimeDelay timeDelay;
	char *p="钢叉";
	//cout<<p<<endl;
	runtu.Set(11,p); //设定闰土参数
	cha.Set(10,20,100); //设定猹的参数
	chaLive=cha.Getlive();//读猹的生命值
	timeDelay.TimeDelayInit(1,5,1);

	for(;;)
	{
		timeDelay.TimeDelayWork();
		if(timeDelay.TimeOK())
		{
			 //练习时间结构
			time_t now = time(0);
			cout << "Number of sec since January 1,1970:" << now << endl;

            cout << "asctime="<< asctime(gmtime(&now));

			tm * ltm = localtime(&now);
			cout << "Year:"<<1900+ltm->tm_year << endl;
			cout << "Month:" << 1 + ltm->tm_mon << endl;
			cout << "Day:" << ltm->tm_mday << endl;
			cout << "Time: " << 1+ ltm->tm_hour << ":";
			cout << 1+ ltm->tm_min << ":";
			cout << 1+ ltm->tm_sec << endl;

			//练习定时查询
			timeDelay.ClearFlag();
			cout<<"猹现在的生命值为"<<cha.Getlive()<<endl;
			if(chaLive)
			{
				runtu.Stab();
				stabResult=runtu.IsStabed();
				if(stabResult)
				{ //cout<<"输出时间"<<time(0)<<endl;
					srand((unsigned)time(0));
					randNum=rand() % 10;
					cout<<"刺中得分随机(0-9):"<<randNum<<endl;

					cha.Changelive(randNum);
					cout<<"猹的生命值还剩下"<<cha.Getlive();
					chaLive=cha.Islive(); //判断猹是否活着
				}
			}

		}

		if(chaLive==0)
		{   timeDelay.TimeDelayInit(1,5,0);
			cout<<"猹现在没出现，请输入猹的生命值 整数"<<endl;
			cout<<"等待输入。。。"<<endl;
			cin>>chaLive;
			cha.Setlive(chaLive);
			cout<<"猹现在生命值为："<<cha.Getlive()<<endl;
			if(cha.Getlive())
				timeDelay.TimeDelayInit(1,5,1);
		}

	}

	return 0;
}


