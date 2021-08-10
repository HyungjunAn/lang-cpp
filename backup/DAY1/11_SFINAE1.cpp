#include <iostream>
using namespace std;

// SFINAE1. 오버로딩

template<typename T> 
void foo(T a)   { cout << "T" << endl;}

void foo(int a) { cout << "int" << endl; }

void foo(...  ) { cout << "..." << endl; }

int main()
{
	foo(10); 
}
