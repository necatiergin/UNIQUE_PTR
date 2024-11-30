#include <memory>

struct Data {
	//...
};

Data* createData(void);
void  cleanup(Data* p);


struct DataCleaner {
	void operator()(Data* p)
	{
		cleanup(p);
	}
};

int main()
{
	{
		std::unique_ptr<Data, DataCleaner> uptr{ createData() };
	}
}
