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
	std::cout << "�ܿ� ���ָ�: " << GetGasGauge() << std::endl;
	std::cout << "�ܿ� ���ⷮ: " << GetElecGauge() << std::endl;
	std::cout << "�ܿ� ���ͷ�: " << WaterGauge << std::endl;
}