#include <memory>
#include <iostream>
#include <string>

int main()
{
	using namespace std;

	unique_ptr<string> upx;

	if (upx)
		cout << "not empty\n";
	else
		cout << "empty";

	if (upx != nullptr)
		cout << "not empty\n";
	else
		cout << "empty";

	if (upx.get())
		cout << "not empty\n";
	else
		cout << "empty";

	if (upx.get() != nullptr)
		cout << "not empty\n";
	else
		cout << "empty";
}
