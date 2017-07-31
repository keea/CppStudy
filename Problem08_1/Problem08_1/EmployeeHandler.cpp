/*
*
* @file		EmployeeHandler.cpp
* @date     Mon Jul 31 14:55:04 2017
* @author   keea
*/

#include <iostream>
#include "EmployeeHandler.h"

EmployeeHandler::EmployeeHandler()
	:empNum(0) {
}

EmployeeHandler::~EmployeeHandler() {
	for (int i = 0; i < empNum; i++) {
		delete empList[i];
	}
}

void EmployeeHandler::AddEmployee(Employee * emp) {
	empList[empNum++] = emp;
}

void EmployeeHandler::ShowAllSalaryInfo() const {
	for (int i = 0; i < empNum; i++) {
		empList[i]->ShowSalaryInfo();
	}
}

void EmployeeHandler::ShowTotalSalary() const {
	int sum = 0;
	for (int i = 0; i < empNum; i++) {
		sum += empList[i]->GetPay();
	}

	std::cout << "salary sum: " << sum << std::endl;
}