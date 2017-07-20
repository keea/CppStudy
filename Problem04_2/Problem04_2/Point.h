/*
* @file		Point.h
* @date     Thu Jul 20 13:42:45 2017
* @author   keea
*/

#ifndef __POINT_H__
#define __POINT_H__

class Point
{
private:
	int xpos, ypos;

public:
	void Init(int x, int y);
	void ShowPointInfo() const;
};

#endif // !__POINT_H__

