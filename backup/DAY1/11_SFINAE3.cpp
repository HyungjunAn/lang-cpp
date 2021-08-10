#include <iostream>
using namespace std;

// SFINAE 를 활용하는 3가지 방법
// 1. 리턴 타입으로..!!
template<typename T>
typename T::type foo(T a) { cout << "T" << endl; return 0; }

void foo(...) { cout << "..." << endl; }

int main()
{
	foo(10);
}
