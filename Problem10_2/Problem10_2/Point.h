/*
*
* @file		Point.h
* @date     Tue Aug  1 11:41:55 2017
* @author   keea
*/

#ifndef __POINT_H__
#define __POINT_H__

class Point {
private:
	int xpos, ypos;
public:
	Point(int, int);
	void ShowPostion() const;
	Point operator-();
	friend Point operator~ (Point &ref);
};

#endif // !__POINT_H__

