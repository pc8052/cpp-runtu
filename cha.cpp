/*
 * cha.cpp
 *
 *  Created on: 2017��7��23��
 *      Author: LPC
 */

#include <iostream>
#include "cha.h"

using namespace std;

//�������ʼ��
void Cha::Set(int ages,int weights,int livetimes)
{
	agecha=ages;
	weightcha=weights;
	livetime=livetimes;

	cout<<"⪵����䣺"<<agecha<<"��"<<endl;
	cout<<"⪵����أ�"<<weightcha<<"kg"<<endl;
	cout<<"⪵�Ĭ������ֵ��"<<livetimes<<endl;
}

//�ı�⪵�����ֵ
void Cha::Changelive(int livetimes)
{
	if(livetime>livetimes)
		livetime=livetime-livetimes;
	else
		livetime=0;
}

//��ȡ⪵�����ֵ
int Cha::Getlive()
{
	return livetime;
}

//�����趨⪵�����ֵ
void Cha::Setlive(int livetimes)
{
	if(livetimes>0)
		livetime=livetimes;
	else
		cout<<"������������"<<endl;
}

//�ж���Ƿ���ż�����ֵ�Ƿ�Ϊ0
int Cha::Islive()
{
	//cout<<"��������Ƿ���ţ�1=����0=����"<<endl;
	//cin>>livetime;
	//cout<<"�״̬="<<livetime<<endl;

	if(livetime==0)
	{
		cout<<"⪹ҵ��ˣ�����ʼ��һ���Ҳ�"<<endl;
	}
	else
	{
		cout<<"⪻����ţ�"<<endl;
	}
	return livetime;
}


