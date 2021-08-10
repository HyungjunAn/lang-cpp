#include <iostream>
using namespace std;

class AAA
{
public:
	enum { value = 10};
	typedef int DWORD;
};
int p = 0;

template<typename T> void foo(T a)
{
	// 컴파일러는 아래 코드를 어떻게 해석해야 할까요 ?
	// T::심볼  =>  심볼을 무조건 값으로 해석
	// T::DWORD * p;  // error

	typename T::DWORD * p; // DWORD를 타입으로 해석해 달라는 의미.
				// 템플릿의 의존적으로 타입을 꺼낼때는 typename이 필요하다.
}

int main()
{
	AAA aaa;
	foo(aaa);
}