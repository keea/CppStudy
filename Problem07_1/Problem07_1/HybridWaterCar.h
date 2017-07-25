/*
*
* @file		HybridWaterCar.h
* @date     Tue Jul 25 13:31:49 2017
* @author   keea
*/

#ifndef __HYBRIDWATERCAR_H__
#define __HYBRIDWATERCAR_H__

#include "HybridCar.h"

class HybridWaterCar : public HybridCar
{
public:
	HybridWaterCar(int, int, int);
	void ShowCurrentGauge();
private:
	int WaterGauge;
};


#endif // !__HYBRIDWATERCAR_H__

