//constructor with T* param is explicit

#include <memory>
#include <string>

std::unique_ptr<std::string> foo()
{
	return new std::string{"necati"}; //invalid
}

void bar(std::unique_ptr<std::string>);

int main()
{
	using namespace std;

	//unique_ptr<string> ux = new string; //invalid
	unique_ptr<string> ux(new string); //valid
	//bar(new string); //invalid
	bar(unique_ptr<string>(new string)); //valid
}
