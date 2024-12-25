#include <iostream>
#include <memory>


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
	using std::cout, std::unique_ptr;

	cout << "main started\n";

	{
		unique_ptr<Point> upx{ new Point{10, 20, 30} };

		cout << (upx ? "not empty" : "empty") << "\n";
		cout << *upx << '\n';
		upx->set(3, 6, 7);
		cout << *upx << '\n';
	}

	cout << "main goes on\n";
}
