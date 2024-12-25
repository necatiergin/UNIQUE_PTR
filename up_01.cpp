#include <memory>
#include <iostream>
#include <string>

int main()
{
	using std::cout, std::string, std::unique_ptr;

	cout << "sizeof(string *)           = " << sizeof(string*) << '\n';
	cout << "sizeof(unique_ptr<string>) = " << sizeof(unique_ptr<string>) << '\n';
}
