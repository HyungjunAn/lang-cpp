#include <iostream>
using namespace std;

class Point
{
public:
	int x, y;
	Point(int a, int b) : x(a), y(b) { cout << "Point()" << endl; }
	~Point() { cout << "~Point()" << endl; }
};

// 임시객체와 함수 인자 - 230 page
// 함수 인자로는 임시객체를 사용하는 경우가 아주 많다.
// 함수 인자는 const &로 해야 임시객체를 받을수 있다.
void foo(const Point& p)
{
}

int main()
{
//	Point p(1, 2);
//	foo(p);

	foo(Point(1, 2)); // 임시객체를 사용한 인자 전달

	cout << "---------" << endl;
}















