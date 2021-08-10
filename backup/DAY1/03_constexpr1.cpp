#include <iostream>
using namespace std;

// 컴파일 시간 상수와 vs 실행시간 상수

int main()
{
	int n = 10;
	const int c = n;   // 실행시간 상수
	//const int c = 10; // 컴파일 시간 상수

	//int* p = &c;	// error. 상수의 주소는 비상수를 가리키는 포인터에 
					// 담을수 없다.

	int* p = (int*)&c; // ok

	*p = 20;

	cout << c  << endl; // 10   20
	cout << *p << endl; // 20   20
}

