#include <type_traits>
using namespace std;

template<typename T> void foo(T a)
{
	// decay<T>::type : T에서 const, volatile, reference를
	//            제거한 타입 구하기.
	static_assert(is_same<typename decay<T>::type, int>::value, "not int");
}

int main()
{
	// foo 가 int일때만 되게 하고 싶다.
	foo(3);
	foo<const int>(3);

	foo(3.4); // 
	foo(3.4f);
}