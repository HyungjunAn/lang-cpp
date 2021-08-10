#include <iostream>
using namespace std;
// T�� ���������� �����ϴ� ���

// traits : T�� �پ��� Ư���� �����ϴ� ���

// 1. primary template : false ����(value = false ����ǹ�)
// 2. �κ� ����ȭ       : true ����( value = true ����ǹ�)

template<typename T> struct IsPointer
{
	enum { value = false };		
};

template<typename T> struct IsPointer<T*>
{
	enum { value = true };
};

template<typename T> void foo(T a)
{
	if (IsPointer<T>::value)
		cout << "������" << endl;
	else
		cout << "������ �ƴ�" << endl;
}

int main()
{
	int n = 10;
	foo(n);
	foo(&n);
}

