/*
* ±¸¸ÅÀÚ
* @file		FruitBuyer.h
* @date     Tue Jul 18 09:52:59 2017
* @author   keea
*/
#ifndef __FRUITBuyer_H__
#define __FRUITBuyer_H__
#include "FruitSeller.h"

class FruitBuyer {
private : 
	int myMoney;
	int numOfApples;

public :
	void InitMembers(int money);
	void BuyApples(FruitSeller &seller, int money);
	void ShowBuyResult() const;
};

#endif // !__FRUITBuyer_H__

