/*
*
* @file		MyFriendDetailInfo.cpp
* @date     Tue Jul 25 14:15:41 2017
* @author   keea
*/

#include <iostream>
#include <cstring>
#include "MyFriendDetailInfo.h"

MyFriendDetailInfo::MyFriendDetailInfo(const char * _name,
	int _age, const char * _addr, const char * _phone) :MyFriendInfo(_name, _age) {
	addr = new char[strlen(_addr) + 1];
	strcpy(addr, _addr);
	phone = new char[strlen(_phone) + 1];
	strcpy(phone, _phone);
}

MyFriendDetailInfo::~MyFriendDetailInfo() {
	delete[] addr;
	delete[] phone;
}

void MyFriendDetailInfo::ShowMyFriendDetailInfo(){
	ShowMyFriendInfo();
	std::cout << "주소: " << addr << std::endl;
	std::cout << "전화: " << phone << std::endl;
}