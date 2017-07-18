/*
*
* @file		FruitMain.cpp
* @date     Tue Jul 18 10:00:17 2017
* @author   keea
*/

#include <iostream>
#include "FruitBuyer.h"
#include "FruitSeller.h"

void main() {
	FruitSeller seller;
	seller.InitMembers(1000, 20, 0);
	
	FruitBuyer buyer;
	buyer.InitMembers(5000);

	buyer.BuyApples(seller, 0); //���� ����
	
	std::cout << "���� �Ǹ����� ��Ȳ" << std::endl;
	seller.ShowSalesResult();

	std::cout << "���� �������� ��Ȳ" << std::endl;
	buyer.ShowBuyResult();
}