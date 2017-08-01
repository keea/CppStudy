/*
*
* @file		Point.h
* @date     Tue Aug  1 14:12:34 2017
* @author   keea
*/

#ifndef __POINT_H__
#define __POINT_H__
#include <iostream>

class Point {
private: 
	int xpos, ypos;
public:
	void ShowPosition();
	friend std::ostream& operator<<(std::ostream&, const Point&);
	friend std::istream& operator>>(std::istream&,  Point&);
};

#endif // !__POINT_H__

