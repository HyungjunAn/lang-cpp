// 3_�Ϻ���������
#include <iostream>
using namespace std;

void foo(int  n) { n = 10; }
void goo(int& n) { n = 10; }

// ���ڰ� int�迭�� ��츸 ������ ���ô�.
// �ٽ� 1. ���ڸ� ������ int& �� int&& �� 2���� �Լ��� �����ؾ� �Ѵ�.

template<typename F> void chronometry(F f, int& arg)
{
	f(arg);
}
template<typename F> void chronometry(F f, int&& arg)
{
	f(arg);
}
int main()
{
	int x = 0;
	
	chronometry(&goo, x);
	chronometry(&foo, 10);

	cout << x << endl;
}


