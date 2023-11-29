#include <memory>
#include <iostream>

int main()
{
	using namespace std;

	auto ups = make_unique<string>(40, 'A');
	cout << "*ups         = " << *ups << '\n';
	cout << "ups          = " << ups << '\n';
	cout << "ups.get()    = " << ups.get() << '\n';
	cout << "ups->data()  = " << (void *)ups->data() << '\n';
}
