#include "triple.h"
#include <memory>

int main()
{
	auto upx = std::make_unique<Triple>(10, 30, 56);

	//auto upy{ upx }; //gecersiz
	//auto upy = upx;
	//auto upy(upx);
	//unique_ptr<Triple> upy = upx;
}
