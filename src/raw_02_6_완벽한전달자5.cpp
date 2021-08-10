// 3_완벽한전달자
#include <iostream>
using namespace std;

void foo(int  n) { n = 10; }
void goo(int& n) { n = 10; }
void hoo(int&& n) {}

// 결론 : 완벽한 전달 기술을 사용하려면
// 1. 인자를 받을때는 forwarding reference(T&&) 를 사용한다.
// 2. 인자를 다른함수로 전달할때는 static_cast<T&&>(arg) 로 전달한다.
// 

template<typename F, typename T>
void chronometry(F f, T&& arg)
{
	//f(static_cast<T&&>(arg));

	f(std::forward<T>(arg)); // forward 함수가 결국 내부적으로
						// static_cast<T&&> 하고 있습니다. 269
}



int main()
{
	int x = 0;

	hoo(10); // ok

	chronometry(hoo, 10); // 문제 없어야 한다.!!

	cout << x << endl;
}





