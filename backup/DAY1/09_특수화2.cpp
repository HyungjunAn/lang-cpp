#include <iostream>
using namespace std;

// 55 page 
// primary template
template<typename T, typename U> struct Test
{
	void print() { cout << "T, U" << endl; }
};

// �κ� Ư��ȭ�� Ŭ����(����ü)�̸��ڿ� < >
template<typename T, typename U> struct Test<T*, U*>
{
	void print() { cout << "T*, U*" << endl; }
};

// primary template �� ���ø� ���ڰ� 2���϶�
// 1. ����Ҷ��� �ݵ�� 2���� Ÿ���� �����ؾ� �Ѵ�.
// 2. �κ� Ư��ȭ �Ҷ������ø� ���� ������ �ٸ��� �ִ�. - 56 page  �Ʒ� �κ�
template<typename T> struct Test<T, T>
{
	void print() { cout << "T, T" << endl; }
};

template<typename T> struct Test<short, T>
{
	void print() { cout << "short, T" << endl; }
};

// specialization(Ư��ȭ)
template<> struct Test<short, int>
{
	void print() { cout << "short, int" << endl; }
};

template<typename T, typename U, typename V> 
struct Test<T, Test<U, V> >
{
	void print() { cout << "T, Test<U, V>" << endl; }
};


int main()
{
	Test<int, double>   t1; t1.print(); // T, U
	Test<int*, double*> t2; t2.print(); // T*, U*
	Test<int, int>      t3; t3.print(); // T, T
	Test<short, char>   t4; t4.print(); // short, T
	Test<short, int>    t5; t5.print(); // short, int

	Test<int, Test<char, int>>  t6; t6.print(); // T, Test<U,V>
}



