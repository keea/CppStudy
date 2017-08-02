/*
* EBook Definition
* @file		EBook.cpp
* @date     Wed Aug  2 13:22:54 2017
* @author   keea
*/

#include <iostream>
#include <cstring>
#include "EBook.h"

EBook::EBook(const char * _title, const char * _isbn, int _price, const char * _DRMKey)
	:Book(_title, _isbn, _price) {

	DRMKey = new char[strlen(_DRMKey) + 1];
	strcpy(DRMKey, _DRMKey);
}

EBook::EBook(const EBook &ref)
	:Book(ref) {
	DRMKey = new char[strlen(ref.DRMKey) + 1];
	strcpy(DRMKey, ref.DRMKey);
}

EBook::~EBook() {
	delete[] DRMKey;
}

EBook& EBook::operator=(const EBook & ref) {
	delete[] DRMKey;

	Book::operator=(ref);

	DRMKey = new char[strlen(ref.DRMKey) + 1];
	strcpy(DRMKey, ref.DRMKey);

	return *this;
}

void EBook::ShowEBookInfo() {
	ShowBookInfo();
	std::cout << "Authentication Key: " << DRMKey << std::endl<<std::endl;
}