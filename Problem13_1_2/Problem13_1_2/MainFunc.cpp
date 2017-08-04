/*
*
* @file		MainFunc.cpp
* @date     Fri Aug  4 16:00:31 2017
* @author   keea
*/

#include <iostream>

#define LENGTH 10

template <typename T>
T SumArray(T arr[], int len) {
	T sum = 0;
	for (int i = 0; i < len; ++i) {
		sum += arr[i];
	}
	return sum;
}

void main() {
	int iNum = 1;
	float fNum = 0.1;

	int iArr[LENGTH];
	float fArr[LENGTH];

	for (int i = 0; i < LENGTH; i++) {
		iArr[i] = iNum;
		fArr[i] = fNum;

		iNum += 1;
		fNum += 0.1;
	}

	int iSum = SumArray(iArr, LENGTH);
	float fSum = SumArray(fArr, LENGTH);

	std::cout << iSum << std::endl;
	std::cout.precision(3);
	std::cout << fSum << std::endl;

}
