// ���� ������Ͻź� smkang @ codenuri.co.kr  �� �����Ͻø� �˴ϴ�.

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
	foo(0);  // 0�� int*�� �����Ҽ� �ִ�.

	//chronomety(&foo, 0); // ???
	chronomety(&foo, nullptr);  // nullptr�� nullptr_t Ÿ���Դϴ�.
						// nullptr_t Ÿ���� ��� Ÿ���� �����ͷ�
						// �Ͻ��� ��ȯ �˴ϴ�.
	
}