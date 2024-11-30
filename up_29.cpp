#include <iostream>
#include "point.h"

int main()
{
	auto upx = std::make_unique<Point>(10, 30, 56);

	std::cout << "upx = " << (upx ? "not empty" : "empty") << '\n';

	auto upy = move(upx);

	(void)std::getchar();

	std::cout << "upx = " << (upx ? "not empty" : "empty") << '\n';
	std::cout << "upy = " << (upy ? "not empty" : "empty") << '\n';
}
