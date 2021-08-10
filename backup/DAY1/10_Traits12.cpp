#include <iostream>
using namespace std;

int x[3]; // int[3]

// 102 page
// int (char , double )
int goo(char c, double d) { return 0; }
template<typename T> struct result_type
{
	typedef T type;
};

template<typename R, typename A1, typename A2>
struct result_type< R(A1, A2)  >
{
	typedef R type;
};

template<typename T> void foo(T& a)
{
	// 함수 반환타입 조사하기.(단, 함수의 인자가 2개일때만)
	// T : int(char, double)

	typename result_type<T>::type n = 0;		  // int 

	cout << typeid(n).name() << endl;
}

int main()
{
	foo(goo);
}



