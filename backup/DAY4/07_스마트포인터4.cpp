#include <iostream>
using namespace std;

// C++11 부터 표준 스마트 포인터를 제공합니다.
#include <memory>

// 스마트 포인터 오버헤드
// 1. raw pointer의 2배 크기를 가진다.
// 2. 참조계수를 관리하기 위한 메모리가 할당된다.

int main()
{
	// explicit 생성자.
//	shared_ptr<int> p1 = new int; // error
	shared_ptr<int> p2(new int); // ok

	// 32bit 환경..
	cout << sizeof(p2) << endl; // 8 이상..
								// 컴파일러 마다 다를수 있다
}





