/*
*
* @file		ForeignSalesWorker.h
* @date     Mon Jul 31 15:16:58 2017
* @author   keea
*/
#ifndef __FOREIGNSALESWORKER_H__
#define __FOREIGNSALESWORKER_H__

#include "SalesWorker.h"

namespace RIST_LEVEL {
	enum
	{
		RIST_A,
		RIST_B,
		RIST_C,
	};
}

class ForeignSalesWorker : public SalesWorker{
private:
	int ristLevel;
	int GetRiskPay() const;
public:
	ForeignSalesWorker(char *, int, double, int);
	int GetPay() const;
	void ShowSalaryInfo() const;
};

#endif // !__FOREIGNSALESWORKER_H__

