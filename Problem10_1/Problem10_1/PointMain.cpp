/*
*
* @file		PointMain.cpp
* @date     Mon Jul 31 18:04:15 2017
* @author   keea
*/


#include <iostream>
#include "Point.h"

void main() {
	Point pos1(3, 4);
	Point pos2(10, 20);
	
	Point operMinus = pos1 - pos2;
	operMinus.ShowPosition();

	pos1 += pos2;
	pos1.ShowPosition();

	pos1 -= pos2;
	pos1.ShowPosition();

	Point dNum1(3, 4);
	Point dNum2(10, 20);

	Point sNum1(3, 4);
	Point sNum2(3, 4);

	bool isDNum1 = dNum1 == dNum2;
	bool isDNum2 = dNum1 != dNum2;

	bool isSNum1 = sNum1 == sNum2;
	bool isSNum2 = sNum1 != sNum2;

	std::cout<<"Different Point == Operator: "<< isDNum1 << std::endl;
	std::cout << "Different Point != Operator: " << isDNum2 << std::endl;

	std::cout << "Same Point == Operator: " << isSNum1 << std::endl;
	std::cout << "Same Point != Operator: " << isSNum2 << std::endl;
}