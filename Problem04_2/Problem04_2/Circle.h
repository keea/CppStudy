/*
*
* @file		Circle.h
* @date     Thu Jul 20 14:04:14 2017
* @author   keea
*/

#ifndef __CIRCLE_H__
#define __CIRCLE_H__

#include "Point.h"

class Circle {
private:
	Point p;
	int radius;

public:
	Circle(int, int, int);
	void Init(int, int, int);
	void ShowRadius() const;
};

#endif // !__CIRCLE_H__
