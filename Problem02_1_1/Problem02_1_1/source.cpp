/*
*
* 요구사항에 부합하는 함수를 각각 정의.
* 인자로 전달된 int형 변수의 값을 1씩 증가시키는 함수
* 인자로 전달된 int형 변수의 부호를 바꾸는 함수
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

// 인자로 전달된 int형 변수의 값을 1씩 증가
void IncrementNum(int &num) {
	num++;
}

// 인자로 전달된 int형 변수의 부호 변경
void ChangeSignedNum(int &num) {
	num *= -1;
}