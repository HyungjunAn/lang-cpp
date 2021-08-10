// 3_�Ϻ���������
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
// rvalue        lvalue ==== rvalue ĳ������ ���� ========> ok.

template<typename F> void chronometry(F f, int&& arg)
{
	// 10 �� rvalue
	// int&& arg = 10;  10 : rvalue, arg : lvalue
	//f(arg); // hoo(int&) ã�Եȴ�.

	f(static_cast<int&&>(arg));
}

int main()
{
	int x = 0;

	hoo(10); // ok

	chronometry(hoo, 10); // ���� ����� �Ѵ�.!!

	cout << x << endl;
}





