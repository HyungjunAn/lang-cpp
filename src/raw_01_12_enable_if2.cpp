#include <iostream>
#include <type_traits>
using namespace std;


// ��� ���� Ÿ���� ����Ǵ� �Լ��� ����� �ʹ�.
template<typename T> void foo(T a)
{

}


int main()
{
	foo(10);
	foo(3.4);
	foo(3.4f);
}
