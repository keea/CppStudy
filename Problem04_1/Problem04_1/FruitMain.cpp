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

	buyer.BuyApples(seller, 0); //과일 구매
	
	std::cout << "과일 판매자의 현황" << std::endl;
	seller.ShowSalesResult();

	std::cout << "과일 구매자의 현황" << std::endl;
	buyer.ShowBuyResult();
}