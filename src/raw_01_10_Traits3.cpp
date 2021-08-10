#include <iostream>
using namespace std;

// template ���
// 1. �Լ� �Ǵ� Ŭ������ �����ϱ� ���� ������ ���� ����

// 2. ���򿡴� ���ø����� T�� Ư���� �����ϱ� ���� �پ��� 
//    ��Ÿ �Լ� ����⿡ �θ� Ȱ��

#include <type_traits> // C++11 ���� �߰��� ���
// is_pointer<>, is_array<> �� ���ʿ����� traits ����


int a;   // int
double d;// double
int x[3];// int[3]  => T[N]


// IsPointer�� �����ؼ� IsArray�� ���弼��
// 1. IsArray ��� ����ü ���ø��� ���弼��
// 2. enum { value = false };  ��������
// 3. ���ǿ� �´� �κ�Ư��ȭ�� ���弼��. enum { value = true }; �� ���弼��

template<typename T> struct IsArray
{
	enum { value = false };
	enum { size = -1};   // �迭�� �ƴѰ��
};

template<typename T, int N> struct IsArray<T[N]>
{
	enum { value = true };
	enum { size =  N };   
};

template<typename T> void foo(T& a)
{
	if (IsArray<T>::value)
		cout << "�迭 �Դϴ�. ũ��� "  << IsArray<T>::size << endl;
	else
		cout << "�迭 �ƴ�" << endl;
}

int main()
{
	int x[3] = { 1,2,3 };
	foo(x);					
}





