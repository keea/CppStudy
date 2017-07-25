/*
* Book
* @file		Book.cpp
* @date     Tue Jul 25 16:38:54 2017
* @author   keea
*/

#include <iostream>
#include <cstring>
#include "Book.h"

Book::Book(const char * _title, const char * _isbn, int _price) {
	
	title = new char[strlen(_title) + 1];
	strcpy(title, _title);

	isbn = new char[strlen(_isbn) + 1];
	strcpy(isbn, _isbn);

	price = _price;
}

Book::~Book() {
	delete[] title;
	delete[] isbn;
}

void Book::ShowBookInfo() {
	std::cout << "Title: " << title << std::endl;
	std::cout << "ISBN: " << isbn << std::endl;
	std::cout << "Price: " << price << std::endl;
}