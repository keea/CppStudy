/*
*
* @file		FruitSeller.cpp
* @date     Tue Jul 18 09:46:31 2017
* @author   keea
*/
#include <iostream>
#include "FruitSeller.h"

void FruitSeller::InitMembers(int price, int num, int money){
	APPLE_PRICE = price;
	numOfApples = num;
	myMoney = money;
}

//판매한 과일 수를 반환
int FruitSeller::SaleApples(int money) {
	int num = money / APPLE_PRICE;
	numOfApples -= num;
	myMoney += money;
	return num;
}

void FruitSeller::ShowSalesResult() const{
	std::cout << "남은 사과: " << numOfApples << std::endl;
	std::cout << "판매 수입: " << myMoney << std::endl;
}

