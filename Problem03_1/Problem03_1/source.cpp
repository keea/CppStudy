/*
*
* 좌표를 표현
*
* @date     Mon Jul 17 14:18:03 2017
* @author   keea
*/

#include <iostream>

struct Point
{
	int xpos;
	int ypos;

	void MovePos(int x, int y) {
		xpos += x;
		ypos += y;
	}

	void AddPoint(const Point &pos) {
		xpos += pos.xpos;
		ypos += pos.ypos;
	}

	void ShowPostition() {
		std::cout << "[ " << xpos << " , " << ypos << " ] " << std::endl;
	}
};

void main() {
	Point pos1 = { 12,4 };
	Point pos2 = { 20,30 };

	pos1.MovePos(-7, 10);
	pos1.ShowPostition();

	pos1.AddPoint(pos2);
	pos1.ShowPostition();
}