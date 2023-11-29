#include <memory>
#include "triple.h"
#include <iostream>

int main()
{
	using namespace std;

	auto upx = make_unique<Triple>(10, 30, 56);
	auto upy = make_unique<Triple>(-6, -1, -20);

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
