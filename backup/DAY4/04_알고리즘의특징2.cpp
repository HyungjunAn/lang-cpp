
#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
using namespace std;

// �˰���� ����Լ��� ������ �̸��� �Լ��� �ִٸ�..
// ��� �Լ��� �������!

int main()
{
	//vector<int> v = { 1,2,3,1,2,3,1,2,3,1 };

	list<int> v = { 1,2,3,1,2,3,1,2,3,1 };

//	auto p = remove(begin(v), end(v), 3);
//	v.erase(p, end(v));

	// list�� ��Ҹ� ���� �ͺ��ٴ� ���ǿ� �´� ��Ҹ� ������ ����.
	// �����ϴ� ���� ����.
	v.remove(3);

	for (auto& n : v)
		cout << n << " ";

}