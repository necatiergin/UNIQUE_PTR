#include <memory>
#include "point.h"

int main()
{
	auto upx = std::make_unique<Point>(1, 4, 7);
	Point* ptr = upx.get();

	std::unique_ptr<Point> upy(ptr); //ub
}
