/*
*
* °è»ê±â
*
* @date     Mon Jul 17 14:54:40 2017
* @author   keea
*/

#include <iostream>
#include "Calculator.h"

void Calculator::Init()
{
	addCnt = 0;
	divCnt = 0;
	minCnt = 0;
	multCnt = 0;
}

double Calculator::Add(double n1, double n2) {
	addCnt++;
	return n1 + n2;
}

double Calculator::Div(double n1, double n2) {
	divCnt++;
	return n1 / n2;
}

double Calculator::Min(double n1, double n2) {
	minCnt++;
	return n1 - n2;
}

double Calculator::Mult(double n1, double n2) {
	multCnt++;
	return n1 * n2;
}

void Calculator::ShowOpCount()
{
	std::cout << "µ¡¼À: " << addCnt << " »¬¼À: " << minCnt << " °ö¼À: " << multCnt << " ³ª´°¼À: " << divCnt << std::endl;
}
