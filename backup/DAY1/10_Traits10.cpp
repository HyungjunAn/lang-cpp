#include <iostream>
#include "cppmaster.h"
using namespace std;

// traits10.cpp, 98 page ~
// traits�� ����
// 1. Ÿ�� ���� : is_xxxx<T>::value
// 2. ���� Ÿ�Ծ�� : xxx<T>::type

// ���� Ÿ�Կ��� ������ Ÿ���� ���� traits �����
// 1. ���ø����� ����ü�� �����.
// 2. typedef T type;   �� �ִ´�.
// 3. ���ϴ� Ÿ��(�����͸� ������ Ÿ��)�� ������ �ֵ���
//    �κ� Ư��ȭ�� ���ؼ� Ÿ���� �����Ѵ�.
template<typename T> struct xremove_pointer
{
	typedef T type;
};
template<typename T> struct xremove_pointer<T*>
{
	typedef T type;
};
int main()
{
	//bool b = is_pointer<T>::value;

	xremove_pointer<int *>::type n; // int

	LOG_TYPE_NAME( decltype(n) );
}
