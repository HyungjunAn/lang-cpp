#include <iostream>
#include <type_traits>
using namespace std;

// 108 page
// C++11 ǥ�� traits �� ����Ϸ���
// 1. ��� ���� ���� < type_traits> 


// using �� ����ؼ� ����ȭ �Ѵ�. - 106
//template<typename T>
//using remove_pointer_t = typename remove_pointer<T>::type;

template<typename T> void foo(T a)
{
	// ������ ���� ����
	//bool b1 = is_pointer<T>::value; // C++11 style
	bool b1 = is_pointer_v<T>;         // C++17 style

	// �����͸� ������ Ÿ�� ���
	//typename remove_pointer<T>::type n1; // C++11 style

	remove_pointer_t<T> n1; // C++14 style

	//remove_
}

int main()
{
	int n = 0;
	foo(&n);
}