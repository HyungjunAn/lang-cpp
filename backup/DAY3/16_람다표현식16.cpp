#include <iostream>
using namespace std;

/*
// 함수 인자는 결국 지역변수입니다.
void goo(int a, int b)
{
	int c;
	auto f = [=]() {return a + b +c; }; // ok..

	cout << sizeof(f) << endl; // 12
}
*/

// 35 page 아래쪽
class Test
{
	int data;
public:
	void foo()  // void foo(Test* this)
	{
		// 지역변수가 아닌 멤버 데이타 접근
		//auto f = [](int a) { return a + data; }; // error
//		auto f = [data](int a) { return a + data; };// error

		// ok. 원본 변경도 가능.
		auto f = [this](int a) { data = 10;  return a + data; };// ok

		f(0);

		// 객체를 복사본으로 캡쳐 - c++17
		auto f2 = [*this](int a) mutable { data = 10;  return a + data; };// ok

	}
};

int main()
{
	Test t;
	t.foo(); // foo(&t)
}


