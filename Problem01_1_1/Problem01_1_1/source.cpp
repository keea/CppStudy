/*
* ����ڷ� ���� �� 5���� ������ �Է� �޾Ƽ�,
* �� ���� ����ϴ� ���α׷�
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
		std::cout << i << "��° ���� �Է� : ";
		std::cin >> inputNum;
		sum += inputNum;
	}

	std::cout<<"�հ�: " << sum << std::endl;
}