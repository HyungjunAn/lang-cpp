#include <iostream>
#include <functional>
#include <vector>
using namespace std;

// �˰��� : STL �� �����ϴ� ��� �Լ��� �ƴ� �Ϲ��Լ��� ��Ÿ���� ���
#include <algorithm>

int main()
{
	vector<int> v = { 1,2,6,4,5,3,7,8,9,10 };

	// find : ���� �˻��ϴ� �Լ�
	auto p = find(begin(v), end(v), 3);



	cout << *p2 << endl; // 6
}





