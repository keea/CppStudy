/*
*
* @file		SalesWorker.cpp
* @date     Mon Jul 31 14:33:51 2017
* @author   keea
*/

#include <iostream>
#include "SalesWorker.h"

SalesWorker::SalesWorker(char * name, int money, double ratio)
	:PermanentWorker(name, money), salesResult(0), bonusRatio(ratio) {
}

void SalesWorker::AddSalesResult(int value) {
	salesResult += value;
}

int SalesWorker::GetPay() const {
	return PermanentWorker::GetPay() //Call the GetPay function of PermanentWorker
		+ (int)(salesResult*bonusRatio);
}

void SalesWorker::ShowSalaryInfo() const {
	ShowYourName();
	std::cout << "Salary: " << GetPay() << std::endl; // Call the GetPay function of SalesWorker
}