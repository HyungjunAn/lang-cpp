#include <iostream>
using namespace std;

// SFINAE �� Ȱ���ϴ� 3���� ���
// 1. ���� Ÿ������..!!
template<typename T>
typename T::type foo(T a) { cout << "T" << endl; return 0; }

void foo(...) { cout << "..." << endl; }

int main()
{
	foo(10);
}
