#include <iostream>
#include <initializer_list>
using namespace std;

void foo(initializer_list<int> e)
{
}

int main()
{
	// g++ : 포인터 한개, 갯수
	// vc++: 포인터 2개로 관리
	initializer_list<int> e = { 1,2,3 }; 

	foo(e);
	foo( { 1,2,3,4,5 } );

}