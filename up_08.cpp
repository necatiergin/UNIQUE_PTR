#include <iostream>
#include <memory>
#include "point.h"

int main()
{
	using std::cout, std::unique_ptr;

	cout << "main started\n";

	{
		unique_ptr<Point> upx{ new Point{10, 20, 30} };

		cout << (upx ? "not empty" : "empty") << "\n";
		cout << *upx << '\n';
		upx->set(3, 6, 7);
		cout << *upx << '\n';
		cout << "the end of the nested block\n";
	}

	cout << "main goes on\n";
}
