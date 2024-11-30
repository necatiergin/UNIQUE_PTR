#include <iostream>
#include <memory>
#include <vector>

std::unique_ptr<std::string> get_name(const char* p)
{
	return std::make_unique<std::string>(p);
}

int main()
{
	using strptr = std::unique_ptr<std::string>;
	using upvector = std::vector<strptr>;

	upvector upvec;

	upvec.push_back(std::make_unique<std::string>("alican"));
	upvec.push_back(strptr{new std::string{ "muzaffer" }});
	upvec.emplace_back(new std::string{ "ayse" });
	upvec.push_back(get_name("ziya"));

	//for (auto up : upvec) {  //invalid
	for (const auto& up : upvec) {
		std::cout << *up << '\n';
	}
}
