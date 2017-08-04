/*
* String Declaration
* @file		String.h
* @date     Fri Aug  4 10:30:15 2017
* @author   keea
*/
#ifndef __STRING_H__
#define __STRING_H__

#include <iostream>

class String {
private:
	char * str;
public:
	String(char * _str);
	String();

	char* operator+(const String &ref);

	String& operator=(const String &ref);

	//String& operator=(char * _str);

	void operator+=(const String &ref);

	bool operator==(const String &ref);

	friend std::ostream& operator<<(std::ostream& os, const String& _ref);
	friend std::istream& operator>>(std::istream& is, String& _str);

	~String();
};

#endif // !__STRING_H__

