/*
*
* 두 점의 합
*
* @date     Mon Jul 17 10:59:28 2017
* @author   keea
*/

#include <iostream>

typedef struct __Point {
	int xpos;
	int ypos;
} Point;

Point& PntAdder(const Point &p1, const Point &p2);

void main() {
	__Point * p1 = new __Point;
	p1->xpos = 1;
	p1->ypos = 1;
	__Point * p2 = new __Point;
	p2->xpos = 2;
	p2->ypos = 2;
	Point& pointAdd = PntAdder(*p1, *p2);
	std::cout << "x : " << pointAdd.xpos << " y : " << pointAdd.ypos << std::endl;

	delete & pointAdd;
	delete p1;
	delete p2;
}

Point& PntAdder(const Point &p1, const Point &p2) {
	Point* tempAdd = new Point;
	tempAdd->xpos = p1.xpos + p2.xpos;
	tempAdd->ypos = p1.ypos + p2.ypos;

	Point & pointAdd = *(tempAdd);


	return pointAdd;
}