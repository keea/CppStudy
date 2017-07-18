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

//�Ǹ��� ���� ���� ��ȯ
int FruitSeller::SaleApples(int money) {
	int num = money / APPLE_PRICE;
	numOfApples -= num;
	myMoney += money;
	return num;
}

void FruitSeller::ShowSalesResult() const{
	std::cout << "���� ���: " << numOfApples << std::endl;
	std::cout << "�Ǹ� ����: " << myMoney << std::endl;
}

