/*
 * main.cpp
 *
 *  Created on: 2017��7��23��
 *      Author: LPC
 *
 *      C++ ���� & ʱ�� | ����̳�
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
	char *p="�ֲ�";
	//cout<<p<<endl;
	runtu.Set(11,p); //�趨��������
	cha.Set(10,20,100); //�趨⪵Ĳ���
	chaLive=cha.Getlive();//��⪵�����ֵ
	timeDelay.TimeDelayInit(1,5,1);

	for(;;)
	{
		timeDelay.TimeDelayWork();
		if(timeDelay.TimeOK())
		{
			 //��ϰʱ��ṹ
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

			//��ϰ��ʱ��ѯ
			timeDelay.ClearFlag();
			cout<<"����ڵ�����ֵΪ"<<cha.Getlive()<<endl;
			if(chaLive)
			{
				runtu.Stab();
				stabResult=runtu.IsStabed();
				if(stabResult)
				{ //cout<<"���ʱ��"<<time(0)<<endl;
					srand((unsigned)time(0));
					randNum=rand() % 10;
					cout<<"���е÷����(0-9):"<<randNum<<endl;

					cha.Changelive(randNum);
					cout<<"⪵�����ֵ��ʣ��"<<cha.Getlive();
					chaLive=cha.Islive(); //�ж���Ƿ����
				}
			}

		}

		if(chaLive==0)
		{   timeDelay.TimeDelayInit(1,5,0);
			cout<<"�����û���֣�������⪵�����ֵ ����"<<endl;
			cout<<"�ȴ����롣����"<<endl;
			cin>>chaLive;
			cha.Setlive(chaLive);
			cout<<"���������ֵΪ��"<<cha.Getlive()<<endl;
			if(cha.Getlive())
				timeDelay.TimeDelayInit(1,5,1);
		}

	}

	return 0;
}


