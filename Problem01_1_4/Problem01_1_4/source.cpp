/*
*
* �Ǹſ� �޿� ����
* @date     Wed Jul 12 11:32:25 2017
* @author   keea
*/

#include <iostream>

float getSalary(int);

void main() {
	float inputNum = 0;
	while (inputNum != -1)
	{
		std::cout << "�Ǹ� �ݾ��� ���� ������ �Է� (-1 to end) : ";
		std::cin >> inputNum;
		if (inputNum == -1) break;

		float salary = getSalary(inputNum);
		std::cout << "�̹� �� �޿�: " << salary<< "����" << std::endl;
	}
}

float getSalary(int price) {
	float salary = 50+(price * 0.12f);
	return salary;
}