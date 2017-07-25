/*
*
* @file		HybridWaterCar.cpp
* @date     Tue Jul 25 13:42:07 2017
* @author   keea
*/
#include <iostream>
#include "HybridWaterCar.h"
#include "HybridCar.h"

HybridWaterCar::HybridWaterCar(int water, int electric, int gaso) 
	: HybridCar(electric, gaso){
	WaterGauge = water;
}

void HybridWaterCar::ShowCurrentGauge() {
	std::cout << "ÀÜ¿© °¡¼Ö¸°: " << GetGasGauge() << std::endl;
	std::cout << "ÀÜ¿© Àü±â·®: " << GetElecGauge() << std::endl;
	std::cout << "ÀÜ¿© ¿öÅÍ·®: " << WaterGauge << std::endl;
}