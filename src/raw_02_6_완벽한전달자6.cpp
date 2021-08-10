// 3_완벽한전달자
#include <iostream>
using namespace std;

int x = 0;

int& foo(int a) { return x; }

template<typename F, typename T> void chronometry(F f, T&& arg)
{
	f(forward<T>(arg)); 
}

int main()
{
	int& r = chronometry(foo, 10);

	r = 10;
	cout << r << endl;
}



