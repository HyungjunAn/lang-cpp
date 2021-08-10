#include <iostream>
using namespace std;

// 234 page
struct Base { int value = 10; };

struct Derived : public Base
{
	int value = 20;    // C++11�� �̷��� ��밡��
};

int main()
{
	Derived d;
	cout << d.value << endl; //  20

	// ��� Ŭ���� ����� �����Ϸ��� ��� Ŭ���� Ÿ������
	// ĳ�����Ѵ�.
	cout << static_cast<Base>(d).value << endl; // 10
	cout << static_cast<Base&>(d).value << endl; // 10

	static_cast<Base>(d).value = 100; // error
	static_cast<Base&>(d).value = 100; // ok

}











