#include "cppmaster.h"
#include <iostream>
using namespace std;

// www.boost.org


template<typename T> void foo(T a)
{
	LOG_FUNCTION_NAME();
	LOG_TYPE_NAME(T);  // T 타입 출력
	LOG_TYPE_NAME(decltype(a));  // a 타입 출력
	LOG_VALUE_CATEGORY(a); // value category 출력
}  

void goo(int a, int b)
{
	LOG_FUNCTION_NAME();

	//cout << "goo" << endl;
}
// 컴파일 실행 : ctrl + F5

int main()
{
	goo(1, 2);

	foo(10);   
	foo(3.4);
}