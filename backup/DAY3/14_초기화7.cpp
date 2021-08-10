#include <iostream>
#include <vector>
#include <initializer_list>
using namespace std;

// aggregate 초기화 :  배열, 구조체 처럼 = { } 로 초기화 가능한것들
//					생성자가 없어도 되는 것들..
struct Point
{
	int x, y;

	//Point() {} // 사용자가 만든 생성자가 있으면 aggreate type 아님.

	Point() = default; // aggregate   type   215 page

	//Point() {}   // 1
	//Point(int a, int b) {}  // 2
};

int main()
{
	Point p1;
	//Point p2(0,0);
	Point p2={ 0, 0 };
}

// 결론.. 꼭 기억 하세요

// A a(5);    // direct
// A a = 5;   // copy ... explicit  생성자라면 error
// A a;       // default..     모든 멤버 쓰레기값
// A a{};     // value 초기화.. 모든 멤버가 0
//				// 단 사용자가 만든 생성자가 없을때만

// A(){};        // 사용자가 만든 생성자
// A() = default; // 컴파일러가 만든 생성자

// A a(5);  // A(int)가 필요 
// A a{5}; // A(initializer_list<int>), A(int)

int n1 = 0;
int n1{ 0 }; // 좋은 표기법.