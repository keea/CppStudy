/*
* Book
* @file		Book.h
* @date     Tue Jul 25 16:34:08 2017
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

public :
	Book(const char *, const char *, int);
	~Book();
	void ShowBookInfo();
};


#endif // !__BOOK_H__

