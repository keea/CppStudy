/*
*
* @file		car.h
* @date     Mon Jul 24 18:06:31 2017
* @author   keea
*/
#ifndef __CAR_H__
#define __CAR_H__

class Car {
public:
	Car(int);
	int GetGasGauge();
private:
	int gasolineGauge;
};

#endif // !__CAR_H__

