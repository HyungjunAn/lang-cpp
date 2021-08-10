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
	using Base::foo;  // 기반 클래스의 foo 도 사용할수 있게 해달라

	// 어떤 함수를 제공하면 동일한 이름의 기반 클래스 함수는
	// 가려지게 된다.
	void foo(int) { cout << "int" << endl; } // 3
};
int main()
{
	Derived d;
	d.foo(3.4); //  3       1
	d.foo(1, 1); // error   2
}




