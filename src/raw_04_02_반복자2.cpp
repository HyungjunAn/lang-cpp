#include <iostream>
#include <vector>
#include <list>
using namespace std;

// �ݺ��� ��ȿȭ
int main()
{
	vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	auto p = v.begin(); // begin(v)

	v.resize(20); // �̼��� �̸� ���� �ݺ��ڴ� ��ȿȭ(invalidate)
				  // �˴ϴ�. ����ϸ� �ȵ˴ϴ�.

	cout << *p << endl; // ����ص� �ɱ�� ??

}





