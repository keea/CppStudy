/*
*
* �䱸���׿� �����ϴ� �Լ��� ���� ����.
* ���ڷ� ���޵� int�� ������ ���� 1�� ������Ű�� �Լ�
* ���ڷ� ���޵� int�� ������ ��ȣ�� �ٲٴ� �Լ�
* 
* @date     Fri Jul 14 12:00:18 2017
* @author   keea
*/

#include <iostream>

void IncrementNum(int &);
void ChangeSignedNum(int &);

void main() {
	int a = 5;
	IncrementNum(a);
	std::cout <<"IncrementNum : " <<a <<std::endl;

	ChangeSignedNum(a);
	std::cout << "ChangeSignedNum : " << a << std::endl;
}

// ���ڷ� ���޵� int�� ������ ���� 1�� ����
void IncrementNum(int &num) {
	num++;
}

// ���ڷ� ���޵� int�� ������ ��ȣ ����
void ChangeSignedNum(int &num) {
	num *= -1;
}