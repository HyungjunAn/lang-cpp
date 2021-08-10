#include <iostream>
using namespace std;

template<typename T> void print(T a)
{
	cout << a << endl;
}

//int ret = foo(), 10;

template<typename ... Types> void foo(Types ... args)
{
	//print(args...); // print(1,2,3)   .. error
	
	print(args)...; // print(1), print(2), print(3)  error

	int dummy[] = { 0, (print(args), 0)... };


	// args에서 요소 꺼내기 1. pack expansion 사용
	// 단점 : 모든 요소의 타입이 같아야 한다.
	int x[] = { args... };

	for (auto n : x)
		cout << n << endl;
}

int main()
{
	foo(1, 2, 3);	// Types : int, int, int
					// args  : 1,2,3
}