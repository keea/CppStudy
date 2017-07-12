/*
* 사용자로부터 이름과 전화번호를 문자열의 형태로 입력받아서,
* 입력 받은 데이터를 그대로 출력하는 프로그램을 작성.
*
* @date     Wed Jul 12 11:12:54 2017
* @author   keea
*/

#include <iostream>

void main() {
	char name[100];
	char phoneNum[100];

	std::cout << "이름 : ";
	std::cin >> name;
	
	std::cout << "전화번호 : ";
	std::cin >> phoneNum;

	std::cout << "이름 : " << name << std::endl;
	std::cout << "전화번호 : " << phoneNum << std::endl;
}