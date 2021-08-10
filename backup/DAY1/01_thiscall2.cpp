#include <iostream>
using namespace std;

// 주제 : 일반 함수 포인터와 멤버 함수 포인터
// 핵심 1. 일반 함수 포인터에 멤버함수의 주소를 담을수 없다.
// 핵심 2. 일반 함수 포인터에 static 멤버함수의 주소를 담을수 있다. 
// 핵심 3. 멤버 함수 포인터를 만들고 사용하는 방법
//        교재 8page, 아래 main 함수 참고
class SomeClass
{
public:
	void goo(int a) {	cout << "SomeClass::goo" << endl; }
};
void foo(int a) { cout << "foo" << endl; }

int main()
{
	void(*f1)(int) = &foo;  // ok
	//void(*f2)(int) = &SomeClass::goo; // error, 
								// this가 추가되는 함수

	// 8page. 멤버함수의 주소를 담는 함수 포인터 만들기
	void(SomeClass::*f)(int) = &SomeClass::goo; // ok..

	f(0);// error. goo 는 멤버 함수 이므로 객체(this) 가 있어야 한다.

	SomeClass sc;
	//sc.f(0); // error. f 라는 멤버를 찾게 된다.

	//sc.*f(0); // .* : pointer to member 라는 연산자
				// error. 연산자 우선순위 문제 f(0)을 먼저 실행
	(sc.*f)(0); // ok.
	// (psc->*f)(0)
}
