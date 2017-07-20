/*
*
* @file		Ring.cpp
* @date     Thu Jul 20 14:00:49 2017
* @author   keea
*/

#include<iostream>
#include "Ring.h"

void Ring::Init(int xPos1, int yPos1, int rad1, int xPos2, int yPos2, int rad2) {
	inCircle.Init(xPos1, yPos1, rad1);
	outCircle.Init(xPos2, yPos2, rad2);
}

void Ring::ShowRingInfo() const{
	std::cout << "Inner Circle Info..." << std::endl;
	inCircle.ShowRadius();
	std::cout << "Outter Circle Info..." << std::endl;
	outCircle.ShowRadius();
}