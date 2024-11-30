#include <string>
#include <iostream>

int main()
{
	auto upx = std::make_unique<std::string>(10, 'T');
	std::cout << *upx << '\n';
	std::cout << (upx ? "not empty" : "empty") << '\n';

	upx = nullptr;

	(void)std::getchar();
	std::cout << (upx ? "not empty" : "empty") << '\n';
}
