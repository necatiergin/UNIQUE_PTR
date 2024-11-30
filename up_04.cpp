#include <memory>
#include <string>
#include <iostream>

int main()
{
	try {
		std::unique_ptr<std::string> upx;
		std::cout << *upx << '\n';  //ub
	}
	catch (const std::exception& ex) {
		std::cout << "hata yakalandi : " << ex.what() << '\n';
	}
}
