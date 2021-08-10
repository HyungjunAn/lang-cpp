#include <iostream>
using namespace std;

// auto  와 템플릿은 타입 추론규칙이 동일합니다.

// auto 변수 = 우변;
// T a = 함수 인자;

// 규칙 1. 인자의 타입이 값 이면 함수 인자의 const, volatile, reference는 
//		   제거하고 타입이 결정된다
template<typename T> void foo(T a)
{
}

int main()
{
	int n = 10;
	int&r = n;
	const int c = n;
	const int& cr = c;
	foo(n); // int
	foo(r); // int
	foo(c); // int
	foo(cr);// int

	// 주의 : 인자의 const 속성만 제거된다.
	const char* s = "hello";
	foo(s); // T : const char*


	const char* const s2 = "aaa";
	foo(s2); // T : const char*
}





