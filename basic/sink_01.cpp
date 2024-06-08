#include "point.h"
#include <memory>
#include <iostream>

//sink
void func(std::unique_ptr<Point> uptr)
{
	// code
	std::cout << *uptr << '\n';
	// code
}

int main()
{
	func(std::make_unique<Point>(1, 5, 6));
	(void)std::getchar();
	std::cout << "main goes on\n";
}
