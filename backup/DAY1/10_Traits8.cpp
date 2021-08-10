#include <iostream>
using namespace std;

// C++11 วฅมุ
template<typename T, T N> struct integral_constant
{
	static constexpr T value = N;
};
