// cafe.naver.com/cppmaster ���� 3���� �����ҽ� �����ø� �˴ϴ�.
// �⼮üũ(QR) ���ּ���.











#include <iostream>
#include <vector>
#include <list>
using namespace std;

// �ݺ��� : �����̳��� ��Ҹ� ����Ű�� ������ ���� �����ϴ� ��ü
// 165 page
int main()
{
	//vector<int> v = { 1,2,3,4,5 };
	//list<int> v = { 1,2,3,4,5 };
	int v[5] = { 1,2,3,4,5 };

	// C++98/03 ��Ÿ��
//	vector<int>::iterator p1 = v.begin();
//	vector<int>::iterator p2 = v.end();

	// C++11 ���� �ݺ��ڸ� ������ �ڵ�.
	auto p1 = begin(v);  

	//auto sz = v.size();
	auto sz = size(v);
	// p1�� v�� ù��° ��Ҹ� ����Ű�� �ݺ���(������ ���簴ü)�Դϴ�.
	cout << *p1 << endl; // 1
}