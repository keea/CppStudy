/*
*
* @file     Point.cpp
* @date     Thu Jul 20 13:44:56 2017
* @author   keea
*/

#include <iostream>
#include "Point.h"

void Point::Init(int x, int y) {
	xpos = x;
	ypos = y;
}

void Point::ShowPointInfo() const {
	std::cout << "[" << xpos << "," << ypos << "]" << std::endl;
}
