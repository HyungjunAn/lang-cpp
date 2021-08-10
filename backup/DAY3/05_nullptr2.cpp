#include <iostream>
using namespace std;

void foo(int    n) { cout << "int" << endl; }
void foo(double n) { cout << "double" << endl; }
void foo(bool   p) { cout << "bool" << endl; }
void foo(void*  p) { cout << "void*" << endl; }

int main()
{
	foo(0); // int..   0 은 정수형 literal
	foo(0.0); // double   0.0 은 실수형 literal
	foo(false); // bool   false 은 bool literal

	foo(nullptr); // void*   nullptr 은 포인터 literal

	// nullptr : 모든 타입의 포인터 0

}