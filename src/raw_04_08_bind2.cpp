#include <iostream>
#include <functional>
using namespace std;
using namespace std::placeholders;

int main()
{
	modulus<int> m;

	cout << m(10, 3) << endl; // 10 % 3 => 1

	int x[10] = { 3,6,9,2,3,6,9,3,6,9 };

	// 3�ǹ���� �ƴ� ���� ã�ƶ�
	int* p = find_if(x, x + 10, ?);
}