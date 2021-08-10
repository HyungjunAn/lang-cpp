#include <iostream>
using namespace std;


template<typename ... Types> struct xtuple
{
	static constexpr int N = 0;
};

template<typename T, typename ... Types> struct xtuple<T, Types...> : public xtuple<Types...>
{
	typedef xtuple<Types...> baseType;
	T value;
	xtuple() {}
	xtuple(const T& a, const Types& ... args) : value(a), baseType(args...) {}
	static constexpr int N = baseType::N + 1;
};


template<typename T> void foo(T& tp)  
{
	// T�� ������ ������ ���� xtuple �Դϴ�.
	typename xtuple_element_type<2, T>::type n;      // 1��° ��� Ÿ��
	typename xtuple_element_type<2, T>::tupleType t; // 1��° ��Ҹ� �����ϴ� tupleŸ��

	cout << typeid(n).name() << endl;
	cout << typeid(t).name() << endl;
}


int main()
{
	xtuple<int, double, short> t3(3, 3.4, 5);
	
	foo(t3);
}









