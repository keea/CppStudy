/*
* 
* 가리키는 대상이 서로 바뀌는 함수 
*
* @date     Fri Jul 14 12:16:17 2017
* @author   keea
*/

#include <iostream>

void SwapPointer(int * &ptr1, int * &ptr2);

void main() {
	int num1 = 5;
	int *ptr1 = &num1;
	int num2 = 10;
	int *ptr2 = &num2;

	std::cout << *ptr1 << " , " << *ptr2 << std::endl;
	std::cout << ptr1 << " , " << ptr2 << std::endl;

	SwapPointer(ptr1, ptr2);

	std::cout << *ptr1 << " , " << *ptr2 << std::endl;
	std::cout << ptr1 << " , " << ptr2 << std::endl;
}

void SwapPointer(int * &ptr1, int * &ptr2) {
	int *  temp = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;
}