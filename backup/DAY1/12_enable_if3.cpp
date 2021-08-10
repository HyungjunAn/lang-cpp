#include <iostream>
#include <type_traits>
using namespace std;

// using enable_if

template<typename T> 
void foo(T a)
{
}

void foo(double d) { cout << "double" << endl; }


int main()
{
	foo(10);
	foo(3.4);
	foo(3.4f);
}
