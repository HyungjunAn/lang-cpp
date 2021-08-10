// 3_완벽한전달자
#include <iostream>
using namespace std;

void foo(int  n) { n = 10; }
void goo(int& n) { n = 10; }
void hoo(int&& n) {}

/*
template<typename F> void chronometry(F f, int& arg)
{
	//f(arg);
	f(static_cast<int&>(arg));
}

template<typename F> void chronometry(F f, int&& arg)
{
	f(static_cast<int&&>(arg));
}
*/


// lvalue(n) => T : int&   T&& : int& && => chronometry( int&)
// rvalue(1) => T : int    T&& : int&&   => chronometry(int&&)
template<typename F, typename T> 
void chronometry(F f, T&& arg)
{
	f(static_cast<T&&>(arg));
}



int main()
{
	int x = 0;

	hoo(10); // ok

	chronometry(hoo, 10); // 문제 없어야 한다.!!

	cout << x << endl;
}





