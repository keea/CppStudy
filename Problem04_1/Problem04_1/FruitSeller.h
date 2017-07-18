/*
* 사과장수
* @file		FruitSeller.h
* @date     Tue Jul 18 09:42:28 2017
* @author   keea
*/

#ifndef __FRUITSELLER_H__
#define __FRUITSELLER_H__


class FruitSeller
{
public:
	void InitMembers(int price, int num, int money);
	int SaleApples(int money);
	void ShowSalesResult() const;

private:
	int APPLE_PRICE;
	int numOfApples;
	int myMoney;
};


#endif

