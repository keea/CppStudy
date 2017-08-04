/*
* String Definition
* @file		String.cpp
* @date     Fri Aug  4 10:46:04 2017
* @author   keea
*/

#include <cstring>
#include "String.h"

String::String(char * _str) {
	int len = strlen(_str) + 1;
	str = new char[len];

	str = strcpy(str, _str);
}

String::String() {
	str = NULL;
}

char* String::operator+(const String &ref) {
	int len = strlen(str) + strlen(ref.str) + 1;
	char* cStr = new char[len];
	cStr = strcpy(cStr, str);
	strcat(cStr, ref.str);
	return cStr;
}

void String::operator+=(const String &ref) {
	int bfStrLen = strlen(str)+1;
	char *  bfStr = new char[bfStrLen];
	int addLen = bfStrLen + strlen(ref.str);
	bfStr = strcpy(bfStr, str);
	
	delete[] str;

	str = new char[addLen];
	str = strcpy(str,bfStr);
	strcat(str, ref.str);

	delete[] bfStr;
}

String& String::operator=(const String &ref) {
	if(str!=NULL)
		delete[] str;
	int len = strlen(ref.str) + 1;
	str = new char[len];
	str = strcpy(str, ref.str);

	return *this;
}

bool String:: operator==(const String &ref) {
	if (!strcmp(str, ref.str))
		return true;

	return false;
}

String::~String() {
	if(str!=NULL)
		delete[] str;
}

std::ostream& operator<< (std::ostream& os, const String & _str) {
	os << _str.str << std::endl;
	return os;
}

std::istream& operator>>(std::istream& is, String& _str) {
	char * test = new char[100];
	is >> test;
	_str =  String(test);
	return is;
}