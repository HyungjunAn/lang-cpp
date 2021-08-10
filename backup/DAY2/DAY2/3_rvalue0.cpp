#include <iostream>
using namespace std;


// lvalue : =의 왼쪽과 오른쪽에 모두올수 있다. 
//			이름이 있다. 단일식을 넘어서 메모리에 존재.
//			참조를 리턴하는 함수
//			주소연산자로 주소를 구할수 있다.

// rvalue : =의 오른쪽에만 올수 있다
//			이름이 없다. 단일식에서만 사용.
//			값을 리턴하는 함수
//			주소연산자로 주소를 구할수 없다.
//			임시객체, literal

int x = 10;
int  foo() { return x; }
int& goo() { return x; }

int main()
{
	int v1 = 10;
	int v2 = 20;

	v1 = 10; // v1 : lvalue, 10 : rvalue
	10 = v2; 
	v2 = v1;

	foo() = 20; // error
	goo() = 20; // ok

	cout << &v1 << endl; // ok.
	cout << &10 << endl; // error. rvalue는 주소를구할수 없다.


	const int c = 10;
	c = 20;  // lvalue ? rvalue
				// 수정 불가능한 lvalue

	enum { red = 1, blue = 2};

	cout << &red << endl; // error. rvalue

	

	// rvalue는 상수이다 ?  아니다... 
	// 상수 일수도 있고, 아닌경우도 있다.
	Point(1, 2).x = 10; // error
	Point(1, 2).set(10, 20); // ok 변경가능

}










