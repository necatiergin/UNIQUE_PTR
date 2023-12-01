#include <memory>
#include "point.h"
#include <vector>
#include <iostream>



using NecPtr = std::unique_ptr<Point>;

int main()
{
	using namespace std;

	vector<NecPtr> myvec;

	for (int i = 0; i < 5; ++i)
		myvec.push_back(make_unique<Point>(i, i, i));

	for (int i = 0; i < 5; ++i)
		myvec.emplace_back(new Point{ i * i, i * i, i * i });

	myvec.push_back(unique_ptr<Point>{new Point{ -1, -1, -1 }});

	{
		auto uptr = move(myvec[3]);

	}

	(void)getchar();

	cout << "main devam ediyor\n";
}
