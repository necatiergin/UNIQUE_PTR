#include <memory>
#include "triple.h"

std::unique_ptr<Triple>make_triple(int a, int b, int c)
{
	return std::make_unique<Triple>(a, b, c);
}

int main()
{
	auto p1 = make_triple(1, 2, 3);
	auto p2 = make_triple(-1, -2, -3);
}
