#include <iostream>
#include <initializer_list>
using namespace std;

void foo(initializer_list<int> e)
{
}

int main()
{
	// g++ : ������ �Ѱ�, ����
	// vc++: ������ 2���� ����
	initializer_list<int> e = { 1,2,3 }; 

	foo(e);
	foo( { 1,2,3,4,5 } );

}