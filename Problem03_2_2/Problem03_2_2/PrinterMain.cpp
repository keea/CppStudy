/*
* @date     Mon Jul 17 15:57:41 2017
* @author   keea
*/

#include "Printer.h"

void main() {
	Printer pnt;
	pnt.SetString("Hello World");
	pnt.ShowString();

	pnt.SetString("I love C++");
	pnt.ShowString();
}