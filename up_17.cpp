#include <memory>
#include <iostream>

int main()
{
	auto ups = std::make_unique<std::string>(40, 'A');
	std::cout << "*ups         = " << *ups << '\n';
	std::cout << "ups          = " << ups << '\n';
	std::cout << "ups.get()    = " << ups.get() << '\n';
	std::cout << "ups->data()  = " << (void*)ups->data() << '\n';
}

