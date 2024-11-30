#include "point.h"
#include <memory>
#include <cstdio>

int main()
{
	Point* ptr = new Point{ 1, 2, 3 };
	{
		std::unique_ptr<Point> upx{ ptr };
	}
	(void)getchar();
	std::unique_ptr<Point> upy{ ptr };  //ub, ptr is a dangling pointer
}
