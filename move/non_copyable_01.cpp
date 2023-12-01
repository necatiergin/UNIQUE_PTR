#include <string>
#include <memory>

int main()
{
	auto upx = std::make_unique<std::string>(20, 'E');
	
	auto up1{ upx };  //error
	auto up2 = upx;  //error
	auto up3(upx);   //error
	std::unique_ptr<std::string> up4 = upx; //error
}
