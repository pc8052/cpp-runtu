/*
 * runtu.cpp
 *
 *  Created on: 2017��7��23��
 *      Author: LPC
 */

#include <iostream>
#include "runtu.h"
#include <time.h>
#include <stdlib.h>

using namespace std;

void Runtu::Set(int ages,char *tools)
{
	ageruntu=ages;
	toolsname=tools;
	cout<<"������������"<<ageruntu<<"��"<<endl;
	cout<<"�����Ĺ�����"<<toolsname<<endl;

}

void Runtu::Stab()
{
	int randNum=0;
	cout<<"~~����������⪽��:��0=���� 0=ʧ��"<<endl;
	//cin>>stabed;
	//SetTimer(0,200,NULL);
	srand((unsigned)time(0));
	randNum=rand() % 4;

	if(randNum)
	{
		stabed=1;
		cout<<"randNum="<<randNum<<"  �����ˣ�����⪻����𡣡���"<<endl;
		//return 1;
	}
	else
	{
		cout<<"randNum="<<randNum<<"  û���С�"<<endl;
		//return 0;
		stabed=0;
	}
}

int Runtu::IsStabed()
{
	return stabed;
}

