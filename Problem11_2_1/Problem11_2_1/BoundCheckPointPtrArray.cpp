/*
* BoundCheckPointPtrArray Definition
* @file		BoundCheckPointPtrArray.cpp
* @date     Wed Aug  2 18:18:44 2017
* @author   keea
*/

#include "BoundCheckPointPtrArray.h"


BoundCheckPointPtrArray::BoundCheckPointPtrArray(int len)
	:arrlen(len) {
	arr = new POINT_PTR[len];
}

POINT_PTR& BoundCheckPointPtrArray::operator[](int idx) {
	if (idx < 0 || idx >= arrlen) {
		std::cout << "Array index out of bound exception" << std::endl;
		exit(1);
	}

	return arr[idx];
}

POINT_PTR BoundCheckPointPtrArray::operator[](int idx) const {
	if (idx < 0 || idx >= arrlen) {
		std::cout << "Array index out of bound exception" << std::endl;
		exit(1);
	}
	return arr[idx];
}

int BoundCheckPointPtrArray::GetArrLen() const{
	return arrlen;
}

BoundCheckPointPtrArray::~BoundCheckPointPtrArray() {
	delete []arr;
}