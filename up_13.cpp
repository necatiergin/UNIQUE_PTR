#include <string>
#include <iostream>

void mydeleter(std::string* p)
{
	std::cout << "delete edilen nesne adresi: " << p << '\n';
	delete p;
};

int main()
{
	using namespace std;

	unique_ptr<string, decltype(&mydeleter)> uptr{ new string{"necati ergin"}, mydeleter };
}
