#include <iostream>
using namespace std;

// 컴파일 시간 상수와 vs 실행시간 상수

int main()
{
	int s1 = 10;
	int a1[s1];  // vc 에서 에러.

	const int s2 = 10;
	int a2[s2];  // ok 

	const int s3 = s1;
	int a3[s3]; // error. 컴파일 상수가 아니다.
}

void foo(const int s)
{
	int ar[s]; // error.
}


