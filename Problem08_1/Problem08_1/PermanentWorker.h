/*
*
* @file		PermanentWorker.h
* @date     Mon Jul 31 13:49:06 2017
* @author   keea
*/

#ifndef __PERMANENTWORKER_H__
#define __PERMANENTWORKER_H__

#include "Employee.h"

class PermanentWorker : public Employee {
private:
	int salary; // Monthly salary
public :
	PermanentWorker(char * , int);
	int GetPay() const;
	void ShowSalaryInfo() const;
};

#endif // !__PERMANENTWORKER_H__

