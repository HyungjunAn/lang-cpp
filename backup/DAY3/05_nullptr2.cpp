#include <iostream>
using namespace std;

void foo(int    n) { cout << "int" << endl; }
void foo(double n) { cout << "double" << endl; }
void foo(bool   p) { cout << "bool" << endl; }
void foo(void*  p) { cout << "void*" << endl; }

int main()
{
	foo(0); // int..   0 �� ������ literal
	foo(0.0); // double   0.0 �� �Ǽ��� literal
	foo(false); // bool   false �� bool literal

	foo(nullptr); // void*   nullptr �� ������ literal

	// nullptr : ��� Ÿ���� ������ 0

}