/*
 * runtu.cpp
 *
 *  Created on: 2017��7��23��
 *      Author: LPC
 */

#include <iostream>
#include "runtu.h"

using namespace std;

void Runtu::Set(int ages,char *tools)
{
	ageruntu=ages;
	toolsname=tools;
	cout<<"������������"<<ageruntu<<"��"<<endl;
	cout<<"�����Ĺ�����"<<toolsname<<endl;

}

int Runtu::Stab()
{

	cout<<"~~�������⪽��:1=���� 0=ʧ��"<<endl;
	cin>>stabed;
	if(stabed==1)
		{
			cout<<"�����ˣ�����⪻����𡣡���"<<endl;
			return 1;
		}
	else
		{
			cout<<"û���С�"<<endl;
			return 0;
		}
}



