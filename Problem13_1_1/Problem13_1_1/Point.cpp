/*
* Point Definition
* @file		Point.cpp
* @date     Fri Aug  4 15:39:48 2017
* @author   keea
*/

#include <iostream>
#include "Point.h"

Point::Point(int x, int y)
	:xpos(x), ypos(y) {
}

void Point::ShowPosition() const {
	std::cout << '[' << xpos << " , " << ypos << ']' << std::endl;
}