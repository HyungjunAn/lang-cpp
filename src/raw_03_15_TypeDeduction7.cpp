#include <iostream>
#include <vector>
using namespace std;

int x = 10;

int& foo() { return x; }

int main()
{
	auto ret = foo();   // int

	// decltype(함수 호출식)  : 함수 호출뒤에 나오는 타입.
	//						즉, 반환 타입 조사.
	//decltype( foo() ) ret2 = foo();  // int& 

	// C++14에서 지원하는 키워드
	// 우변을 보고타입 결정, 규칙은 decltype 규칙
	// 즉, auto 자리에 우변을 넣어 달라.  221 page
	decltype(auto) ret3 = foo();
}