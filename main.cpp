/*
 * main.cpp
 *
 *  Created on: 2017��7��23��
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
	char *p="�ֲ�";
	//cout<<p<<endl;
	runtu.Set(12,p); //�趨��������
	cha.Set(10,20,0); //�趨⪵Ĳ���
	chaLive=cha.Getlive();//��⪵�����ֵ

	for(;;)
	{
		if(chaLive)
		{
			cout<<"⪻��ţ��������"<<endl;

			stabResult=runtu.Stab();  //��⪲����ؽ��
			if(stabResult)
			{
				chaLive=cha.Islive(); //�ж���Ƿ����
			}
		}
		else
		{
			cout<<"�����û���֣����������֣�1=���� 0=û����"<<endl;
			cout<<"�ȴ����롣����"<<endl;
			cin>>chaLive;
		}
	}

	return 0;
}


