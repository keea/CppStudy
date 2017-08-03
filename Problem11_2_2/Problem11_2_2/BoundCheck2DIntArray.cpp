/*
* BoundCheck2DIntArray Definition
* @file		BoundCheck2DIntArray.cpp
* @date     Thu Aug  3 11:11:56 2017
* @author   keea
*/

#include <iostream>
#include "BoundCheck2DIntArray.h"

BoundCheck2DIntArray::BoundCheck2DIntArray(int x, int y)
	:row(y), col(x) {
	arr = new BoundCheckIntArray[row];
	for (int i = 0; i < row; i++) {
		arr[i] = *(new BoundCheckIntArray(col));
	}
}

BoundCheckIntArray& BoundCheck2DIntArray::operator[](int index) {
	if (index<0 || index >= col) {
		std::cout << "Array index out of bound exception" << std::endl;
		exit(1);
	}
	return arr[index];
}

BoundCheck2DIntArray::~BoundCheck2DIntArray() {
	delete[] arr;
}