#include <memory>
#include <string>

std::unique_ptr<std::string> func(void);

int main()
{
	auto uptr = func(); //valid (move semantics)
}
