/*
*
* @file		Point.cpp
* @date     Tue Aug  1 11:44:16 2017
* @author   keea
*/

#include <iostream>
#include "Point.h"

Point::Point(int x = 0, int y = 0) :xpos(x), ypos(y) {
}

void Point::ShowPostion() const{
	std::cout << '[' << xpos << " , " <<  ypos << ']'<< std::endl;
}

Point Point::operator-() {
	Point pos(-xpos, -ypos);
	return pos;
}

Point operator~(Point &ref) {
	Point pos(ref.ypos, ref.xpos);
	return pos;
}