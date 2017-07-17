/*
*
* °è»ê±â
*
* @date     Mon Jul 17 14:54:40 2017
* @author   keea
*/

#include <iostream>
#include "Calculator.h"


int main() {
	Calculator cal;
	cal.Init();

	std::cout << "3.2 + 2.4 = " << cal.Add(3.2, 2.4) << std::endl;
	std::cout << "3.5 / 1.7 = " << cal.Div(3.5, 1.7) << std::endl;
	std::cout << "2.2 - 1.5 = " << cal.Min(3.2, 2.4) << std::endl;
	std::cout << "4.9 / 1.2 = " << cal.Div(3.2, 2.4) << std::endl;

	cal.ShowOpCount();

	return 0;
}