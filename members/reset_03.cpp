#include "triple.h"
#include <memory>

int main()
{
	auto upx = std::make_unique<Triple>(10, 30, 56);
	std::cout << *upx << '\n';
	std::cout << (upx ? "not empty" : "empty") << '\n';
	upx.reset();
	//upx.reset(nullptr);
	std::cout << (upx ? "not empty" : "empty") << '\n';
	std::cout << "main goes on\n";
}
