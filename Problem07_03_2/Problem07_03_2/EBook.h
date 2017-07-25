/*
* EBook
* @file		EBook.h
* @date     Tue Jul 25 16:45:43 2017
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
	~EBook();
	void ShowEBookInfo();
};


#endif // !__EBOOK_H__

