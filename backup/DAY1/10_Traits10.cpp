#include <iostream>
#include "cppmaster.h"
using namespace std;

// traits10.cpp, 98 page ~
// traits의 종류
// 1. 타입 질의 : is_xxxx<T>::value
// 2. 변형 타입얻기 : xxx<T>::type

// 기존 타입에서 변형된 타입을 얻어내는 traits 만들기
// 1. 템플릿으로 구조체를 만든다.
// 2. typedef T type;   을 넣는다.
// 3. 원하는 타입(포인터를 제거한 타입)을 얻을수 있도록
//    부분 특수화를 통해서 타입을 분할한다.
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
