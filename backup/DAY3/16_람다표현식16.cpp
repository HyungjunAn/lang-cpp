#include <iostream>
using namespace std;

/*
// �Լ� ���ڴ� �ᱹ ���������Դϴ�.
void goo(int a, int b)
{
	int c;
	auto f = [=]() {return a + b +c; }; // ok..

	cout << sizeof(f) << endl; // 12
}
*/

// 35 page �Ʒ���
class Test
{
	int data;
public:
	void foo()  // void foo(Test* this)
	{
		// ���������� �ƴ� ��� ����Ÿ ����
		//auto f = [](int a) { return a + data; }; // error
//		auto f = [data](int a) { return a + data; };// error

		// ok. ���� ���浵 ����.
		auto f = [this](int a) { data = 10;  return a + data; };// ok

		f(0);

		// ��ü�� ���纻���� ĸ�� - c++17
		auto f2 = [*this](int a) mutable { data = 10;  return a + data; };// ok

	}
};

int main()
{
	Test t;
	t.foo(); // foo(&t)
}


