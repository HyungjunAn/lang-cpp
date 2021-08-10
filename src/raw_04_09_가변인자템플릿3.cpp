#include <iostream>
using namespace std;

// Step 3. ��ͷ� �������� ���޵� ���� ������

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
				// ���������� foo()
}

int main()
{
	foo(3, 4.5, "hello"); // value : 3,    args : 4.5, "hello"

}








