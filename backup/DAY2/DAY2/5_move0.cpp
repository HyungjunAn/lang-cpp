#include <iostream>
using namespace std;

// 복사 생성자를 정확히 이해해 봅시다.
class Point
{
	int x = 0;
	int y = 0;
public:
	Point() : x(0), y(0) {} // 1
	Point(int a, int b) : x(a), y(b) {} // 2

	// 아래 모양의 복사 생성자를 컴파일러가 만들어 줍니다.
	/*
	Point(const Point& p)
	{
		x = p.x;
		y = p.y;
	}
	*/
	// 복사 생성자의 모양 1. call by value
	// 복사 생성자가 무한히 반복호출되는 코드이다.
	// 컴파일 에러.. 복사 생성자의 인자는 값타입 이 될수 없다.
	//Point(Point p)  // Point p = p2
	//{
	//}

	// 2. 참조 : 컴파일 가능하다..
	// 문제점 : rvalue 를 받을수 없다.
	//         값 타입을 반환하는 함수의 반환값을 받을수 없다.
	//Point(Point& p) {}

	// 3. const lvalue referene : lvalue, rvalue를 모두 받는다.
	Point(const Point& p)
	{
		x = p.x;
		y = p.y;
	}
};

Point foo() 
{ 
	Point p(1, 1);  
	return p; 
}

int main()
{
	Point p1;		// 1
	Point p2(1, 2);	// 2
	Point p3(p2);	// Point(Point) 모양의 생성자가 필요하다.
					// 복사 생성자...
	Point p4 = p1;  // Point p4(p1) 과 동일(약간의 차이가 있긴하다)
					// 복사 생성자

	Point p5 = foo();
}