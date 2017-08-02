/*
* Book Definition
* @file		Book.cpp
* @date     Wed Aug  2 13:20:01 2017
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

Book::Book(const Book &ref)
	:price(ref.price) {

	title = new char[strlen(ref.title) + 1];
	strcpy(title,ref.title);

	isbn = new char[strlen(ref.isbn) + 1];
	strcpy(isbn, ref.isbn);
}

Book& Book::operator=(const Book &ref) {
	delete[] title;
	delete[] isbn;

	title = new char[strlen(ref.title) + 1];
	strcpy(title, ref.title);

	isbn = new char[strlen(ref.isbn) + 1];
	strcpy(isbn, ref.isbn);

	price = ref.price;

	return *this;
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