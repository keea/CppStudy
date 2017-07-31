/*
*
* @file		EmployeeHandler.h
* @date     Mon Jul 31 14:50:52 2017
* @author   keea
*/

#ifndef __EMPLOYEEHANDLER_H__
#define __EMPLOYEEHANDLER_H__

#include "Employee.h"

class EmployeeHandler {
private:
	Employee * empList[50];
	int empNum;
public:
	EmployeeHandler();
	void AddEmployee(Employee *);
	void ShowAllSalaryInfo() const;
	void ShowTotalSalary() const;
	~EmployeeHandler();
};

#endif // !__EMPLOYEEHANDLER_H__


