/*
 * runtu.cpp
 *
 *  Created on: 2017年7月23日
 *      Author: LPC
 */

#include <iostream>
#include "runtu.h"

using namespace std;

void Runtu::Set(int ages,char *tools)
{
	ageruntu=ages;
	toolsname=tools;
	cout<<"闰土的年龄是"<<ageruntu<<"岁"<<endl;
	cout<<"闰土的工具是"<<toolsname<<endl;

}

int Runtu::Stab()
{

	cout<<"~~请输入刺猹结果:1=刺中 0=失败"<<endl;
	cin>>stabed;
	if(stabed==1)
		{
			cout<<"刺中了！看看猹活着吗。。。"<<endl;
			return 1;
		}
	else
		{
			cout<<"没刺中～"<<endl;
			return 0;
		}
}



