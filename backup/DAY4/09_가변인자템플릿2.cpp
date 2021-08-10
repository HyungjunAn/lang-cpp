#include <iostream>
using namespace std;

void goo(int a, double d, const char* s)
{
	cout << "goo" << endl;
}

// parameter pack, sizeof..., pack expansion
template<typename ... Types> void foo(Types ... args )
{
	// Types : ���ø� �Ķ���� ��
	// args  : �Լ� �Ķ���� ��(pack)

	cout << sizeof...(args) << endl;  // 3
	cout << sizeof...(Types) << endl; // 3


	//goo(args); // error. args �� �Ķ���Ͱ� �ƴ϶� pack �̴�
	goo(args...); // ok.. pack expansion - 129 page
				 // goo( 3, 4.5, "hello")
}






int main()
{
	foo(3, 4.5, "hello"); // Types : int, double, const char*
							// args : 3, 4.5,  "hello"
}





