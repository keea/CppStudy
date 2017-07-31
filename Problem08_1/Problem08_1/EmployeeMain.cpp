/*
*
* @file		EmployeeMain.cpp
* @date     Mon Jul 31 15:01:13 2017
* @author   keea
*/

#include "EmployeeHandler.h"
#include "ForeignSalesWorker.h"

void main() {
	EmployeeHandler handler;

	ForeignSalesWorker * fseller1
		= new ForeignSalesWorker("Hong", 1000, 0.1, RIST_LEVEL::RIST_A);
	fseller1->AddSalesResult(7000); //Sales performance 7000
	handler.AddEmployee(fseller1);

	ForeignSalesWorker * fseller2
		= new ForeignSalesWorker("Yoon", 1000, 0.1, RIST_LEVEL::RIST_B);
	fseller2->AddSalesResult(7000); //Sales performance 7000
	handler.AddEmployee(fseller2);

	ForeignSalesWorker * fseller3
		= new ForeignSalesWorker("Lee", 1000, 0.1, RIST_LEVEL::RIST_C);
	fseller3->AddSalesResult(7000); //Sales performance 7000
	handler.AddEmployee(fseller3);

	//Information payable to this month's pay
	handler.ShowAllSalaryInfo(); 
}
