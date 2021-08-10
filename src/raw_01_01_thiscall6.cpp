#include <iostream>
using namespace std;

struct A { int a; };
struct B { int b; };
struct C : public A, public B { int c; };

int main()
{
	C c;
	cout << &c << endl; // 1000번지 일때..


}