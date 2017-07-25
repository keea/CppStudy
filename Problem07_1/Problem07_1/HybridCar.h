/*
*
* @file		HybridCar.h
* @date     Tue Jul 25 13:16:19 2017
* @author   keea
*/
#ifndef __HYBRIDCAR_H__
#define __HYBRIDCAR_H__
#include "Car.h"

class HybridCar : public Car
{
public:
	int GetElecGauge();
	HybridCar(int, int);
private:
	int electricGauge;

};
#endif // !__HYBRIDCAR_H__

