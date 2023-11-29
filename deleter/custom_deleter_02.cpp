#include <iostream>
#include <memory>
#include <string>

int main()
{
	using namespace std;

	auto f = [](string* p) {
		cout << "lambda deleter deletes the string at the address " << p << '\n';
		delete p;
	};

	unique_ptr<string, decltype(f)> uptr1{ new string{"Necati"}, f };
	unique_ptr<string, decltype(f)> uptr2{ new string{"Necati"} }; //C++20
	unique_ptr<string, decltype([](string* p) {
		cout << "lambda deleter deletes the string at the address " << p << '\n';
		delete p;
		})> uptr3{ new string{"Necati"} }; //C++20
}
