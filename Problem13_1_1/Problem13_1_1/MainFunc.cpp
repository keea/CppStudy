/*
*
* @file		MainFunc.cpp
* @date     Fri Aug  4 15:45:03 2017
* @author   keea
*/

#include <iostream>
#include "Point.h"

template <typename T>
void SwapData(T * swap1, T * swap2) {
	T temp = *swap1;
	*swap1 = *swap2;
	*swap2 = temp;
}

void main() {
	Point p1(1, 2);
	Point p2(3, 4);

	SwapData(&p1, &p2);
	p1.ShowPosition();
	p2.ShowPosition();

	int num1 = 0;
	int num2 = 1;

	SwapData(&num1, &num2);
	
	std::cout << "num1 : " << num1 << " num2 : " << num2 << std::endl;
}