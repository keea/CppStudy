/*
*
* @file		MainFunc.cpp
* @date     Mon Aug  7 14:52:23 2017
* @author   keea
*/

#include "SmartPtr.h"
#include "Point.h"
#include "SmartPtr.cpp"

void main() {
	SmartPtr <Point> sptr1(new Point(1, 2));
	SmartPtr <Point> sptr2(new Point(3, 4));
	sptr1->ShowPosition();
	sptr2->ShowPosition();

	sptr1->SetPos(10, 20);
	sptr2->SetPos(30, 40);
	sptr1->ShowPosition();
	sptr2->ShowPosition();
}
