#include <iostream>
using namespace std;

// 55 page 
// primary template
template<typename T, typename U> struct Test
{
	void print() { cout << "T, U" << endl; }
};

// 부분 특수화는 클래스(구조체)이름뒤에 < >
template<typename T, typename U> struct Test<T*, U*>
{
	void print() { cout << "T*, U*" << endl; }
};

// primary template 의 템플릿 인자가 2개일때
// 1. 사용할때는 반드시 2개의 타입을 전달해야 한다.
// 2. 부분 특수화 할때는템플릿 인자 갯수가 다를수 있다. - 56 page  아래 부분
template<typename T> struct Test<T, T>
{
	void print() { cout << "T, T" << endl; }
};

template<typename T> struct Test<short, T>
{
	void print() { cout << "short, T" << endl; }
};

// specialization(특수화)
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



