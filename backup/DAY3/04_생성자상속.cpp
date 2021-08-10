#include <iostream>
using namespace std;

// 177 page
class Base
{
public:
	void foo(double d) { cout << "double" << endl; } // 1
	void foo(int, int) { cout << "int,int" << endl; }// 2
};
class Derived : public Base
{
public:
	// C++98
	using Base::foo;  // ��� Ŭ������ foo �� ����Ҽ� �ְ� �ش޶�

	// � �Լ��� �����ϸ� ������ �̸��� ��� Ŭ���� �Լ���
	// �������� �ȴ�.
	void foo(int) { cout << "int" << endl; } // 3
};
int main()
{
	Derived d;
	d.foo(3.4); //  3       1
	d.foo(1, 1); // error   2
}




