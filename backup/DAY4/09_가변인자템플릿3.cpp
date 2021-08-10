#include <iostream>
using namespace std;

// Step 3. 재귀로 가변인자 전달된 인자 꺼내기

/*
template<typename T> void foo(T a) 
{
	cout << "T" << endl;
}
*/
template<typename T, typename ... Types>
void foo(T value, Types ... args)
{
	cout << value << endl;

	//if constexpr ( sizeof(args...) > 0 )
	foo(args...); // value : 4.5  args : "hello"
	              //  value :  "hello"  args : 
				// 최종적으로 foo()
}

int main()
{
	foo(3, 4.5, "hello"); // value : 3,    args : 4.5, "hello"

}








