#include <iostream>
using namespace std;

template<typename T> void foo(T a) {}

int main()
{
	foo(1);       // int

	foo({ 1,2 }); // error.. 

	// {1,2} 는 auto 변수에 담을수 있다.
	//          함수 템플릿에 보낼수 없다.

	// a1, a2, a3 의 타입은 ?
	auto a1 = 1;		// int
	auto a2 = { 1 };    // initializer_list
	auto a3 = { 1,2 };	// initializer_list




	// 변수의 타입을 출력하는 방법.
	cout << typeid(a1).name() << endl;
	cout << typeid(a2).name() << endl;
	cout << typeid(a3).name() << endl;
}