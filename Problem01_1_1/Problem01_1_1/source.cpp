/*
* 사용자로 부터 총 5개의 정수를 입력 받아서,
* 그 합을 출력하는 프로그램
*
* @date     Wed Jul 12 11:05:18 2017
* @author   keea
*/

#include <iostream>

#define INPUT_DATA_NUM  5

void main() {
	int sum = 0;
	for (int i = 1; i <= INPUT_DATA_NUM; ++i) {
		int inputNum = 0;
		std::cout << i << "번째 정수 입력 : ";
		std::cin >> inputNum;
		sum += inputNum;
	}

	std::cout<<"합계: " << sum << std::endl;
}