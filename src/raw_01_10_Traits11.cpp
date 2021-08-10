#include <iostream>
using namespace std;

template<typename T> struct xremove_reference
{
	typedef T type;
};
template<typename T> struct xremove_reference<T&>
{
	typedef T type;
};
int main()
{
	// xremove_reference 만들어 보세요.
	xremove_reference<int&>::type n1; // int
}