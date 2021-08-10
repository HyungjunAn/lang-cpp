#include <type_traits>
using namespace std;

template<typename T> void foo(T a)
{
	// decay<T>::type : T���� const, volatile, reference��
	//            ������ Ÿ�� ���ϱ�.
	static_assert(is_same<typename decay<T>::type, int>::value, "not int");
}

int main()
{
	// foo �� int�϶��� �ǰ� �ϰ� �ʹ�.
	foo(3);
	foo<const int>(3);

	foo(3.4); // 
	foo(3.4f);
}