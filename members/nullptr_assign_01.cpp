#include <string>
#include <iostream>

int main()
{
	using namespace std;

	auto upx = make_unique<string>(10, 'T');
	cout << *upx << '\n';
	cout << (upx ? "not empty" : "empty") << '\n';

	upx = nullptr;

	(void)getchar();
	cout << (upx ? "not empty" : "empty") << '\n';
}
