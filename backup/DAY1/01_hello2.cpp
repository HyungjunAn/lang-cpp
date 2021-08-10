#include "cppmaster.h"
#include <iostream>
using namespace std;

// www.boost.org


template<typename T> void foo(T a)
{
	LOG_FUNCTION_NAME();
	LOG_TYPE_NAME(T);  // T Ÿ�� ���
	LOG_TYPE_NAME(decltype(a));  // a Ÿ�� ���
	LOG_VALUE_CATEGORY(a); // value category ���
}  

void goo(int a, int b)
{
	LOG_FUNCTION_NAME();

	//cout << "goo" << endl;
}
// ������ ���� : ctrl + F5

int main()
{
	goo(1, 2);

	foo(10);   
	foo(3.4);
}