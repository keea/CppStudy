/*
*
* @file		MainFunc.cpp
* @date     Wed Aug  2 14:29:56 2017
* @author   keea
*/

#include <iostream>
#include "EBook.h"

void main() {
	std::cout << "=============원본=============" << std::endl;
	Book book("Good C++", "555-12345-890-0", 20000);
	book.ShowBookInfo();

	std::cout << std::endl;

	EBook ebook("Good C++ ebook", "555-12345-890-1", 10000, "fdx9w0i8kiw");
	ebook.ShowEBookInfo();

	std::cout << "=============복사연산자=============" << std::endl;
	Book book1(book);
	book1.ShowBookInfo();

	EBook ebook1(ebook);
	ebook1.ShowEBookInfo();

	std::cout << "=============대입연산자=============" << std::endl;
	Book book2("","",0);
	book2 = book;
	book2.ShowBookInfo();

	EBook ebook2("", "", 0, "");
	ebook2 = ebook;
	ebook2.ShowEBookInfo();
}