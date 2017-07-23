/*
 * main.cpp
 *
 *  Created on: 2017年7月23日
 *      Author: LPC
 */

#include <iostream>
#include "runtu.h"
#include "cha.h"

using namespace std;

int main()
{   //int i;
    int stabResult=0;
    int chaLive=0;
	Runtu runtu;
	Cha   cha;
	char *p="钢叉";
	//cout<<p<<endl;
	runtu.Set(12,p); //设定闰土参数
	cha.Set(1,20,0); //设定猹的参数

	chaLive=cha.Getlive();//读猹的生命值

	for(;;)
	{
		if(chaLive)
		{
			cout<<"猹活着，闰土刺猹"<<endl;

			stabResult=runtu.Stab();  //刺猹并返回结果
			if(stabResult)
			{
				chaLive=cha.Islive(0); //判断猹是否活着
			}


		}
		else
		{
			cout<<"猹现在没出现，请输入数字：1=出现 0=没出现"<<endl;
			cout<<"等待输入。。。"<<endl;
			cin>>chaLive;
		}
		/*i=cha.Islive(1);
		cout<<"i="<<i<<endl;
		if(i==1)
			{runtu.Stab();}*/
	}

	return 0;
}


