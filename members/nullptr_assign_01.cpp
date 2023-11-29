#include "triple.h"
#include <iostream>

int main()
{
	using namespace std;

	auto upx = make_unique<Triple>(10, 30, 56);
	cout << *upx << "\n";
	cout << (upx ? "not empty" : "empty") << '\n';

	upx = nullptr;

	(void)getchar();
	cout << (upx ? "not empty" : "empty") << '\n';
}
