#include <iostream>
#include <functional>
#include <vector>
using namespace std;
#include <algorithm>

bool foo(int a) { return a % 3 == 0; }

// �Լ� ���� �Լ� ��ü�� ����. - 281
// 1. �ζ��� ġȯ
// 2. ���¸� ������ �Լ�
struct IsDivide
{
	int value;
	IsDivide(int n) : value(n) {}

	inline bool operator()(int v) const
	{
		return v % value== 0;
	}
};

int main()
{
	vector<int> v = { 1,2,6,4,5,3,7,8,9,10 };

	// 1. �Ϲ� �Լ� ���
	auto p2 = find_if(begin(v), end(v),  foo);

	// 2 �Լ���ü
	IsDivide d(3);
	IsDivide d1(3);
	auto p3 = find_if(begin(v), end(v), d);


	// 3. ����ǥ����
	auto p4 = find_if(begin(v), end(v),
		[](int a) {return a % 3 == 0; } );
}




