// 4_tuple
#include <iostream>
using namespace std;

template<typename ... Types> struct xtuple
{
	static constexpr int N = 0;  // �����ϴ� ����� ����
};

// �Ѱ��� �����ϱ� ���� �κ� Ư��ȭ
template<typename T, typename ... Types> 
struct xtuple<T, Types...>
{
	T value;
	xtuple(const T& a) : value(a) {}

	static constexpr int N = 1;
};

int main()
{
	xtuple<short> t1(3);              // short ����
	xtuple<double, short> t2(3);      // double ����
	xtuple<int, double, short> t3(3); // int ����
}




