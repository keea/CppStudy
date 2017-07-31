/*
*
* @file		ForeignSalesWorker.cpp
* @date     Mon Jul 31 15:28:31 2017
* @author   keea
*/

#include <iostream>
#include "ForeignSalesWorker.h"

ForeignSalesWorker::ForeignSalesWorker(char * name, int money, double ratio, int ristLv)
	:SalesWorker(name, money, ratio), ristLevel(ristLv) {
}

int ForeignSalesWorker::GetRiskPay() const {
	int ristLv = ristLevel;
	double ristRatio;

	switch (ristLv)
	{
	case RIST_LEVEL::RIST_A:
		ristRatio = 0.3;
		break;
	case RIST_LEVEL::RIST_B:
		ristRatio = 0.2;
		break;
	case RIST_LEVEL::RIST_C:
		ristRatio = 0.1;
		break;

	default:
		break;
	}

	return (int)SalesWorker::GetPay()*ristRatio;
}

int ForeignSalesWorker::GetPay() const{
	return SalesWorker::GetPay() + GetRiskPay();
}

void ForeignSalesWorker::ShowSalaryInfo() const {
	ShowYourName();
	std::cout << "Salary: " << SalesWorker::GetPay() << std::endl;
	std::cout << "risk pay: " << GetRiskPay() << std::endl;
	std::cout << "sum: " << GetPay() << std::endl << std::endl;
}

