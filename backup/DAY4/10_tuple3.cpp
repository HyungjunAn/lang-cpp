// 4_tuple
#include <iostream>
using namespace std;

template<typename ... Types> struct xtuple
{
	static constexpr int N = 0;  // �����ϴ� ����� ����
};

// �Ѱ��� �����ϱ� ���� �κ� Ư��ȭ
template<typename T, typename ... Types>
struct xtuple<T, Types...> : public xtuple<Types...>
{
	using basetype = xtuple<Types...>;

	T value;
	xtuple(const T& a, const Types& ... args) 
		: value(a), basetype(args...) {}


	static constexpr int N = basetype::N + 1;
};


int main()
{
	//xtuple<short> t1(3);              // short ����
	//xtuple<double, short> t2(3);      // double ����
	xtuple<int, double, short> t3(3, 1, 2); // int ����
}







