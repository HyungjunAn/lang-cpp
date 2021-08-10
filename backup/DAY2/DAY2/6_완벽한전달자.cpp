// 3_�Ϻ���������
#include <iostream>
using namespace std;
// 6_�Ϻ��� ������. 262 page

void foo(int  n) { n = 10; }
void goo(int& n) { n = 10; }

// �Ϻ��� ����(perfect forwarding) ����

// ���ڷ� ���� ���� ���� �ٸ� �Լ����� �����ϴ°�.
// �������ڸ� �ٸ� �Լ����� ��� ��ȭ�� ���� �Ϻ��� �����ؾ� �Ѵ�.

// �Լ��� ����ð��� �����ϴ� �Լ�
template<typename F, typename T> 
void chronometry(F f, const T& arg)
{
	// �ð� ���
	f(arg); // �Լ� ȣ��
	// �ð� ���
}

int main()
{
	int x = 0;
	chronometry(&foo, 10);
	chronometry(&goo, x);


	//foo(10);

	cout << x << endl;
}





