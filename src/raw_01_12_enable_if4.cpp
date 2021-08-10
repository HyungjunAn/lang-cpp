#include <iostream>
#include <type_traits>
using namespace std;

// printv ¸¸µé±â 
// 1. is_pointer, true_type, false_type
// 2. enable_if
// 3. if constexpr

template<typename T> void printv(T v)
{
	if ( is_pointer<T>::value )		
		cout << v << " : " << *v << endl;
	else
		cout << v << endl;
}
int main()
{
	int n = 10;
	printv(n);
	//printv(&n);
}



