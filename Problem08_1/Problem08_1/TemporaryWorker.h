/*
*
* @file		TemporaryWorker.h
* @date     Mon Jul 31 13:58:46 2017
* @author   keea
*/
#ifndef __TEMPORARTWORKER_H__
#define __TEMPORARTWORKER_H__

#include "Employee.h"

class TemporaryWorker : public Employee {
private:
	int workTime; // Total hours worked on this month
	int payPerHour; // Salary per hour
public :
	TemporaryWorker(char * , int );
	void AddWorkTime(int); //The addition of working hours
	int GetPay() const; //The salary of this month
	void ShowSalaryInfo() const;
};

#endif // !__TEMPORARTWORKER_H__

