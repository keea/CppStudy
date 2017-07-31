/*
*
* @file		PermanentWorker.cpp
* @date     Mon Jul 31 13:53:49 2017
* @author   keea
*/

#include <iostream>
#include <cstring>
#include "PermanentWorker.h"

PermanentWorker::PermanentWorker(char * name, int money)
	:Employee(name), salary(money) {
}

int PermanentWorker::GetPay() const {
	return salary;
}

void PermanentWorker::ShowSalaryInfo() const {
	ShowYourName();
	std::cout << "Salary: " << GetPay() << std::endl;
}