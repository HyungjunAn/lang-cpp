// 과제 제출안하신분 smkang @ codenuri.co.kr  로 제출하시면 됩니다.

#include <iostream>
using namespace std;

void foo(int* p) {} 

template<typename F, typename T>
void chronomety(F f, T&& arg)
{
	f( forward<T>(arg) );
}

int main()
{
	foo(0);  // 0은 int*에 전달할수 있다.

	//chronomety(&foo, 0); // ???
	chronomety(&foo, nullptr);  // nullptr은 nullptr_t 타입입니다.
						// nullptr_t 타입은 모든 타입의 포인터로
						// 암시적 변환 됩니다.
	
}