#include <iostream>
using namespace std;

struct A 
{
	int a; 
	void fa() { cout << this << endl; }
};

struct B 
{ 
	int b; 
	void fb() { cout << this << endl; }
};

struct C : public A, public B { int c; };

int main()
{
	C c;
	cout << &c << endl; // 1000번지 일때..


}