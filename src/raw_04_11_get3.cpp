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
	// T는 임의의 갯수를 가진 xtuple 입니다.
	typename xtuple_element_type<2, T>::type n;      // 1번째 요소 타입
	typename xtuple_element_type<2, T>::tupleType t; // 1번째 요소를 저장하는 tuple타입

	cout << typeid(n).name() << endl;
	cout << typeid(t).name() << endl;
}


int main()
{
	xtuple<int, double, short> t3(3, 3.4, 5);
	
	foo(t3);
}









