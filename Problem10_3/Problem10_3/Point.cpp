/*
*
* @file		Point.h
* @date     Tue Aug  1 14:14:56 2017
* @author   keea
*/

#include "Point.h"

void Point::ShowPosition() {
	std::cout << '[' << xpos << " , " << ypos << ']' << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Point& pos) {
	os << '[' << pos.xpos << " , " << pos.ypos << ']' << std::endl;
	return os;
}

std::istream& operator>>(std::istream& is, Point& pos) {
	is >> pos.xpos >> pos.ypos;
	return is;
}