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
	//Derived() {} // Derived() : Base() {}  �� ������ �˴ϴ�.

	// �ٽ� 1. ��� Ŭ������ ����Ʈ �����ڰ� ������
	//        �ݵ�� ��������� ȣ���ϴ� �ڵ带 ������ �Ѵ�.
	Derived() : Base(0) {}

	//Derived(int n) : Base(n) {}

	// ��� Ŭ������ �����ڸ� ����� �޶�. - 175 page
	using Base::Base; // C++11
};

int main()
{ 
	Derived d;
	Derived d1(5);
}









