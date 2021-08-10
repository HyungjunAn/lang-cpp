#include <iostream>
#include <set>
#include <functional> // less<>, greater<> ���� �Լ� ��ü
using namespace std;


// set �� �� ��å�� 2���� ���� ���Ҽ� �ִ� 
// �Լ� ��ü( ()�����ڸ� �������� Ŭ����)�� �����ؾ� �մϴ�.

template<typename T> struct Greater
{
	inline bool operator()(T a, T b) const
	{
		return a > b;
	}
};


int main()
{
//	set<int, Greater<int> > s;  // Tree
	set<int, greater<int> > s;

	s.insert(20);
	s.insert(15);
	s.insert(25);
	s.insert(5);

	for (auto& n : s)
		cout << n << endl;
}
