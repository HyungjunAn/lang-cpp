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
	// �Լ��� �ʿ��� �ڸ��� �Լ� �̸��� ������� ����
	// �Լ� ��ü �ڵ带 �ִ°�
	// [] : lambda introducer
	//	    ���� ǥ������ ���۵��� �˸��� ���.
	foo( [](int a, int b) { return a + b; });

	add(1, 2);

	[](int a, int b) {cout << "hello"<< endl; return a + b; }(1,2);

	pthread_create(..., �Լ�, ...);
}
