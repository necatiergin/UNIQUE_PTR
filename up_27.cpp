#include <memory>
#include <iostream>
#include <string>

int main()
{
	std::unique_ptr<std::string[]> upx{ new std::string[4]{"ali", "veli", "can", "gul"} };

	for (int i = 0; i < 4; ++i) {
		std::cout << upx[i] << '\n';
	}
}
