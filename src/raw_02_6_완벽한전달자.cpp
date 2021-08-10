// 3_완벽한전달자
#include <iostream>
using namespace std;
// 6_완벽한 전달자. 262 page

void foo(int  n) { n = 10; }
void goo(int& n) { n = 10; }

// 완벽한 전달(perfect forwarding) 개념

// 인자로 전달 받은 것을 다른 함수에게 전달하는것.
// 원본인자를 다른 함수에게 어떠한 변화도 없이 완벽히 전달해야 한다.

// 함수의 수행시간을 측정하는 함수
template<typename F, typename T> 
void chronometry(F f, const T& arg)
{
	// 시간 기록
	f(arg); // 함수 호출
	// 시간 출력
}

int main()
{
	int x = 0;
	chronometry(&foo, 10);
	chronometry(&goo, x);


	//foo(10);

	cout << x << endl;
}





