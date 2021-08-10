#include <iostream>
using namespace std;

// 02_new4
// 30 page
class Point
{
	int x, y;
public:
	Point(int a, int b) {}
};

int main()
{
	//Point pt1; // error. 디폴트 생성자가 없다.
	Point pt2(0, 0); // ok.

	// 힙에 Point 한개를 만들어 보세요
	Point* p1 = new Point(0, 0); // ok.


	// 힙에 Point 10개를 만들어 보세요
	//Point* p2 = new Point[10]; // error. 디폴트 생성자가 없다.

	// 메모리 할당과 생성자 호출을 분리하면 편리하다.
	Point* p2 = static_cast<Point*>(
		operator new(sizeof(Point) * 10));

	// 10개의 메모리에 10개의 객체를 생성(생성자호출)
	for (int i = 0; i < 10; i++)
	{
		new( &p2[i] ) Point(0, 0); // placement new
	}

	// 소멸자의 명시적 호출후에 메모리 해지.
	for (int i = 9; i >= 0; i--)
		p2[i].~Point();

	operator delete(p2);



	//delete[] p2; // ???
}

// 30 page




