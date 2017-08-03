/*
* Point Declaration
* @file		Point.h
* @date     Wed Aug  2 17:57:52 2017
* @author   keea
*/

#ifndef __POINT_H__
#define __POINT_H__

#include <iostream>

class Point {
private:
	int xpos, ypos;
public:
	Point(int, int);
	friend std::ostream& operator<<(std::ostream&, const Point&);
	friend std::ostream& operator<<(std::ostream&, const Point*);
};




#endif // !__POINT_H__


