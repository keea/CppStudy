/*
*
* @file		Point.h
* @date     Mon Jul 31 17:50:15 2017
* @author   keea
*/

#ifndef __POINT_H__
#define __POINT_H__

class Point {
private:
	int xpos, ypos;
public:
	Point(int, int);
	void ShowPosition() const;

	Point& operator+=(const Point &ref);
	Point& operator-=(const Point &ref);
	
	bool operator==(const Point &ref);
	bool operator!=(const Point &ref);

	friend Point operator-(const Point &pos1, const Point &pos2);
};

#endif // !__POINT_H__

