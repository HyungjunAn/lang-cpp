#include <iostream>
using namespace std;


void foo( int(*f)(int, int) )
{
	f(1, 2);
}

int add(int a, int b) { return a + b; }

int main()
{
	foo(add);

	// lambda expression
	// 함수가 필요한 자리에 함수 이름을 사용하지 말고
	// 함수 자체 코드를 넣는것
	// [] : lambda introducer
	//	    람다 표현식이 시작됨을 알리는 약속.
	foo( [](int a, int b) { return a + b; });

	add(1, 2);

	[](int a, int b) {cout << "hello"<< endl; return a + b; }(1,2);

	pthread_create(..., 함수, ...);
}
