/*
*
* @file		MainFunc.cpp
* @date     Fri Aug  4 11:37:48 2017
* @author   keea
*/

#include "String.h"

void main() {
	String str1 = "I like ";
	String str2 = "string class";
	String str3 = str1 + str2;
	std::cout << str1;
	std::cout << str2;
	std::cout << str3;
	str1 += str2;
	if (str1 == str3)
		std::cout << "Identical String!" << std::endl;
	else
		std::cout << "Unequal String!" << std::endl;

	String str4;
	std::cout << "Input String: ";
	std::cin >> str4;
	std::cout << "Entered String: " << str4 << std::endl;
}