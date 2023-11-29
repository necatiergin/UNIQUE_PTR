#include <memory>
#include <iostream>

int main()
{
	auto f = [](std::FILE* f) {
		std::cout << "dosya kapatiliyor\n";
		std::fclose(f);
	};

	std::unique_ptr<std::FILE, decltype(f)> uptr(std::fopen("deneme.txt", "w"), f);
}
