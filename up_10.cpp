#include <memory>
#include <iostream>
#include <cstdio>

int main()
{
	auto f = [](std::FILE* f) {
		std::cout << "the file is being closed...\n";
		std::fclose(f);
		};

	std::unique_ptr<std::FILE, decltype(f)> uptr(std::fopen("necati.txt", "w"), f);
	fprintf(uptr.get(), "necati ergin");
	//...
}
