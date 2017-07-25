/*
*
* @file		MyFriendDetailInfo.h
* @date     Tue Jul 25 14:01:58 2017
* @author   keea
*/
#ifndef __MYFRIENDDETAILINFO_H__
#define __MYFRIENDDETAILINFO_H__
#include "MyFriendInfo.h"


class MyFriendDetailInfo : public MyFriendInfo{
private:
	char * addr;
	char * phone;
public:
	MyFriendDetailInfo(const char *, int, const char *, const char *);
	~MyFriendDetailInfo();
	void ShowMyFriendDetailInfo();
};

#endif // !__MYFRIENDDETAILINFO_H__

