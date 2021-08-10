#include <iostream>
#include <vector>
using namespace std;

int x = 10;

int& foo() { return x; }

int main()
{
	auto ret = foo();   // int

	// decltype(�Լ� ȣ���)  : �Լ� ȣ��ڿ� ������ Ÿ��.
	//						��, ��ȯ Ÿ�� ����.
	//decltype( foo() ) ret2 = foo();  // int& 

	// C++14���� �����ϴ� Ű����
	// �캯�� ����Ÿ�� ����, ��Ģ�� decltype ��Ģ
	// ��, auto �ڸ��� �캯�� �־� �޶�.  221 page
	decltype(auto) ret3 = foo();
}