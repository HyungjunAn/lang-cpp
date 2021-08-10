#include <iostream>
using namespace std;

// auto  �� ���ø��� Ÿ�� �߷б�Ģ�� �����մϴ�.

// auto ���� = �캯;
// T a = �Լ� ����;

// ��Ģ 1. ������ Ÿ���� �� �̸� �Լ� ������ const, volatile, reference�� 
//		   �����ϰ� Ÿ���� �����ȴ�
template<typename T> void foo(T a)
{
}

int main()
{
	int n = 10;
	int&r = n;
	const int c = n;
	const int& cr = c;
	foo(n); // int
	foo(r); // int
	foo(c); // int
	foo(cr);// int

	// ���� : ������ const �Ӽ��� ���ŵȴ�.
	const char* s = "hello";
	foo(s); // T : const char*


	const char* const s2 = "aaa";
	foo(s2); // T : const char*
}





