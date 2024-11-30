#include <memory>
#include "point.h"
#include <iostream>

int main()
{
	using std::cout;

	auto upx = std::make_unique<Point>(10, 30, 56);
	auto upy = std::make_unique<Point>(-6, -1, -20);

	cout << "upx = " << (upx ? "not empty" : "empty") << '\n';
	cout << "upy = " << (upy ? "not empty" : "empty") << '\n';
	cout << "*upx = " << *upx << '\n';
	cout << "*upy = " << *upy << '\n';
	(void) getchar();
	upx = move(upy);
	cout << "upx = " << (upx ? "not empty" : "empty") << '\n';
	cout << "upy = " << (upy ? "not empty" : "empty") << '\n';
	(void) getchar();
}
