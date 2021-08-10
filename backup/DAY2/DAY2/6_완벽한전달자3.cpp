// 3_완벽한전달자
#include <iostream>
using namespace std;

void foo(int  n) { n = 10; }
void goo(int& n) { n = 10; }

void hoo(int&& n) {}

template<typename F> void chronometry(F f, int& arg)
{
	f(arg) ;
}
// main      chronometry                    hoo(int&&)
// hoo(10) ======================================> ok
// 10 =======> int&& arg
// rvalue        lvalue ==== rvalue 캐스팅후 전달 ========> ok.

template<typename F> void chronometry(F f, int&& arg)
{
	// 10 은 rvalue
	// int&& arg = 10;  10 : rvalue, arg : lvalue
	//f(arg); // hoo(int&) 찾게된다.

	f(static_cast<int&&>(arg));
}

int main()
{
	int x = 0;

	hoo(10); // ok

	chronometry(hoo, 10); // 문제 없어야 한다.!!

	cout << x << endl;
}





