// 2_�ݺ���1
#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main()
{
	int s[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//list<int>   s = { 1,2,3,4,5,6,7,8,9,10 };
	//vector<int> s = { 1,2,3,4,5,6,7,8,9,10 };

	// 1. �ݺ��� Ÿ��
	list<int>::iterator p = s.begin();
	//auto p = s.begin();

	// 2. �ݺ��ڸ� ������ ���
	//auto p1 = s.begin();
	//auto p2 = s.end();

	// ��� �Լ� begin ���� �Ϲ� �Լ� begin �� ����. - C++11
	auto p1 = begin(s);
	auto p2 = end(s);

	//int sz = s.size(); // �迭�϶� ����Ҽ� ����.
	int sz = size(s);

}





