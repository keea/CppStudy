/*
*
* @file		Rectangle.cpp
* @date     Tue Jul 25 15:48:43 2017
* @author   keea
*/

#include <iostream>
#include "Rectangle.h"

Rectangle::Rectangle(int _horizontal, int _vertical) {
	horizontal = _horizontal;
	vertical = _vertical;
}

void Rectangle::ShowAreaInfo() {
	int area = horizontal*vertical;
	std::cout << "¸éÀû: " << area << std::endl;
}
