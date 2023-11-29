#include <iostream>
#include <memory>
#include <vector>

std::unique_ptr<std::string> get_name(const char* p)
{
	return std::make_unique<std::string>(p);
}

int main()
{
	using namespace std;

	vector<unique_ptr<string>> upvec;

	upvec.push_back(make_unique<string>("alican"));
	upvec.push_back(unique_ptr<string>{new string{ "muzaffer" }});
	upvec.emplace_back(new string{ "ayse" });
	upvec.push_back(get_name("ziya"));

	//for (auto up : upvec) {  //gecersiz
	for (auto &up : upvec) {  
		std::cout << *up << "\n";
	}
}
