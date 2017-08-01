/*
*
* @file		Point.cpp
* @date     Mon Jul 31 17:56:13 2017
* @author   keea
*/

#include <iostream>
#include "Point.h"

Point::Point(int xpos = 0, int ypos = 0)
	:xpos(xpos), ypos(ypos) {
}

void Point::ShowPosition() const{
	std::cout << '[' << xpos << " , " << ypos << ']' << std::endl;
}

Point& Point::operator+=(const Point &ref) {
	xpos += ref.xpos;
	ypos += ref.ypos;
	return *this;
}

Point& Point::operator-=(const Point &ref) {
	xpos -= ref.xpos;
	ypos -= ref.ypos;
	return *this;
}

bool Point::operator==(const Point &ref) {
	if ((xpos == ref.xpos) && (ypos == ref.ypos)) {
		return true;
	}
	return false;
}

bool Point::operator!=(const Point &ref) {
	return !this->operator==(ref);
}

Point operator-(const Point &pos1, const Point &pos2) {
	Point pos(pos1.xpos - pos2.xpos, pos1.ypos - pos2.ypos);
	return pos;
}