// 5_override
#include <iostream>
using namespace std;

/*
int n = 0;

const int* p1 = &n; // 
int* const p2 = &n; // 
int const* p3 = &n; // 
*/

template<typename T> class Base
{
public:
	virtual void foo(const T a)  {	cout << "Base foo" << endl;	}
};

class Derived : public Base<int*>
{
public:
	// foo 재정의 해서 "Derived foo" 라고 출력해 보세요
};

int main()
{
	Base<int*>* p = new Derived;
	p->foo(0);   // "Derived foo" 나오게 해보세요
}








