#include <iostream>
using namespace std;

template<typename T> struct IsPointer { static constexpr bool value = false; };
template<typename T> struct IsPointer<T*> { static constexpr bool value = true; };


template<typename T> void printv_pointer(T a)
{
	cout << a << " : " << *a << endl;
}
template<typename T> void printv_not_pointer(T a)
{
	cout << a << endl;
}

template<typename T> void printv(T a)
{
	if (IsPointer<T>::value)   
		printv_pointer(a);
	else
		printv_not_pointer(a);
}
int main()
{
	int    n = 10;
	printv(n);  
}





