/*
* 숫자를 하나 입력 받아서 그 숫자에 해당하는 구구단 출력
*
* @date     Wed Jul 12 11:20:41 2017
* @author   keea
*/

#include <iostream>

#define MAX_TIME_TABLE  9

void main() {
	int inputMult = 0;
	std::cout << "단을 입력하세요 : ";
	std::cin >> inputMult;

	for (int i = 1; i <= MAX_TIME_TABLE ; ++i) {
		std::cout << inputMult << " * " << i << " = " << i*inputMult << std::endl;
	}
}