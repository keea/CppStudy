/*
* EBook
* @file		EBook.cpp
* @date     Tue Jul 25 16:48:56 2017
* @author   keea
*/
#include <iostream>
#include <cstring>
#include "EBook.h"

EBook::EBook(const char * _title, const char * _isbn, int _price, const char * _DRMKey)
	:Book(_title, _isbn, _price){

	DRMKey = new char[strlen(_DRMKey) + 1];
	strcpy(DRMKey, _DRMKey);
}

EBook::~EBook(){
	delete[] DRMKey;
}

void EBook::ShowEBookInfo() {
	ShowBookInfo();
	std::cout << "Authentication Key: " << DRMKey << std::endl;
}