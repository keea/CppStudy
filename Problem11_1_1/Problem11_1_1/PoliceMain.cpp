/*
*
* @file		PoliceMain.cpp
* @date     Wed Aug  2 11:43:05 2017
* @author   keea
*/

#include <iostream>
#include "Police.h"

void main() {
	std::cout << "=============����=============" << std::endl;
	Police pman1(5, 3);
	pman1.Shot();
	pman1.PutHandCuff();
	std::cout << "=============���翬����=============" << std::endl;
	Police pman2(pman1);
	pman2.Shot();
	pman2.PutHandCuff();
	std::cout << "=============���Կ�����=============" << std::endl;
	Police pman3(0,0);
	pman3 = pman1;
	pman3.Shot();
	pman3.PutHandCuff();
}