#include <iostream>
#include <functional>
using namespace std;

// ����ǥ������ ��� ���� - 292page


int main()
{
	auto f1           = [](int a, int b) { return a + b; };

	// ���� ǥ������ �ӽð�ü �Դϴ�
	// ����ǥ������ ����� �ӽð�ü�� �Լ������ͷ� �Ͻ��� ��ȯ�˴ϴ�.
	int(*f2)(int, int) = [](int a, int b) { return a + b; };


	// �Ʒ� �ڵ���� �ζ��� ġȯ���� ������ ������
	f1(1, 2); //  �ζ��� ġȯ ��.
	f2(1, 2); //  ġȯ �ȵ�.
//	f3(1, 2); //  ġȯ �ȵ�.
}








