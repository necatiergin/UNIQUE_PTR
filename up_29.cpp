#include <iostream>
#include "triple.h"

int main()
{
	auto upx = std::make_unique<Triple>(10, 30, 56);

	std::cout << "upx = " << (upx ? "not empty" : "empty") << '\n';

	auto upy = move(upx);

	(void)getchar();

	std::cout << "upx = " << (upx ? "not empty" : "empty") << '\n';
	std::cout << "upy = " << (upy ? "not empty" : "empty") << '\n';
}
