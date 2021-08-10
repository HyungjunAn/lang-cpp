// 4_tuple
#include <iostream>
using namespace std;

template<typename ... Types> struct xtuple
{
	static constexpr int N = 0;  // 보관하는 요소의 갯수
};

// 한개를 보관하기 위한 부분 특수화
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
	//xtuple<short> t1(3);              // short 보관
	//xtuple<double, short> t2(3);      // double 보관
	xtuple<int, double, short> t3(3, 1, 2); // int 보관
}







