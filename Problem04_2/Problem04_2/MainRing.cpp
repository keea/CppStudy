/*
*
* @file		MainRing.cpp
* @date     Thu Jul 20 14:20:23 2017
* @author   keea
*/

#include <iostream>
#include "Ring.h"

void main() {
	Ring ring;
	ring.Init(1, 1, 4, 2, 2, 9);
	ring.ShowRingInfo();
}