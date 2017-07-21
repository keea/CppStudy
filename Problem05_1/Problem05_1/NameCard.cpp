/*
*
* @file		NameCard.cpp
* @date     Fri Jul 21 16:47:41 2017
* @author   keea
*/

#include <iostream>
#include <cstring>

#include "NameCard.h"

NameCard::NameCard(const char const _name[],
	const char const _company[],
	const char const _phoneNum[],
	const int const _rank) {

	name = new char[strlen(_name) + 1];
	strcpy(name, _name);

	company = new char[strlen(_company) + 1];
	strcpy(company, _company);

	phoneNum = new char[strlen(_phoneNum) + 1];
	strcpy(phoneNum, _phoneNum);

	char * comPos = GetComPos(_rank);
	rank = new char[strlen(comPos) + 1];
	strcpy(rank, comPos);
}

NameCard::NameCard(const NameCard &copy) :
	name(copy.name),
	company(copy.company),
	phoneNum(copy.phoneNum),
	rank(copy.rank) {

	name = new char[strlen(copy.name) + 1];
	strcpy(name, copy.name);

	company = new char[strlen(copy.company) + 1];
	strcpy(company, copy.company);

	phoneNum = new char[strlen(copy.phoneNum) + 1];
	strcpy(phoneNum, copy.phoneNum);

	rank = new char[strlen(copy.rank) + 1];
	strcpy(rank, copy.rank);
}

char * NameCard::GetComPos(int compos) {

	switch (compos)
	{
	case COMP_POS::CLERK:
		return "사원";
		break;
	case COMP_POS::SENIOR:
		return "주임";
		break;
	case COMP_POS::ASSIST:
		return "대리";
		break;
	case COMP_POS::MANAGER:
		return "관리자";
		break;
	default:
		break;
	}
}

void NameCard::ShowNameCardInfo() const {
	std::cout << "이름: " << name << std::endl;
	std::cout << "회사: " << company << std::endl;
	std::cout << "전화번호: " << phoneNum << std::endl;
	std::cout << "직급: " << rank << std::endl << std::endl;
}

NameCard::~NameCard() {
	delete[]rank;
	delete[]phoneNum;
	delete[]company;
	delete[]name;
}