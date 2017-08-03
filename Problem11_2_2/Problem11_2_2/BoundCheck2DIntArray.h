/*
* BoundCheck2DIntArray Declaration
* @file		BoundCheck2DIntArray.h
* @date     Thu Aug  3 10:56:12 2017
* @author   keea
*/

#ifndef __BOUNDCHECK2DINTARRAY_H__
#define __BOUNDCHECK2DINTARRAY_H__

#include "BoundCheckIntArray.h"

class BoundCheck2DIntArray
{
private:
	BoundCheckIntArray * arr;
	int row;
	int col;
	BoundCheck2DIntArray(const BoundCheck2DIntArray& arr) {}
public:
	BoundCheck2DIntArray(int x, int y);
	BoundCheckIntArray& operator[] (int index);
	~BoundCheck2DIntArray();
};


#endif // !__BOUNDCHECK2DINTARRAY_H__
