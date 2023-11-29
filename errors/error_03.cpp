#include <memory>
#include "triple.h"

int main()
{
	auto upx = std::make_unique<Triple>(1, 4, 7);
	Triple* ptr = upx.get();

	std::unique_ptr<Triple> upy(ptr); //ub
}
