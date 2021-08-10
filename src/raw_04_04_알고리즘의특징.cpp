//15_�˰�����Ư¡
#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
using namespace std;
// 313 ~

// 1. ��� �Լ��� �ƴ� �Ϲ� �Լ�
// 2. �˰����Լ�(first, last)
// 3. <algorithm>, <numeric>, <memory>

// 4. �˰����� �����̳��� ������ ���� ���Ѵ�.
// 5. �˰����� �����̳��� ũ�⸦ ������ �ʴ´�.

int main()
{
	vector<int> v = { 1,2,3,1,2,3,1,2,3,1 };
	// 314 page
	auto p = remove(begin(v), end(v), 3);

	for (auto& n : v)
		cout << n << " ";

	cout << endl;
	// �ʿ���� ��Ҹ� �����Ϸ��� �ش� �����̳��� ����Լ���
	// ����ؾ� �Ѵ�.
	v.erase(p, v.end());

	for (auto& n : v)
		cout << n << " ";
	
}