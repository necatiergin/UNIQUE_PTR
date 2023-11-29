#include <iostream>
#include <memory>
#include "triple.h"

int main()
{
	using namespace std;
	
	cout << "main basladi\n";

	{
		unique_ptr<Triple> upx{ new Triple{10, 20, 30} };

		cout << (upx ? "not empty" : "empty") << "\n";
		cout << *upx << '\n';
		upx->set(3, 6, 7);
		cout << *upx << '\n';
		cout << "the end of the nested block\n";
	}

	cout << "main goes on\n";
}
