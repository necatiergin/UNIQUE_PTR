#include <memory>
#include "point.h"
#include <vector>

using NecPtr = std::unique_ptr<Point>;

int main()
{
	std::vector<NecPtr> myvec;

	for (int i = 0; i < 5; ++i)
		myvec.push_back(std::make_unique<Point>(i, i, i));

	for (int i = 0; i < 5; ++i)
		myvec.emplace_back(new Point{ i * i, i * i, i * i });

	myvec.push_back(NecPtr>{new Point{ -1, -1, -1 }});

	{
		auto uptr = move(myvec[3]);

	}

	(void)getchar();

	std::cout << "main is still running\n";
	//...
}
