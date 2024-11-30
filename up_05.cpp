#include "point.h"
#include <memory>
#include <iostream>

int main()
{
	auto upx = std::make_unique<Point>(10, 30, 56);
	std::cout << *upx << '\n';
	std::cout << (upx ? "not empty" : "empty") << '\n';
	upx.reset();
	//upx.reset(nullptr);
	std::cout << (upx ? "not empty" : "empty") << '\n';
	std::cout << "main goes on\n";
}
