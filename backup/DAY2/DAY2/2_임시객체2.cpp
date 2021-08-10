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
	Point* p2 = &Point(1, 2); // error. �ӽð�ü�� �ּҸ�
								// ������ ����.


	p.x = 10;           // ok..
	Point(1, 2).x = 10; // error. �ӽð�ü�� ��ȣ�� ���ʿ� �ü� ����.
						// lvalue �� �ɼ� ����.
						 
	Point& r1 = p;		// ok
	Point& r2 = Point(1, 2); //error. �ӽð�ü�� �����Ҽ� ����.


	const Point& r3 = Point(1, 2); // ok
					// const ������ ���� �Ҽ� �ִ�.
	r3.x = 10; // error. r3�� ��� ���� �̹Ƿ�!!


	// C++11.  ��������� �ӽð�ü�� ����Ű�� �;���.!!
	Point&& r4 = Point(1, 2);  // rvalue reference ����

}






