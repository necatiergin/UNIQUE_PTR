#include <memory>
#include <iostream>
#include <string>

int main()
{
	using namespace std;

	cout << "sizeof(string *)           = " << sizeof(string *) << '\n';
	cout << "sizeof(unique_ptr<string>) = " << sizeof(unique_ptr<string>) << '\n';
}
