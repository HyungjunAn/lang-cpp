#include <iostream>
using namespace std;

// C++11 ǥ��
template<typename T, T N> struct integral_constant
{
	static constexpr T value = N;
};
