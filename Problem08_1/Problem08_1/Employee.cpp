/*
* Employee
* @file		Employee.cpp
* @date     Mon Jul 31 13:32:54 2017
* @author   keea
*/

#include <iostream>
#include <cstring>
#include "Employee.h"

Employee::Employee(char * name) {
	strcpy(this->name, name);
}

void Employee::ShowYourName() const {
	std::cout << "name : " << name << std::endl;
}

int Employee::GetPay() const {
	return 0;
}

void Employee::ShowSalaryInfo() const {
}