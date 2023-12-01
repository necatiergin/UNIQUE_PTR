#include "point.h"
#include <memory>
#include <cstdio>

int main()
{
	using namespace std;

	Point* ptr = new Point{ 1, 2, 3 };

	{
		unique_ptr<Point> upx{ ptr };
	}
	(void)getchar();
	unique_ptr<Point> upy{ ptr };  //ub, ptr is a dangling pointer
}
