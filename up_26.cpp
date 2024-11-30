#include <memory>
#include "point.h"
#include <iostream>

int main()
{
	std::unique_ptr<Point[]> uptr{ new Point[5] };
	for (int i = 0; i < 5; ++i) {
		uptr[i].set(i, i, i);
		std::cout << uptr[i] << '\n';
	}
}
