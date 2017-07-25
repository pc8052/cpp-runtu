/*
 * runtu.cpp
 *
 *  Created on: 2017年7月23日
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
	cout<<"闰土的年龄是"<<ageruntu<<"岁"<<endl;
	cout<<"闰土的工具是"<<toolsname<<endl;

}

void Runtu::Stab()
{
	int randNum=0;
	cout<<"~~随机数输入刺猹结果:非0=刺中 0=失败"<<endl;
	//cin>>stabed;
	//SetTimer(0,200,NULL);
	srand((unsigned)time(0));
	randNum=rand() % 4;

	if(randNum)
	{
		stabed=1;
		cout<<"randNum="<<randNum<<"  刺中了！看看猹活着吗。。。"<<endl;
		//return 1;
	}
	else
	{
		cout<<"randNum="<<randNum<<"  没刺中～"<<endl;
		//return 0;
		stabed=0;
	}
}

int Runtu::IsStabed()
{
	return stabed;
}

