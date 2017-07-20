/*
*
* @file		Circle.cpp
* @date     Thu Jul 20 14:09:18 2017
* @author   keea
*/

#include <iostream>
#include "Circle.h"

void Circle::Init(int xPos, int yPos, int radius) {
	p.Init(xPos, yPos);
	this->radius = radius;
}

void Circle::ShowRadius() const{
	std::cout << "radius: " << radius << std::endl;
	p.ShowPointInfo();
}
