#include <iostream>
#include <functional>
#include <vector>
using namespace std;
#include <algorithm>

bool foo(int a) { return a % 3 == 0; }

// 함수 보다 함수 객체가 좋다. - 281
// 1. 인라인 치환
// 2. 상태를 가지는 함수
struct IsDivide
{
	int value;
	IsDivide(int n) : value(n) {}

	inline bool operator()(int v) const
	{
		return v % value== 0;
	}
};

int main()
{
	vector<int> v = { 1,2,6,4,5,3,7,8,9,10 };

	// 1. 일반 함수 사용
	auto p2 = find_if(begin(v), end(v),  foo);

	// 2 함수객체
	IsDivide d(3);
	IsDivide d1(3);
	auto p3 = find_if(begin(v), end(v), d);


	// 3. 람다표현식
	auto p4 = find_if(begin(v), end(v),
		[](int a) {return a % 3 == 0; } );
}




