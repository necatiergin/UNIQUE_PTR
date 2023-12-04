#include <memory>
#include <iostream>

struct Data {
	Data()
	{
		std::cout << "default ctor, this " << this << '\n';
	}

	~Data()
	{
		std::cout << "destructor, this " << this << '\n';
	}
	char buf[256]{};
};


int main()
{
	std::cout << "sizeof(Data) = " << sizeof(Data) << "\n";

	std::unique_ptr<Data[]>up(new Data[4]);
}
