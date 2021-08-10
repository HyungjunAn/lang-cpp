

void foo(int a, int b, int f) {}

template<typename F, typename ... Types> 
decltype(auto) chronometry(F&& f, Types&& ... args)
{
	return f(forward<Types>(args)...);
}

int main()
{
	chronometry(&foo, 1, 2, 3);
}