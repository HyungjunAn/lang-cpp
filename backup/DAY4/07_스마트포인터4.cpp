#include <iostream>
using namespace std;

// C++11 ���� ǥ�� ����Ʈ �����͸� �����մϴ�.
#include <memory>

// ����Ʈ ������ �������
// 1. raw pointer�� 2�� ũ�⸦ ������.
// 2. ��������� �����ϱ� ���� �޸𸮰� �Ҵ�ȴ�.

int main()
{
	// explicit ������.
//	shared_ptr<int> p1 = new int; // error
	shared_ptr<int> p2(new int); // ok

	// 32bit ȯ��..
	cout << sizeof(p2) << endl; // 8 �̻�..
								// �����Ϸ� ���� �ٸ��� �ִ�
}





