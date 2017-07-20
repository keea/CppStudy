/*
*
* @file		Circle.cpp
* @update	Thu Jul 20 16:46:41 2017
* @author   keea
*/


#include <iostream>
#include "Circle.h"

Circle::Circle(int xPos, int yPos, int radius) :p(xPos, yPos) {
	this->radius = radius;
}

void Circle::Init(int xPos, int yPos, int radius) {
	p.Init(xPos, yPos);
	this->radius = radius;
}

void Circle::ShowRadius() const{
	std::cout << "radius: " << radius << std::endl;
	p.ShowPointInfo();
}
