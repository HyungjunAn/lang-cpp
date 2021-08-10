
#include <iostream>
using namespace std;
// chronometry.cpp
int x = 0;
int& foo(int n) { return x; }

template<typename F, typename T> 
decltype(auto) chronometry(F f, T&& arg)
{
	return f( forward<T>(arg) );
}

int main()
{
	//int& ret = foo(0);
	int& ret = chronometry(&foo, 0);

	ret = 100;
	cout << x << endl; // 100
}
