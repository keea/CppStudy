/*
* Police Declaration
* @file		Police.h
* @date     Wed Aug  2 10:57:51 2017
* @author   keea
*/

#ifndef __POLICE_H__
#define __POLICE_H__

#include "Gun.h"

class Police {
private:
	int handcuffs;
	Gun * pistol;
public:
	Police(int , int );
	Police(const Police &);
	Police& operator=(const Police &);
	void PutHandCuff();
	void Shot();
	~Police();
};

#endif // !__POLICE_H__

