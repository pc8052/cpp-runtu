/*
 * cha.cpp
 *
 *  Created on: 2017��7��23��
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

	cout<<"⪵����䣺"<<agecha<<"��"<<endl;
	cout<<"⪵����أ�"<<weightcha<<"kg"<<endl;
	cout<<"⪵�����ֵ��"<<livetimes<<endl;
}

int Cha::Getlive()
{
	return livetime;
}

int Cha::Islive(int livetimes)
{
	cout<<"��������Ƿ���ţ�1=����0=����"<<endl;
	cin>>livetimes;
	livetime=livetimes;
	cout<<"�״̬="<<livetime<<endl;

	if(livetime==0)
	{
		cout<<"⪹ҵ��ˣ�����ʼ��һ���Ҳ�"<<endl;
	  //return 0;
	}
	else
	{
		cout<<"⪻����ţ�"<<endl;
		//return 1;
	}
	return livetime;
}


