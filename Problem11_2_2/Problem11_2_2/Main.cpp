#include <iostream>
#include "BoundCheck2DIntArray.h"



void main()
{
	int row = 5;
	int col = 7;
	BoundCheck2DIntArray t(col, row);
	int cunt = 0;
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			t[i][j] = cunt;
			std::cout << t[i][j] << std::endl;
			cunt++;
		}
		std::cout << std::endl;
	}
}