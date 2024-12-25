#include <iostream>
#include <memory>

template<typename T, typename ...Args>
std::unique_ptr<T> MakeUnique(Args && ...args)
{
	return std::unique_ptr<T> {new T(std::forward<Args>(args)...)};
}

class Point {
public:
	Point() = default;
	Point(int x, int y, int z) : mx{x}, my{y}, mz{z} 
	{
		std::cout << "Point ctor\n"; 
	}

	~Point()
	{
		std::cout << "Point dtor\n"; 
	}

	Point& set(int x, int y, int z)
	{
		mx = x;
		my = y;
		mz = z;
		return *this;
	}

	friend std::ostream& operator<<(std::ostream& os, const Point& p)
	{
		return os << '(' << p.mx << ", " << p.my << ", " << p.mz << ')';
	}

private:
	int mx{}, my{}, mz{};
};


int main()
{
	std::cout << "main starts running\n";
	auto uptr = MakeUnique<Point>(10, 20, 30);

	std::cout << *uptr << '\n';
	uptr->set(3, 4, 7);
	std::cout << *uptr << '\n';
}
