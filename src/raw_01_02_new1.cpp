#include <iostream>
using namespace std;

// 핵심 1. malloc 과 new 의 차이점

// 핵심 2. new의 정확한 동작 방식 - 23 page
// A. 메모리 할당 - operator new() 라는 함수 사용
// B. 생성자 호출
// C. 주소를 해당 타입으로 캐스팅해서 반환
class Point
{
	int x, y;
public:
	Point() { cout << "Point()" << endl; }
	~Point() { cout << "~Point()" << endl; }
};

int main()
{
	// malloc : 메모리 할당
//	Point* p1 = static_cast<Point*>(malloc(sizeof(Point)));
//	free(p1);

	// new : 메모리 할당 + 생성자 호출
//	Point* p2 = new Point;
//	delete p2;


	// 생성자/소멸자 호출없이 메모리만 할당/해지
	Point* p3 = static_cast<Point*>(
			operator new(sizeof(Point)));

	operator delete(p3);
}





