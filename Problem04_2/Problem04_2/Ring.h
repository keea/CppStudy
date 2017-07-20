/*
*
* @file		Ring.h
* @date     Thu Jul 20 14:00:40 2017
* @author   keea
*/

#ifndef __RING_H__
#define __RING_H__

#include "Circle.h"

class Ring {
private:
	Circle inCircle;
	Circle outCircle;

public:
	Ring(int, int, int, int, int, int);
	void Init(int, int, int, int, int, int);
	void ShowRingInfo() const;
};

#endif // !__RING_H__
