#include <iostream>
using namespace std;

// �������� ���ø��� ����� C++11 ǥ���� Ʃ�� �����..145

template<typename ... Types> struct xtuple
{
	static constexpr int N = 0;  // �����ϴ� ����� ����
};

int main()
{
	xtuple<int, double, short> t3;


//	vector<int> v(3);
}
