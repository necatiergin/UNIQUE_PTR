#include <memory>
#include "point.h"

std::unique_ptr<Point>make_point(int a, int b, int c)
{
	return std::make_unique<Point>(a, b, c);
}

int main()
{
	auto p1 = make_point(1, 2, 3);
	auto p2 = make_point(-1, -2, -3);
}
