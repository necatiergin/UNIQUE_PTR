#include <memory>
#include <iostream>
#include <string>

int main()
{
	using namespace std;

	unique_ptr<string[]> upx{ new string[4]{"ali", "veli", "can", "gul"} };

	for (int i = 0; i < 4; ++i) {
		cout << upx[i] << '\n';
	}
}
