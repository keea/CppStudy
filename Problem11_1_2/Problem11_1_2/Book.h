/*
* Book Declaration
* @file		Book.h
* @date     Wed Aug  2 13:15:05 2017
* @author   keea
*/
#ifndef __BOOK_H__
#define __BOOK_H__

class Book
{
private:
	char * title;	// book title
	char * isbn;	// International Standard Book Number
	int price;		// book price

public:
	Book(const char *, const char *, int);
	Book(const Book &);
	~Book();
	Book& operator=(const Book &);
	void ShowBookInfo();
};


#endif // !__BOOK_H__

