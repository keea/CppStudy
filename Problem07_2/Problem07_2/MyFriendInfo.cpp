/*
*
* @file		MyFriendInfo.cpp
* @date     Tue Jul 25 13:51:32 2017
* @author   keea
*/

#include <iostream>
#include <cstring>
#include "MyFriendInfo.h"

MyFriendInfo::MyFriendInfo(const char * _name, int _age) {
	name = new char[strlen(_name) + 1];
	strcpy(name, _name);
	age = _age;
}

MyFriendInfo::~MyFriendInfo() {
	delete[] name;
}

void MyFriendInfo::ShowMyFriendInfo() {
	std::cout << "�̸�: " << name << std::endl;
	std::cout << "����: " << age << std::endl;
}