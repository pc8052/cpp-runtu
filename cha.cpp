/*
 * cha.cpp
 *
 *  Created on: 2017年7月23日
 *      Author: LPC
 */

#include <iostream>
#include "cha.h"

using namespace std;

//猹特征初始化
void Cha::Set(int ages,int weights,int livetimes)
{
	agecha=ages;
	weightcha=weights;
	livetime=livetimes;

	cout<<"猹的年龄："<<agecha<<"月"<<endl;
	cout<<"猹的体重："<<weightcha<<"kg"<<endl;
	cout<<"猹的默认生命值："<<livetimes<<endl;
}

//改变猹的生命值
void Cha::Changelive(int livetimes)
{
	if(livetime>livetimes)
		livetime=livetime-livetimes;
	else
		livetime=0;
}

//读取猹的生命值
int Cha::Getlive()
{
	return livetime;
}

//单独设定猹的生命值
void Cha::Setlive(int livetimes)
{
	if(livetimes>0)
		livetime=livetimes;
	else
		cout<<"请输入正整数"<<endl;
}

//判断猹是否活着即生命值是否为0
int Cha::Islive()
{
	//cout<<"请输入猹是否活着：1=活着0=死亡"<<endl;
	//cin>>livetime;
	//cout<<"猹状态="<<livetime<<endl;

	if(livetime==0)
	{
		cout<<"猹挂掉了！！开始新一轮找碴"<<endl;
	}
	else
	{
		cout<<"猹还活着！"<<endl;
	}
	return livetime;
}


