#include <iostream>
using namespace std;

int x = 10;

class Test
{
public:
	int a = 0; // member initializer
	int b = ++x;

	// ���� : �����ڿ��� �ʱ�ȭ ����Ʈ�� �ʱ�ȭ �ϴ� �����
	//		  member initiaizer�� ������� �ʴ´�.
	Test() {}
	Test(int v) : b(v) {}
};

int main()
{
	Test t1;
	Test t2(3);

	cout << x << endl; // ???
}