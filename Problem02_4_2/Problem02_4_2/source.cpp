/*
*
* 0�̻� 100�̸��� ���� �� 5�� ����
*
* @date     Mon Jul 17 13:30:39 2017
* @author   keea
*/

#include <iostream>
#include <ctime>
#include <cstdlib>

void main() {
	std::srand(std::time(NULL));

	for (int i = 1; i <= 5; i++) {
		int rNum = std::rand() % 100;
		std::cout << i << "��° ���� �� : " << rNum << std::endl;
	}
}