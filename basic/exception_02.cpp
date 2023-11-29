#include <memory>
#include "point.h"

void func()
{
	throw std::exception{};
}

int main()
{
	using namespace std;

	cout << unitbuf;
	cout << "main started\n";

	try {
		unique_ptr<Point>upx(new Point{1, 2, 3});

		cout << (upx ? "not empty" : "empty") << '\n';
		cout << *upx << '\n';
		upx->set(3, 6, 7);
		func();
		cout << *upx << '\n';
		cout << "end of the block\n";
	}
	catch (const std::exception& ex) {
		cout << "exception caught: " << ex.what() << '\n';

	}

	cout << "main goes on\n";
}
