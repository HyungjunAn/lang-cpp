#include <iostream>
using namespace std;

// 람다 표현식을 인자로 방법들..
// 캡쳐하지 않은 람다표현식 : 값 타입으로 받아도 괜찮다.(크기 1byte)
//template<typename T> void foo(T f)

// T& : 
//template<typename T> void foo(T& f)  // error. 람다표현식은 rvalue

// const T& : mutable 람다를 받을수 없다.
//template<typename T> void foo(const T& f)

// T&& : 가장 좋은 코드.
template<typename T> void foo(T&& f)  
{
	//f(1, 2);

	// lvalue => rvalue로 변경후 함수 사용.
	forward<T>(f) (1, 2);
}

int main()
{
	int n = 0;
	foo( [n](int a, int b) mutable { return a + b; } );
}