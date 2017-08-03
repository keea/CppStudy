/*
*
* @file		MainFunc.cpp
* @date     Wed Aug  2 18:27:35 2017
* @author   keea
*/

#include "BoundCheckPointPtrArray.h"

void main() {
	BoundCheckPointPtrArray arr(3);
	arr[0] =  new Point(3, 4);
	arr[1] =  new Point(5, 6);
	arr[2] =  new Point(7, 8);

	for (int i = 0; i < arr.GetArrLen(); ++i) {
		std::cout << (arr[i]);
	}

	delete arr[0];
	delete arr[1];
	delete arr[2];
}