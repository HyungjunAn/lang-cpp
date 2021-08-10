#include <iostream>
using namespace std;


// 사용자 정의 Literal 함수
// 정수 Literal : 인자를 unsigned long long 
// 실수         : long double
// 문자열       : const char*, size_t 로 전달..

class Meter
{
	int value;
public:
	Meter(int n = 0) : value(n) {}
};
// long long : 64비트 정수 - 183 아래 박스
Meter operator""_m(unsigned long long n)
{
	return Meter(n);
}
int main()
{
	float f = 3.4f;
	Meter v = 10_m; // operator""m(10) 이라는 함수를 호출합니다.

}


// 183 page




