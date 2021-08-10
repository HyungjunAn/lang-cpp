// 3_�Ϻ���������
#include <iostream>
using namespace std;

void foo(int  n) { n = 10; }
void goo(int& n) { n = 10; }
void hoo(int&& n) {}

// ��� : �Ϻ��� ���� ����� ����Ϸ���
// 1. ���ڸ� �������� forwarding reference(T&&) �� ����Ѵ�.
// 2. ���ڸ� �ٸ��Լ��� �����Ҷ��� static_cast<T&&>(arg) �� �����Ѵ�.
// 

template<typename F, typename T>
void chronometry(F f, T&& arg)
{
	//f(static_cast<T&&>(arg));

	f(std::forward<T>(arg)); // forward �Լ��� �ᱹ ����������
						// static_cast<T&&> �ϰ� �ֽ��ϴ�. 269
}



int main()
{
	int x = 0;

	hoo(10); // ok

	chronometry(hoo, 10); // ���� ����� �Ѵ�.!!

	cout << x << endl;
}





