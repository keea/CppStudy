/*
* Gun Definition
* @file		Gun.cpp
* @date     Wed Aug  2 10:53:19 2017
* @author   keea
*/

#include <iostream>
#include "Gun.h"

Gun::Gun(int bnum) :bullet(bnum) {
}

void Gun::Shot() {
	std::cout << "BBANG!" << std::endl;
	bullet--;
}