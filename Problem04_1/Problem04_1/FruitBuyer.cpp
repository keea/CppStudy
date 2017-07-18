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
		std::cout <<money<<"������ ����� �����Ͻ� �� �����ϴ�."<< std::endl<<std::endl;
	}
	else {
		numOfApples += seller.SaleApples(money);
		myMoney -= money;
	}
}

void FruitBuyer::ShowBuyResult() const {
	std::cout << "���� �ܾ�: " << myMoney << std::endl;
	std::cout << "��� ����: " << numOfApples << std::endl;
}