/*
* Point Definition
* @file		Point.cpp
* @date     Wed Aug  2 18:02:38 2017
* @author   keea
*/

#include "Point.h"

Point::Point(int x, int y)
	:xpos(x), ypos(y) {
}

std::ostream& operator<<(std::ostream& os, const Point& pos) {
	os << '[' << pos.xpos << " , " << pos.ypos << ']' << std::endl;
	return os;
}

std::ostream& operator<<(std::ostream& os, const Point* pos) {
	os << '[' << pos->xpos << " , " << pos->ypos << ']' << std::endl;
	return os;
}