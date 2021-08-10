#include <iostream>
#include <type_traits>
using namespace std;


// 모든 정수 타입의 적용되는 함수를 만들고 싶다.
template<typename T> void foo(T a)
{

}


int main()
{
	foo(10);
	foo(3.4);
	foo(3.4f);
}
