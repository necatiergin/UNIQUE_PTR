#include <memory>
#include "triple.h"
#include <vector>

using NecPtr = std::unique_ptr<Triple>;

int main()
{
	using namespace std;

	vector<NecPtr> myvec;

	for (int i = 0; i < 5; ++i)
		myvec.push_back(make_unique<Triple>(i, i, i));

	for (int i = 0; i < 5; ++i)
		myvec.emplace_back(new Triple{ i * i, i * i, i * i });

	myvec.push_back(unique_ptr<Triple>{new Triple{ -1, -1, -1 }});

	{
		auto uptr = move(myvec[3]);

	}

	(void)getchar();

	cout << "main devam ediyor\n";
}
