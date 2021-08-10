#include <iostream>
using namespace std;

template<typename T> struct IsPointer     {	static constexpr bool value = false; };
template<typename T> struct IsPointer<T*> {	static constexpr bool value = true;};


template<typename T> void printv(T a)
{
	cout << a << endl;
}

int main()
{
	int    n = 10;

	printv(n);  
	printv(&n); 
}





