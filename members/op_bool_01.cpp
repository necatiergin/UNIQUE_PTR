#include <memory>
#include <string>
#include <iostream>

int main()
{
	std::unique_ptr<std::string> upx;

	std::cout.setf(std::ios::boolalpha);

	if (upx != nullptr)
		std::cout << "not empty\n";
	else
		std::cout << "empty\n";

	if (upx)
		std::cout << "not empty\n";
	else
		std::cout << "empty\n";

	upx.reset(new std::string{ "necati ergin" });

	if (upx)
		std::cout << "not empty\n";
	else
		std::cout << "empty\n";

	std::cout << (upx ? "not " : "") << "empty" << '\n';
}
