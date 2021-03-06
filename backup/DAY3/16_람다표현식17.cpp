#include <iostream>
using namespace std;

int main()
{
	// nullary lambda
	auto f1 = [](int a) {return a * a; }; // 인자가 한개인경우
	auto f2 = []() {cout << "A" << endl; };
	auto f3 = [] {cout << "A" << endl; }; // 인자가 없으면() 생략가능


	// 숙제. 람다인자는 auto가능 - 원리가 무엇일지 조사해 보세요..
	auto f4 = [](auto a, auto b) { return a + b; };

	cout << f4(1, 2.5) << endl;
}

class ClosureType
{
public:
	template<typename T1, typename T2>
	decltype(auto) operator()(T1 a, T2 b)
	{
		return a + b;
	}
};

//void foo(auto a) {} // error. 함수 인자로 auto 안됨.
