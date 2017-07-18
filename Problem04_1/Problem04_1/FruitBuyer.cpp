/*
* 
* @file		FruitBuyer.cpp
* @date     Tue Jul 18 09:59:38 2017
* @author   keea
*/
#include <iostream>
#include "FruitBuyer.h"
#include "FruitSeller.h"

void FruitBuyer::InitMembers(int money) {
	myMoney = money;
	numOfApples = 0;
}

void FruitBuyer::BuyApples(FruitSeller &seller, int money) {
	if (money <= 0) {
		std::cout <<money<<"원으로 사과를 구입하실 수 없습니다."<< std::endl<<std::endl;
	}
	else {
		numOfApples += seller.SaleApples(money);
		myMoney -= money;
	}
}

void FruitBuyer::ShowBuyResult() const {
	std::cout << "현재 잔액: " << myMoney << std::endl;
	std::cout << "사과 갯수: " << numOfApples << std::endl;
}