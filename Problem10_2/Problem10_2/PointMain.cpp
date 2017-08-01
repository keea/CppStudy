/*
*
* @file		PointMain.cpp
* @date     Tue Aug  1 11:55:00 2017
* @author   keea
*/

#include "Point.h"

void main() {
	Point pos1(1, -2);

	Point pos2 = -pos1;
	pos2.ShowPostion();

	pos2 = ~pos1;
	pos2.ShowPostion();
}