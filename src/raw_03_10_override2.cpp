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
	// foo ������ �ؼ� "Derived foo" ��� ����� ������
};

int main()
{
	Base<int*>* p = new Derived;
	p->foo(0);   // "Derived foo" ������ �غ�����
}








