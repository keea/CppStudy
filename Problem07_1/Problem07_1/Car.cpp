/*
*
* @file		car.c
* @date     Mon Jul 24 18:06:56 2017
* @author   keea
*/

#include "Car.h"

int Car::GetGasGauge() {
	return gasolineGauge;
}

Car::Car(int gaso) {
	gasolineGauge = gaso;
}
