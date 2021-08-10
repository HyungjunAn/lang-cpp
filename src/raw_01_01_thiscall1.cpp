// cafe.naver.com/cppmaster 에 접속하시면 게시판 있습니다.
// 1일차 사전 소스 받아 두세요..

#include <iostream>
using namespace std;

// 주제 : 멤버 함수의 호출원리
// 핵심 1. 멤버 함수는 인자로 this 가 추가된다.
// 핵심 2. static 멤버 함수는 인자로 this 가 추가되지 않는다.
class Point
{
	int x;
	int y;
public:
	Point(int a = 0, int b = 0) : x(a), y(b) {}

	void set(int a, int b) // set( Point* this , int a, int b)
	{
		x = a; // this->x = a;
		y = b; // this->y = b;  로 변경됩니다.
	}
	static void foo(int a) //  void foo(int a)
	{
		x = a;// this->x = a;  로 변경될수 있어야 합니다.
					// 그런데, this 가 없습니다.
					// 그래서, static 멤버함수에서는
					// 멤버 데이타 접근이 안됩니다.
	}
};

int main()
{
	Point::foo(10); //ok.. 전달할 객체가 없다.

	Point p1, p2;

	p1.set(1, 2); // set(&p1, 1, 2) 로 변경됩니다.

					// push 2
					// push 1   실제 인자는 스택으로
					// mov ecx, &p1
					// call Point::set
	getchar();
}
