#include <memory>
#include <iostream>

struct Nec {
	Nec()
	{
		std::cout << "Nec ctor this = " << this << '\n';
	}

	~Nec()
	{
		std::cout << "Nec dtor this = " << this << '\n';
	}

	unsigned char buffer[16]{};
};


int main()
{
	using namespace std;

	{
		std::cout << "sizeof(Nec) = " << sizeof(Nec) << "\n";
		auto up = make_unique<Nec[]>(5);
	}
	std::cout << "hello world!\n";
	//...

}
