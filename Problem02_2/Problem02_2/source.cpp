/*
*
* const pointer & const reference
*
* @date     Fri Jul 14 17:28:54 2017
* @author   keea
*/

#include <iostream>

void main() {
	const int num = 12;

	const int * numPtr = &num;
	const int * &ref = numPtr;

	std::cout << *numPtr << std::endl;
	std::cout << *ref << std::endl;
}