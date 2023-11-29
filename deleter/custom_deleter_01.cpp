#include <string>
#include <iostream>
#include <memory>

struct SDeleter {
	void operator()(std::string* p)
	{
		std::cout << "the address of deleted object: " << p << '\n';
		delete p;
	}
};

int main()
{
	using namespace std;

	unique_ptr<string, SDeleter> uptr{ new string{"Necati Ergin"} };
}
