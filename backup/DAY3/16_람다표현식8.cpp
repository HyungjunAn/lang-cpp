#include <iostream>
using namespace std;
// 289 p
int main()
{
	//int Add(int a, int b) { return a + b; }
	// ����ǥ���� Ȱ��

	// 1. �Լ��� ��å���� ����
	sort(x, x + 10, [](int a, int b) { return a < b;  });


	// 2. auto  ������ ��Ƽ� �Լ� ó�� ��밡��

	auto f = [](int a, int b) { return a + b;  }; // 289 �Ʒ� �κ�
				// class ClosureType{}; ClosureType();

	cout << f(1, 2) << endl;


	//auto& f1 = [](int a, int b) { return a + b;  };//error.
					// ���� ǥ������ �ӽð�ü(rvalue)�̴�.
}



