/*
* BoundCheckIntArray Definition
* @file		BoundCheckIntArray.cpp
* @date     Thu Aug  3 14:28:11 2017
* @author   keea
*/

#include <iostream>
#include "BoundCheckIntArray.h"

BoundCheckIntArray::BoundCheckIntArray() {
}

BoundCheckIntArray::BoundCheckIntArray(int _len)
	:len(_len) {
	arr = new int[len];
}

int & BoundCheckIntArray::operator[](int index) {
	if (index<0 || index>=len) {
		std::cout << "Array index out of bound exception" << std::endl;
		exit(1);
	}
	return arr[index];
}

BoundCheckIntArray::~BoundCheckIntArray() {
	delete[] arr;
}