/*
* Point Definition
* @file		Point.cpp
* @date     Mon Aug  7 14:47:44 2017
* @author   keea
*/

#include <iostream>
#include "Point.h"

Point::Point(int x = 0, int y = 0)
	:xpos(x), ypos(y) {
}

void Point::SetPos(int x, int y) {
	xpos = x;
	ypos = y;
}

void Point::ShowPosition() const {
	std::cout << '[' << xpos << " , " << ypos << ']' << std::endl;
}