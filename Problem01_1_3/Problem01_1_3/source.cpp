/*
* ���ڸ� �ϳ� �Է� �޾Ƽ� �� ���ڿ� �ش��ϴ� ������ ���
*
* @date     Wed Jul 12 11:20:41 2017
* @author   keea
*/

#include <iostream>

#define MAX_TIME_TABLE  9

void main() {
	int inputMult = 0;
	std::cout << "���� �Է��ϼ��� : ";
	std::cin >> inputMult;

	for (int i = 1; i <= MAX_TIME_TABLE ; ++i) {
		std::cout << inputMult << " * " << i << " = " << i*inputMult << std::endl;
	}
}