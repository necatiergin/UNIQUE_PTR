#include <memory>
#include "triple.h"

//pass-through
std::unique_ptr<Triple>
func(std::unique_ptr<Triple> uptr)
{
	std::cout << *uptr << "\n";
	uptr->set(0, 0, 0);
	///
	return uptr;
}

int main()
{
	auto upx = std::make_unique<Triple>(1, 2, 3);

	upx = func(move(upx));

	std::cout << *upx << "\n";
}
