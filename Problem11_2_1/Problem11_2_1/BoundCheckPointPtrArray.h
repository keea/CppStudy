/*
* BoundCheckPointPtrArray Declaration
* @file		BoundCheckPointPtrArray
* @date     Wed Aug  2 18:13:34 2017
* @author   keea
*/

#ifndef __BOUNDCHECKPOINTPTRARRAY_H__
#define __BOUNDCHECKPOINTPTRARRAY_H__

#include "Point.h"

typedef Point * POINT_PTR;

class BoundCheckPointPtrArray {
private:
	POINT_PTR * arr;
	int arrlen;

	BoundCheckPointPtrArray(const BoundCheckPointPtrArray& arr) {};
	BoundCheckPointPtrArray& operator=(const BoundCheckPointPtrArray& arr) {
	};

public:
	BoundCheckPointPtrArray(int len);
	POINT_PTR& operator[] (int idx);
	POINT_PTR operator[] (int idx) const;
	int GetArrLen() const;
	~BoundCheckPointPtrArray();
};

#endif // !__BOUNDCHECKPOINTPTRARRAY_H__
