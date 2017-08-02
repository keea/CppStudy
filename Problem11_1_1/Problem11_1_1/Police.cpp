/*
* Police Definition
* @file		Police.cpp
* @date     Wed Aug  2 11:02:10 2017
* @author   keea
*/

#include <iostream>
#include <cstring>
#include "Police.h"


Police::Police(int bnum, int bcuff)
	:handcuffs(bcuff){
	if (bnum > 0)
		pistol = new Gun(bnum);
	else
		pistol = NULL;
}

Police::Police(const Police &ref)
	:handcuffs(ref.handcuffs) {
	if (ref.pistol == NULL)
		pistol = NULL;
	else
		pistol = new Gun(*ref.pistol);
}

Police& Police::operator=(const Police &ref){
	if(pistol!=NULL)
		delete pistol;
	if (ref.pistol == NULL)
		pistol = NULL;
	else
		pistol = new Gun(*(ref.pistol));
	
	handcuffs = ref.handcuffs;
	return *this;
}

void Police::PutHandCuff() {
	std::cout << "SNAP!" << std::endl;
}

void Police::Shot() {
	if (pistol == NULL)
		std::cout << "Hut BBANG!" << std::endl;
	else
		pistol->Shot();
}

Police::~Police() {
	if (pistol != NULL)
		delete pistol;
}