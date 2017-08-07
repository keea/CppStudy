/*
* Point Declaration
* @file		Point.h
* @date     Mon Aug  7 14:44:59 2017
* @author   keea
*/

#ifndef __POINT_H__
#define __POINT_H__

class Point {
private:
	int xpos, ypos;
public:
	Point(int x, int y);
	void SetPos(int x, int y);
	void ShowPosition() const;
};

#endif // !__POINT_H__
