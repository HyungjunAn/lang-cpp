#include <iostream>
#include <cassert> 
using namespace std;

// 156 page
static_assert(sizeof(int*) == 8, "error, not 64 bit");
//static_assert(sizeof(int*) == 8);// C++17

void foo(int age)
{
	// �Լ� ���ڴ� ����ϱ� ���� ��ȿ�� ���θ� Ȯ���ϴ� ���� ����.
	assert(age > 0);

	//C++11 ������ �ð� assert
	//static_assert( sizeof(int*) == 8, "error, not 64 bit");

}

int main()
{
	foo(-10);
}