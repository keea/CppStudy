/*
*
* @file		NameCardMain.cpp
* @date     Fri Jul 21 16:51:44 2017
* @author   keea
*/

#include "NameCard.h"

void main() {
	NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
	NameCard copy1 = manClerk;
	NameCard manAssist("Kim", "SoGoodComp", "010-5555-6666", COMP_POS::ASSIST);
	NameCard copy2 = manAssist;

	copy1.ShowNameCardInfo();
	copy2.ShowNameCardInfo();
}