/*
 * cha.h
 *
 *  Created on: 2017Äê7ÔÂ23ÈÕ
 *      Author: LPC
 */

#ifndef CHA_H_
#define CHA_H_

class Cha
{
	public:
		void Set(int,int,int);
		int  Islive();
		int  Getlive();
	private:
		int agecha;
		int weightcha;
		int livetime;
};




#endif /* CHA_H_ */
