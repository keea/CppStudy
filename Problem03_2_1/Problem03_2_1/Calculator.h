/*
*
* °è»ê±â
*
* @date     Mon Jul 17 14:54:40 2017
* @author   keea
*/
#ifndef __CALCULATOR_H__
#define __CALCULATOR_H__

class Calculator
{
private:
	int addCnt;
	int divCnt;
	int minCnt;
	int multCnt;
public:
	void Init();
	double Add(double n1, double n2);
	double Div(double n1, double n2);
	double Min(double n1, double n2);
	double Mult(double n1, double n2);
	void ShowOpCount();
};
#endif