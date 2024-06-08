template<typename T>
struct DefaultDelete {
	void operator()(T* p)
	{
		delete p;
	}
};

template<typename T, typename D = DefaultDelete<T>>
class UniquePtr {
	//...
	~UniquePtr()
	{
		if (mp)
			get_deleter()(mp);
	}
private:
	T* mp;
};
