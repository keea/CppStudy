/*
*
* ǥ���Լ��� ȣ���ϴ� ����.
*
* @date     Mon Jul 17 11:43:41 2017
* @author   keea
*/

#include <iostream>
#include <cstring>

void main() {
	char word1[20] = "Hello";

	int fStrlen = std::strlen(word1);
	std::cout << "strlen ���ڿ��� ���� ��� : " << fStrlen << std::endl;

	char * word2 = "World";
	std::strcat(word1, word2);
	std::cout << "strcat ���ڿ��� �ڿ� �����̱� : " << word1 << std::endl;

	char * cpyWorld = new char[20];
	std::strcpy(cpyWorld, word1);
	std::cout << "strcpy ���ڿ� ���� : " << cpyWorld << std::endl;

	int sameNum = std::strcmp(word1, word2);
	std::cout << "strcmp ���ڿ��� �� : " << sameNum << std::endl;

	delete[] cpyWorld;

}