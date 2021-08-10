#include <iostream>
#include <type_traits>
using namespace std;

// 200 page
template<typename T> void printv(T a)
{
	//if ( is_pointer<T>::value ) // if ( false )

	// if constexpr : 컴파일 시간에 조사하는 if 문 - C++17
	if constexpr (is_pointer<T>::value)
		cout << a << " : " << *a << endl;
	else
		cout << a << endl;
}

int main()
{
	int n = 10;
	//printv(&n);
	printv(n);

}