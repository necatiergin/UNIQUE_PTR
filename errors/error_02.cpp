#include "triple.h"
#include <memory>

int main()
{
	auto upx = std::make_unique<Triple>(1, 2, 3);
	std::cout << "upx = " << (upx ? "not empty" : "empty") << '\n';
	auto ptr = upx.release();
	std::cout << "upx = " << (upx ? "not empty" : "empty") << '\n';
	std::cout << *ptr << '\n';
	std::cout << std::boolalpha << (upx == nullptr) << '\n'; 
	std::cout << *upx << '\n'; //ub
}
