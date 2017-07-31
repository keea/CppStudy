/*
*
* @file		TemporaryWorker.cpp
* @date     Mon Jul 31 14:14:28 2017
* @author   keea
*/

#include <iostream>
#include "TemporaryWorker.h"


TemporaryWorker::TemporaryWorker(char * name, int pay)
	:Employee(name), workTime(0), payPerHour(pay) {
}


void TemporaryWorker::AddWorkTime(int time) {
	workTime += time;
}

int TemporaryWorker::GetPay() const {
	return workTime*payPerHour;
}

void TemporaryWorker::ShowSalaryInfo() const {
	ShowYourName();
	std::cout << "Salary: " << GetPay() << std::endl;
}