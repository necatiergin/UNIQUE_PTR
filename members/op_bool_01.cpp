#include <memory>
#include <string>
#include <iostream>

int main()
{
	std::unique_ptr<std::string> upx;

	std::cout.setf(std::ios::boolalpha);

	if (upx != nullptr)
		std::cout << "dolu\n";
	else
		std::cout << "bos\n";

	if (upx)
		std::cout << "dolu\n";
	else
		std::cout << "bos\n";

	upx.reset(new std::string{ "neco" });

	if (upx)
		std::cout << "dolu\n";
	else
		std::cout << "bos\n";
}
