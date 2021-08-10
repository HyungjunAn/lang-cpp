#include <iostream>
using namespace std;

// 234 page
struct Base { int value = 10; };

struct Derived : public Base
{
	int value = 20;    // C++11은 이렇게 사용가능
};

int main()
{
	Derived d;
	cout << d.value << endl; //  20

	// 기반 클래스 멤버에 접근하려면 기반 클래스 타입으로
	// 캐스팅한다.
	cout << static_cast<Base>(d).value << endl; // 10
	cout << static_cast<Base&>(d).value << endl; // 10

	static_cast<Base>(d).value = 100; // error
	static_cast<Base&>(d).value = 100; // ok

}











