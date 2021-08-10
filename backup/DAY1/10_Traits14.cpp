#include <iostream>
#include <type_traits>
using namespace std;

// 108 page
// C++11 표준 traits 를 사용하려면
// 1. 헤더 파일 포함 < type_traits> 


// using 을 사용해서 간략화 한다. - 106
//template<typename T>
//using remove_pointer_t = typename remove_pointer<T>::type;

template<typename T> void foo(T a)
{
	// 포인터 여부 조사
	//bool b1 = is_pointer<T>::value; // C++11 style
	bool b1 = is_pointer_v<T>;         // C++17 style

	// 포인터를 제거한 타입 얻기
	//typename remove_pointer<T>::type n1; // C++11 style

	remove_pointer_t<T> n1; // C++14 style

	//remove_
}

int main()
{
	int n = 0;
	foo(&n);
}