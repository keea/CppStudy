/*
*
* 판매원 급여 계산기
* @date     Wed Jul 12 11:32:25 2017
* @author   keea
*/

#include <iostream>

float getSalary(int);

void main() {
	float inputNum = 0;
	while (inputNum != -1)
	{
		std::cout << "판매 금액을 만원 단위로 입력 (-1 to end) : ";
		std::cin >> inputNum;
		if (inputNum == -1) break;

		float salary = getSalary(inputNum);
		std::cout << "이번 달 급여: " << salary<< "만원" << std::endl;
	}
}

float getSalary(int price) {
	float salary = 50+(price * 0.12f);
	return salary;
}