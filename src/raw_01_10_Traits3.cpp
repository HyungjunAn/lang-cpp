#include <iostream>
using namespace std;

// template 기술
// 1. 함수 또는 클래스를 생성하기 위한 도구로 만든 문법

// 2. 요즘에는 템플릿인자 T의 특성을 조사하기 위한 다양한 
//    메타 함수 만들기에 널리 활용

#include <type_traits> // C++11 에서 추가된 헤더
// is_pointer<>, is_array<> 등 수십여개의 traits 제공


int a;   // int
double d;// double
int x[3];// int[3]  => T[N]


// IsPointer를 참고해서 IsArray를 만드세요
// 1. IsArray 라는 구조체 템플릿을 만드세요
// 2. enum { value = false };  넣으세요
// 3. 조건에 맞는 부분특수화를 만드세요. enum { value = true }; 로 만드세요

template<typename T> struct IsArray
{
	enum { value = false };
	enum { size = -1};   // 배열의 아닌경우
};

template<typename T, int N> struct IsArray<T[N]>
{
	enum { value = true };
	enum { size =  N };   
};

template<typename T> void foo(T& a)
{
	if (IsArray<T>::value)
		cout << "배열 입니다. 크기는 "  << IsArray<T>::size << endl;
	else
		cout << "배열 아님" << endl;
}

int main()
{
	int x[3] = { 1,2,3 };
	foo(x);					
}





