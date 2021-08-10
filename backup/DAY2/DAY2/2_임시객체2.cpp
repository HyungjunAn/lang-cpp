#include <iostream>
using namespace std;

class Point
{
public:
	int x, y;
	Point(int a, int b) : x(a), y(b) { cout << "Point()" << endl; }
	~Point()                         { cout << "~Point()" << endl; }
};

int main()
{
	Point p(1, 2); 
	
	Point* p1 = &p;           // ok
	Point* p2 = &Point(1, 2); // error. 임시객체는 주소를
								// 얻을수 없다.


	p.x = 10;           // ok..
	Point(1, 2).x = 10; // error. 임시객체는 등호의 왼쪽에 올수 없다.
						// lvalue 가 될수 없다.
						 
	Point& r1 = p;		// ok
	Point& r2 = Point(1, 2); //error. 임시객체는 참조할수 없다.


	const Point& r3 = Point(1, 2); // ok
					// const 참조로 참조 할수 있다.
	r3.x = 10; // error. r3는 상수 참조 이므로!!


	// C++11.  상수성없이 임시객체를 가리키고 싶었다.!!
	Point&& r4 = Point(1, 2);  // rvalue reference 문법

}






