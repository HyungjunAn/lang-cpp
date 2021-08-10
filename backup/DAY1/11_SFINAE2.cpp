
#include <iostream>
using namespace std;

template<typename T> 
int foo(T a) { cout << "T" << endl; return 0; }

void foo(...) { cout << "..." << endl; }


int main()
{
	foo(10);
}
