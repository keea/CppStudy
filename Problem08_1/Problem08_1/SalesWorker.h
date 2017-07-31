/*
*
* @file		SalesWorker.h
* @date     Mon Jul 31 14:20:42 2017
* @author   keea
*/

#ifndef __SALESWORKER_H__
#define __SALESWORKER_H__

#include "PermanentWorker.h"

class SalesWorker : public PermanentWorker{
private:
	int salesResult; //Monthly sales performance
	double bonusRatio; //Bonus ratio
public:
	SalesWorker(char *, int, double);
	void AddSalesResult(int );
	int GetPay() const;
	void ShowSalaryInfo() const;
};

#endif // !__SALESWORKER_H__


