// 3_완벽한전달자
#include <iostream>
using namespace std;

void foo(int  n) { n = 10; }
void goo(int& n) { n = 10; }

// 인자가 int계열인 경우만 생각해 봅시다.
// 핵심 1. 인자를 받을때 int& 와 int&& 의 2개의 함수를 제공해야 한다.

template<typename F> void chronometry(F f, int& arg)
{
	f(arg);
}
template<typename F> void chronometry(F f, int&& arg)
{
	f(arg);
}
int main()
{
	int x = 0;
	
	chronometry(&goo, x);
	chronometry(&foo, 10);

	cout << x << endl;
}


