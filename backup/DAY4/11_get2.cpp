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


int main()
{
	xtuple<int, double, short> t3(3, 3.4, 5);

	cout << t3.value << endl; // 3

	// 3.4, 5 나오게 해보세요..

}









