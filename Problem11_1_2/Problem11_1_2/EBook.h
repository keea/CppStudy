/*
* EBook Declaration
* @file		EBook.h
* @date     Wed Aug  2 13:18:10 2017
* @author   keea
*/


#ifndef __EBOOK_H__
#define __EBOOK_H__

#include "Book.h"
class EBook : public Book
{
private:
	char * DRMKey; //Security Key

public:
	EBook(const char *, const char *, int, const char *);
	EBook(const EBook &);
	EBook& operator=(const EBook &);
	~EBook();
	void ShowEBookInfo();
};


#endif // !__EBOOK_H__

