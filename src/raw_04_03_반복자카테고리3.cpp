#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main()
{
	//vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };
	list<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	auto p = begin(v);

	// p�� 5ĭ �����ϰ� �ͽ��ϴ�. ���� ���� ����� ����� ?
	//p = p + 5;

	advance(p, 5);
}