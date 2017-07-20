/*
*
* @file		NameCard.cpp
* @date     Thu Jul 20 17:20:35 2017
* @author   keea
*/

#include <iostream>
#include <cstring>

#include "NameCard.h"

NameCard::NameCard(const char const _name[] ,
	const char const _company[],
	const char const _phoneNum[],
	const int const _rank) {

	name = new char[strlen(_name)+1];
	strcpy(name, _name);

	company = new char[strlen(_company)+1];
	strcpy(company, _company);

	phoneNum = new char[strlen(_phoneNum)+1];
	strcpy(phoneNum, _phoneNum);

	char * comPos = GetComPos(_rank);
	rank = new char[strlen(comPos)+1];
	strcpy(rank, comPos);
}

char * NameCard::GetComPos(int compos) {

	switch (compos)
	{
	case COMP_POS::CLERK:
		return "���";
		break;
	case COMP_POS::SENIOR:
		return "����";
		break;
	case COMP_POS::ASSIST:
		return "�븮";
		break;
	case COMP_POS::MANAGER:
		return "������";
		break;
	default:
		break;
	}
}

void NameCard::ShowNameCardInfo() const{
	std::cout << "�̸�: " << name << std::endl;
	std::cout << "ȸ��: " << company << std::endl;
	std::cout << "��ȭ��ȣ: " << phoneNum << std::endl;
	std::cout << "����: " << rank << std::endl << std::endl;
}

NameCard::~NameCard() {
	delete []rank;
	delete []phoneNum;
	delete []company;
	delete []name;
}
