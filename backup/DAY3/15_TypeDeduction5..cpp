// 3_decltype
#include <iostream>
using namespace std;

int main()
{
	int n = 10;
	int& r = n;
	const int c = n;

	// decltype은 해당 변수의 선언문을 조사해서 정확한 타입으로 결정해 준다.
	decltype(n) d1;  // int
	decltype(r) d2;  // int& ..단, 초기화가 없으므로 error
	decltype(c) d3;  // const int  초기화가 없으므로 error

	int x[3] = { 1,2,3 };

	// 다음중 에러는 ?
	decltype(x) d4;			// int d4[3];  ok
	decltype(x) d5 = x;     // int d5[3] = x; error
}







