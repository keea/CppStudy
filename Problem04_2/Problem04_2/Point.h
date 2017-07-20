/*
* @file		Point.h
* @update	Thu Jul 20 16:46:15 2017
* @author   keea
*/

#ifndef __POINT_H__
#define __POINT_H__

class Point
{
private:
	int xpos, ypos;

public:
	Point(int, int);
	void Init(int , int );
	void ShowPointInfo() const;
};

#endif // !__POINT_H__

