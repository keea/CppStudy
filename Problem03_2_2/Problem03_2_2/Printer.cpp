/*
* 문자열 저장, 문자열 출력
* @class    Printer
* @date     Mon Jul 17 15:51:46 2017
* @author   keea
*/

#include <iostream>
#include <cstring>
#include "Printer.h"

void Printer::SetString(const char* pStr) {
	std::strcpy(str, pStr);
}

void Printer::ShowString() {
	std::cout << str << std::endl;
}