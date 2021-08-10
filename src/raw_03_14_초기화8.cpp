#include <iostream>
using namespace std;

template<typename T> void foo(T a) {}

int main()
{
	foo(1);       // int

	foo({ 1,2 }); // error.. 

	// {1,2} �� auto ������ ������ �ִ�.
	//          �Լ� ���ø��� ������ ����.

	// a1, a2, a3 �� Ÿ���� ?
	auto a1 = 1;		// int
	auto a2 = { 1 };    // initializer_list
	auto a3 = { 1,2 };	// initializer_list




	// ������ Ÿ���� ����ϴ� ���.
	cout << typeid(a1).name() << endl;
	cout << typeid(a2).name() << endl;
	cout << typeid(a3).name() << endl;
}