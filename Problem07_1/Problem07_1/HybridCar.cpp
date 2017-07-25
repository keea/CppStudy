/*
*
* @file		HybridCar.c
* @date     Tue Jul 25 13:21:40 2017
* @author   keea
*/
#include "Car.h"
#include "HybridCar.h"

int HybridCar::GetElecGauge() {
	return electricGauge;
}

HybridCar::HybridCar(int electric, int gaso) :Car(gaso) {
	electricGauge = electric;
}