#include <iostream>
using namespace std;
// T가 포인터인지 조사하는 기술

// traits : T의 다양한 특성을 조사하는 기술

// 1. primary template : false 리턴(value = false 라는의미)
// 2. 부분 전문화       : true 리턴( value = true 라는의미)

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
		cout << "포인터" << endl;
	else
		cout << "포인터 아님" << endl;
}

int main()
{
	int n = 10;
	foo(n);
	foo(&n);
}

