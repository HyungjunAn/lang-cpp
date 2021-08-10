
#include <iostream>
#include <memory>
using namespace std;

struct Point
{
	int x, y;
	Point(int a = 0, int b = 0) : x(a), y(b) {}
};

void* operator new(size_t sz)
{
	cout << sz << "byte 할당" << endl;
	return malloc(sz);
}

int main()
{
	// 331 page
	// 질문 : 아래 코드는 몇번의 메모리 할당이 있을까요 ?
	// => 2번( 객체 만들때, 관리객체(참조계수)만들때)
	//shared_ptr<Point> sp( new Point(1, 1) );

	// 객체 + 관리객체를 한번에 할당한다. - 331 그림
	// 메모리 파편화 현상을 줄일수 있다.
	shared_ptr<Point> sp = make_shared<Point>(1, 1);

}






