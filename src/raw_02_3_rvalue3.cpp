#include <iostream>
using namespace std;

// 참조와 함수 오버로딩 - 239
void foo(int& a)       { cout << "int&" << endl; }       // 1
void foo(const int& a) { cout << "const int&" << endl; } // 2
void foo(int&& a)      { cout << "int&&" << endl; }      // 3

int main()
{
	int n = 10;

	foo(n);  // 1번 호출, 없으면 2번 호출
	foo(10); // 3번 호출, 없으면 2번 호출

	int& r1 = n;
	foo(r1); // 1번호출, 없으면 2번 호출


	int&& r2 = 10; // 10 은 rvalue 이지만
					// 10 을 가리키는 rvalue reference는 lvalue
					// "named rvalue reference is lvalue"
					// "temporary materization"

	foo(r2); // 핵심.. ?  1번. 
	foo(static_cast<int&&>(r2)); //3번. 
}