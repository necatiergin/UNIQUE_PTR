#include <memory>
#include "point.h"
#include <iostream>


//pass-through
std::unique_ptr<Point>
func(std::unique_ptr<Point> uptr)
{
	std::cout << *uptr << '\n';
	uptr->set(0, 0, 0);
	///
	return uptr;
}

int main()
{
	auto upx = std::make_unique<Point>(1, 2, 3);

	upx = func(move(upx));

	std::cout << *upx << '\n';
}
