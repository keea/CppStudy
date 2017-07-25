/*
* MainFunction
* @file		MainFunc.cpp
* @date     Tue Jul 25 16:59:37 2017
* @author   keea
*/

#include <iostream>
#include "EBook.h"

void main() {
	Book book("Good C++", "555-12345-890-0", 20000);
	book.ShowBookInfo();

	std::cout << std::endl;

	EBook ebook("Good C++ ebook", "555-12345-890-1", 10000, "fdx9w0i8kiw");
	ebook.ShowEBookInfo();
}