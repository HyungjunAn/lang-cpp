#include <iostream>
using namespace std;

// ������ �ð� ����� vs ����ð� ���

int main()
{
	int n = 10;
	const int c = n;   // ����ð� ���
	//const int c = 10; // ������ �ð� ���

	//int* p = &c;	// error. ����� �ּҴ� ������ ����Ű�� �����Ϳ� 
					// ������ ����.

	int* p = (int*)&c; // ok

	*p = 20;

	cout << c  << endl; // 10   20
	cout << *p << endl; // 20   20
}

