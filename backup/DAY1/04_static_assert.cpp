#include <iostream>
#include <cassert> 
using namespace std;

// 156 page
static_assert(sizeof(int*) == 8, "error, not 64 bit");
//static_assert(sizeof(int*) == 8);// C++17

void foo(int age)
{
	// 함수 인자는 사용하기 전에 유효성 여부를 확인하는 것이 좋다.
	assert(age > 0);

	//C++11 컴파일 시간 assert
	//static_assert( sizeof(int*) == 8, "error, not 64 bit");

}

int main()
{
	foo(-10);
}