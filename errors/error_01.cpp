#include "triple.h"
#include <memory>
#include <cstdio>

int main()
{
	using namespace std;

	Triple* ptr = new Triple{ 1, 2, 3 };

	{
		unique_ptr<Triple> upx{ ptr };
	}
	(void)getchar();
	unique_ptr<Triple> upy{ ptr };  //ub, ptr is a dangling pointer
}
