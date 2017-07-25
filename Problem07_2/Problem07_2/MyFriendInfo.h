/*
*
* @file		MyFriendInfo.h
* @date     Tue Jul 25 13:44:20 2017
* @author   keea
*/
#ifndef __MYFRIENDINFO_H__
#define __MYFRIENDINFO_H__

class MyFriendInfo {
private : 
	char * name;
	int age;

public:
	MyFriendInfo(const char * , int );
	~MyFriendInfo();
	void ShowMyFriendInfo();
};

#endif // !__MYFRIENDINFO_H__

