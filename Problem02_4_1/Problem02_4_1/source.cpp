/*
*
* 표준함수를 호출하는 예제.
*
* @date     Mon Jul 17 11:43:41 2017
* @author   keea
*/

#include <iostream>
#include <cstring>

void main() {
	char word1[20] = "Hello";

	int fStrlen = std::strlen(word1);
	std::cout << "strlen 문자열의 길이 계산 : " << fStrlen << std::endl;

	char * word2 = "World";
	std::strcat(word1, word2);
	std::cout << "strcat 문자열의 뒤에 덧붙이기 : " << word1 << std::endl;

	char * cpyWorld = new char[20];
	std::strcpy(cpyWorld, word1);
	std::cout << "strcpy 문자열 복사 : " << cpyWorld << std::endl;

	int sameNum = std::strcmp(word1, word2);
	std::cout << "strcmp 문자열의 비교 : " << sameNum << std::endl;

	delete[] cpyWorld;

}