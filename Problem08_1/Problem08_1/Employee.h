/*
* Employee 
* @file		Employee.h
* @date     Mon Jul 31 13:25:56 2017
* @author   keea
*/

#ifndef __EMPLOYEE_H__
#define __EMPLOYEE_H__

class Employee {
private :
	char name[100];

public :
	Employee(char * );
	void ShowYourName() const;
	virtual int GetPay() const;
	virtual void ShowSalaryInfo() const;
};

#endif // !__EMPLOYEE_H__

