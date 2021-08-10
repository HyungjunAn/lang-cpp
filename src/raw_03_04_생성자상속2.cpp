#include <iostream>
using namespace std;

class Base
{
	int data;
public:
	Base(int a) : data(a) {}
};

class Derived : public Base
{
public:
	//Derived() {} // Derived() : Base() {}  로 컴파일 됩니다.

	// 핵심 1. 기반 클래스의 디폴트 생성자가 없으면
	//        반드시 명시적으로 호출하는 코드를 만들어야 한다.
	Derived() : Base(0) {}

	//Derived(int n) : Base(n) {}

	// 기반 클래스의 생성자를 상속해 달라. - 175 page
	using Base::Base; // C++11
};

int main()
{ 
	Derived d;
	Derived d1(5);
}









