/*
 * cha.cpp
 *
 *  Created on: 2017年7月23日
 *      Author: LPC
 */

#include <iostream>
#include "cha.h"

using namespace std;

void Cha::Set(int ages,int weights,int livetimes)
{
	agecha=ages;
	weightcha=weights;
	livetime=livetimes;

	cout<<"猹的年龄："<<agecha<<"月"<<endl;
	cout<<"猹的体重："<<weightcha<<"kg"<<endl;
	cout<<"猹的生命值："<<livetimes<<endl;
}

int Cha::Getlive()
{
	return livetime;
}

int Cha::Islive(int livetimes)
{
	cout<<"请输入猹是否活着：1=活着0=死亡"<<endl;
	cin>>livetimes;
	livetime=livetimes;
	cout<<"猹状态="<<livetime<<endl;

	if(livetime==0)
	{
		cout<<"猹挂掉了！！开始新一轮找碴"<<endl;
	  //return 0;
	}
	else
	{
		cout<<"猹还活着！"<<endl;
		//return 1;
	}
	return livetime;
}


