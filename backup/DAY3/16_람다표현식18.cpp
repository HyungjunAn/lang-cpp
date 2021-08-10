#include <iostream>
using namespace std;

// ���� ǥ������ ���ڷ� �����..
// ĸ������ ���� ����ǥ���� : �� Ÿ������ �޾Ƶ� ������.(ũ�� 1byte)
//template<typename T> void foo(T f)

// T& : 
//template<typename T> void foo(T& f)  // error. ����ǥ������ rvalue

// const T& : mutable ���ٸ� ������ ����.
//template<typename T> void foo(const T& f)

// T&& : ���� ���� �ڵ�.
template<typename T> void foo(T&& f)  
{
	//f(1, 2);

	// lvalue => rvalue�� ������ �Լ� ���.
	forward<T>(f) (1, 2);
}

int main()
{
	int n = 0;
	foo( [n](int a, int b) mutable { return a + b; } );
}