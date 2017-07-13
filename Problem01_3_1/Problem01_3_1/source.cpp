/*
*
* 함수 오버로딩 형태로 구현
* 
* @date     Thu Jul 13 10:02:19 2017
* @author   keea
*/

#include<iostream>

int BoxVolume(int, int, int);
int BoxVolume(int, int);
int BoxVolume(int);

#define D_WIDTH 1
#define D_HEIGHT 1

int main(void) {

	std::cout << "[3,3,3] : " << BoxVolume(3, 3, 3) << std::endl;
	std::cout << "[5,5,D] : " << BoxVolume(5, 5) << std::endl;
	std::cout << "[7,D,D] : " << BoxVolume(7) << std::endl;

	return 0;
}

int BoxVolume(int length, int width, int height) {
	return length*width*height;
}

int BoxVolume(int length, int width) {
	return length * width * D_HEIGHT;
}

int BoxVolume(int length) {
	return length*D_WIDTH*D_HEIGHT;
}
